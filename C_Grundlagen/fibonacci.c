#include <stdio.h>

int fib(int n){
    int fib_one = 0;
    int fib_two = 1;
    for (int i = 0; i<n; i++){
        int fib_new = fib_one + fib_two;
        fib_one = fib_two;
        fib_two = fib_new;
    }
    return fib_one;
}

//Test
void main(){
    printf("%i\n", fib(30));
    printf("%i\n", fib(0));
    printf("%i\n", fib(1));
    printf("%i\n", fib(4));
    printf("%i\n", fib(10));
}
