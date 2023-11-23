Bit manipulation involves manipulating individual bits within a binary number to achieve desired results. Here are some common bitwise operations:

1. AND (&): Performs a bitwise ANDoperation. It sets each bit to 1 if both corresponding bits are 1.
Example: 0b1010 & 0b1100 results in 0b1000.

2. OR (|): Performs a bitwise OR operation. It sets each bit to 1 ifat least one of the corresponding bits is 1.
Example: 0b1010 | 0b1100 results in 0b1110.

3. XOR (^): Performs a bitwise XOR(exclusive OR) operation. It sets each bit to 1 if only one of the corresponding bits is 1.
Example: 0b1010 ^ 0b1100 results in 0b0110.

4. NOT (~): Performs a bitwise NOToperation. It inverts each bit, turning 1s into 0s and vice versa.
Example: ~0b1010 results in 0b...11110101 (depending on the bit size).

5. Left Shift (<<): Shifts the bits of a number to the left by a specified number of positions, adding zeros to the right.
Example: 0b0001 << 2 results in 0b0100.

6. Right Shift (>>): Shifts the bits of a number to the right by a specified number of positions, filling the leftmost bits with the original leftmost bit (0 or 1).
Example: 0b1000 >> 2 results in 0b0010.

These operations are often used inlow-level programming for tasks such as setting or clearing specificbits, extracting or modifying certain bit patterns, and optimizing code for memory or performance.

Let me know if you have specific questions or if you'd like more examples!
