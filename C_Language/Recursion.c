#include <stdio.h>

unsigned int factorial(unsigned int x){
    if(x == 1){
        return x;
    }
    else if(x > 1){
        return x * factorial(x - 1);
    }

    return 1;
}

int main(){
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));

    return 0;
}