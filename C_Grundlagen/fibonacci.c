#include <stdio.h>

int fib_iter(int n){
    int fib_one = 0;
    int fib_two = 1;
    for (int i = 0; i<n; i++){
        int fib_new = fib_one + fib_two;
        fib_one = fib_two;
        fib_two = fib_new;
    }
    return fib_one;
}

int fib_rec(int n){
    if (n <= 1){
        return n;
    }
    else {
        return fib_rec(n - 2) + fib_rec(n -1);
    }
}

//Test
void main(){
    printf("%i\n", fib_iter(30));
    printf("%i\n", fib_iter(0));
    printf("%i\n", fib_iter(1));
    printf("%i\n", fib_iter(4));
    printf("%i\n", fib_iter(10));
    printf("%i\n", fib_rec(30));
    printf("%i\n", fib_rec(0));
    printf("%i\n", fib_rec(1));
    printf("%i\n", fib_rec(4));
    printf("%i\n", fib_rec(10));
}
