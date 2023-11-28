#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * error_exit - Prints an error message to stderr and exits with a status code.
 * @msg: The error message to print.
 * @exit_code: The exit status code.
 */
void error_exit(char *msg, int exit_code)
{
	dprintf(2, "%s\n", msg);
	exit(exit_code);
}

/**
 * print_elf_header - Displays the information contained in the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');

	printf("  Class:                             %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
		break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	/* Add more fields as needed */

	printf("  Type:                              %s\n",
	       header->e_type == ET_EXEC ? "EXEC (Executable file)" : "DYN (Shared object file)");
	printf("  Entry point address:               %#lx\n", header->e_entry);

	/* Add more fields as needed */
}

/**
 * main - Displays the information contained in the ELF header at the start of an ELF file.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int ac, char **av)
{
	int fd;
	Elf64_Ehdr header;

	if (ac != 2)
		error_exit("Usage: elf_header elf_filename", 97);

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Can't open file", 98);

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_exit("Error: Can't read from file", 98);

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Error: Not an ELF file", 98);

	print_elf_header(&header);

	close(fd);
	return (0);
}
