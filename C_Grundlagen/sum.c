#include <stdio.h>

unsigned int sum(unsigned int array[]){
    unsigned int sum = 0;
    for (int i = 0; array[i] != 0; i++){
        sum = sum + array[i];
    }
//    while(array[i] != 0){
//        sum = sum + array[i];
//        i++;
//    }
    return sum;
}

//Test
void main(){
    unsigned int val[]={3, 4, 2, 4, 1, 0};
    printf("%u", sum(val));;
}