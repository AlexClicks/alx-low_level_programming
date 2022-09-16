#ifndef _MAIN_
#define _MAIN_
/**
 * _putchar - Write charter c to the std
 * @c: The parameter to compare
 *
 * Return: Returns 1 or 0
 */
int _putchar (char c);
/**
 * _isupper - Function for returning characters in upper case
 * @c: character to be tested
 *
 * Return: Return the lower case of a giben character
 */
int _isupper(int c);

/**
 * _isdigit - Function for checking if a digit is in a range of values
 * @c: Character that is going to be checked
 *
 * Return: Either return 0 or 1
 */
int _isdigit(int c);

/**
 * mul - Function that retun the multipleof two numbers
 *
 * @a: Character to use
 *
 * @b: Another character to use
 *
 * Return: Returns the sum of two number
 */

int mul(int a, int b);
/**
 * print_numbers - Function that print a range of numbers
 *
 * Return: Returns the range of numbers
 */

void print_numbers(void);
/**
 * print_most_numbers - Function that print a range with some exclusion
 *
 * Return: Returns the range of numbers
 */

void print_most_numbers(void);

/**
 * more_numbers - Prints multiples of numbers
 *
 * Return: Returns the numbers
 */
void more_numbers(void);

/**
 * print_line - print straight line
 *
 * Return: Returns the straight line formed
 */
void print_line(int n);

/**
 * print_diogonal - prints a diogonal
 *
 * Return: Return the diogonal formed
 */

void print_diagonal(int n);

/**
 * print_square - prints square of #
 *
 * Return: Return square formed by #
 */
void print_square(int size);

/**
 * print_triangle - prints the triangle
 * 
 * Return: Retuns the shape
 */
void print_triangle(int size);
#endif
