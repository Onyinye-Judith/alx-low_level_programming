#include "main.h"

/**
 * _atoi - function to convert string to integer
 * @s: pointer to the string to be converted
 *
 * Return: return the  new integer value
 */

int _atoi(char *s)
{
	int sign, result, i;

	sign = 1;
	result = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		else
		{
			i++;
		}
	}

	return (sign * result);
}

#include <stdio.h> 
 #include <stdlib.h> 
 #include <ctype.h> 
  
  
 /** 
  * _isnumber - checks if string is a number 
  * @s: string 
  * 
  * Return: On success 1. 
  * If not a number, 0 is returned. 
  */ 
 int _isnumber(char *s) 
 { 
         int i, check, d; 
  
         i = 0, d = 0, check = 1; 
         if (*s == '-') 
                 i++; 
         for (; *(s + i) != 0; i++) 
         { 
                 d = isdigit(*(s + i)); 
                 if (d == 0) 
                 { 
                         check = 0; 
                         break; 
                 } 
         } 
         return (check); 
 } 
 /** 
  * main - Entry point 
  * 
  * @argc: Counts the number of parameters that go into main 
  * @argv: Pointer of array of pointers containing strings entering main 
  * Return: Always 0 (Success) 
  */ 
 int main(int argc, char **argv) 
 { 
         int i, n, ex; 
  
         ex = 0, n = 0; 
         if (argc > 1) 
         { 
                 for (i = 1; i < argc; i++) 
                 { 
                         if (_isnumber(argv[i])) 
                                 n += atoi(argv[i]); 
                         else 
                                 ex = 1; 
                 } 
         } 
         if (ex == 0) 
                 printf("%i\n", n); 
         else 
                 printf("%s\n", "Error"); 
         return (ex); 
 }
