#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check the string wheather they are intergers
* @str:used to hold the array of strings
* Return: Returns 0
*/

int check_num(char *str)
{
    unsigned int i; 
    i = 0;
    while (i < strlen(str))
    {
        if (!isdigit(str[i]))
        {
            return (0);
        }
        i++;
    }
    return (1);
}                                                                               
/**
* main - Print the name of the program
* @argc: Number of argument used to compile the program
* @argv: Array of the arguments
* Return: Returns 0
*/
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int sum = 0;
    count = 1;
    while (count < argc)
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]);
            sum += str_to_int;
        }
        else
        {
            printf("Error\n");
            return (1);
        }        
        count++;
    }

    printf("%d\n", sum);
    return (0);
}
