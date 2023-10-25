#include <stdio.h>

void main(){
    char **format1 = "0x%04X";
    char **format2 = "|%8s|%8s|";
    char **format3 = "%.2f EUR";

    printf(format1, 0x12ab);
    printf(format1, 0x2a);
    printf(format2, "text1", "text2");
    printf(format2, "langer Text", "und noch ein langer Text");
    printf(format3, 234.65f);
    printf(format3, 0.0f);
}

