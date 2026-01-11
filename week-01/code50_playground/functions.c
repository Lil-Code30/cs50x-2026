#include <cs50.h>
#include <stdio.h>

void meow(int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("Meow!\n");
    }
}

int main(void)
{
    meow(10);
}
