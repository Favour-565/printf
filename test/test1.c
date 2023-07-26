
#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(void)
{
	int my_INT_MAX;
    int my_INT_MIN;

    my_INT_MAX = INT_MAX;
    my_INT_MIN = INT_MIN;
	int len;
       int len2;	

       len = _printf("%d", 1024);
        len2 = printf("%d", 1024);
        fflush(stdout);
        if (len != len2)
        {
                printf("Lengths differ.\n");
                fflush(stdout);
                return (1);
        }

	printf("%d\n", 65176);
        _printf("%d\n", 65176);
        printf("%d\n", -777765176);
        _printf("%d\n", -777765176);
        printf("%d\n", 00002);
        _printf("%d\n", 00002);
        printf("%d\n", 0);
        _printf("%d\n", 0);
        printf("%d\n", 7);
        _printf("%d\n", 7);
        printf("%d\n", -2255445);
        _printf("%d\n", -2255445);
        printf("Maximum value of int: %d\n", my_INT_MAX);
        _printf("Maximum value of int: %d\n", my_INT_MAX);
        printf("Minimum value of int: %d\n", my_INT_MIN);
        _printf("Minimum value of int: %d\n", my_INT_MIN);
        printf("--------------------------------\n");
        printf("%i\n", 65176);
        _printf("%i\n", 65176);
        printf("%i\n", 0);
        _printf("%i\n", 0);
        printf("%i\n", -2255445);
        _printf("%i\n", -2255445);
        printf("Maximum value of int: %i\n", my_INT_MAX);
        _printf("Maximum value of int: %i\n", my_INT_MAX);
        printf("Minimum value of int: %i\n", my_INT_MIN);
        _printf("Minimum value of int: %i\n", my_INT_MIN);

	
	return (0);
}
