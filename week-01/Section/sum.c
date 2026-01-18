#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
    Sum Exercise
        Create a program, sum.c that asks a user asks the user to provide ten
        integers as input and prints the sum.
    */

    int count = 10;
    int sum = 0;

    do{
        int number = get_int("Number: ");
        sum += number;
        count--;

    } while(count > 0);

    printf("Sum : %i\n", sum);
}
