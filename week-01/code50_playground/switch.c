#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int x = GetInt();

    switch(x)
    {
        case 5:
            printf("Five");
            break;
        case 4:
            printf("Four");
            break;
        case 3:
            printf("Three");
            break;
        case 2:
            printf("Two");
            break;
        case 1:
            printf("One");
            break;
        default:
            printf("Blast-Off!");
            break
    }
}
