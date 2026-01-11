#include <stdio.h>

int main(void){
    int i = 0;

    printf("While Loop");
    while( i < 3){
        printf("meow\n");
        i++;
    }

    printf("For loop");
    for(int j = 0; j < 3; j++){
        printf("Meow!\n");
    }
}
