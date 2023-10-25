#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    int Summe = 0;
    for (i = 1; i < argc; i++){
        Summe = Summe + atoi(argv[i]);
        printf("%s\n", argv[i]);
    };
    printf("%s%d\n", "Summe: ", Summe);
}
