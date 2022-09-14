#ifndef _MAIN_
#define _MAIN_
/**
 * _putchar - Write character c to the std
 * @c: parameter to compare
 *
 * Return: 1 or 0
 * 
 */
int _putchar (char c);
/**
 * print_alphabet - A function to print the alphabets
 *
 * Return: Returns all the alphabet in small letter
 */

void print_alphabet(void);
/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 *
 * Return: Returns the alphabes printed
 *
 */
void print_alphabet_x10(void);
/**
 * +islower - prints if c is lower thatn z
 *
 * @c: character to use
 *
 * Return: 1 or 0
 */
int _islower(int c);

/** 
 * +isalpha - prints answer if character is alphabet
 * @c: character to use in the function
 * Return: returns 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - Print the sign of any number
 * @n: character to use in the function
 * Return: Returns either 9 or 1
 */
int print_sign(int n);

/**
 * _abs - Convert any number to its absolute value
 * @n:character to use in this function
 * Return: Returns either n or -n
 */
int _abs(int);

/**
 * print_last_digit - prints the last digit of a number
 * Return: Returns the last digit of any number
 */
int print_last_digit(int);

/**
 * vmjack_bauer - prints every minutes of vmjack_bauer's day
 * Return: Return all the minutes of the day
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table
 * Return: Returns the multiples of a given variable
 */
void times_table(void);

/**
 * add - add two number
 * return the sum of two number
 */
int add(int, int);
#endif
