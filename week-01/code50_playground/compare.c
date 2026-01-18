#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    bool expr = false;

    if(x > y){
        printf("x is greater than y\n");
    }else if(x < y) {
        printf("X is not less than y\n");
    }else{
        printf("X is equal to y");
    }

    // Ternary operation

    int ans = (expr) ? 300 : 200;
}
