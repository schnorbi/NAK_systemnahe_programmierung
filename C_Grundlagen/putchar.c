#include <stdio.h>

void print_int(int n){
    if ( n >= 10){
        print_int(n/10);
    }
    putchar('0' + (n % 10));
}

//Test
void main(){
    print_int(30);
    printf("\n");
    print_int(12432);
    printf("\n");
    print_int(0);
    printf("\n");
    print_int(9);
    printf("\n");
    print_int(10);
}

