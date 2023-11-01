#include <stdio.h>

unsigned int CountUpperCase(char *string){
    int counter = 0;
    for (int i = 0; string[i] != 0; i++){
        if ('A' <= string[i] && string[i] <= 'Z' ){
            counter++;
        }
    }
    return counter;
}

//Test
void main(){
    printf("%s hat %i UpperCase Character", "aBcDeF", CountUpperCase("aBcDeF"));
}
