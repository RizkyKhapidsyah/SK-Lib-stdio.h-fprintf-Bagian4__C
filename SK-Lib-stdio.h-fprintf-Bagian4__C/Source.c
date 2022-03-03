#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    //open the file in write and read mode
    FILE* pFile = fopen("test.txt", "w+");

    fprintf(pFile, "Characters: %c %c \n", 'b', 66);
    fprintf(pFile, "Decimals: %d %i \n", 200, 300);
    fprintf(pFile, "More Decimals: %ld %li \n", 20000L, 30000L);
    fprintf(pFile, "Octals: %o %#o \n", 100, 100);
    fprintf(pFile, "Hexadecimals: %x %#x %X %#X \n", 100, 100, 100, 100);
    fprintf(pFile, "Strings: %s \n", "Hello");
    fprintf(pFile, "Scientific notation: %e %E \n", 123.45, 123.45);
    fprintf(pFile, "Floats: %2.0f %2.2f %2.4f \n", 3.1416, 3.1416, 3.1416);
    fprintf(pFile, "Positive signed number = %+.2f \n", 3.1416);
    fprintf(pFile, "Padded number = %05d \n", 89);
    fprintf(pFile, "Number with Width = %*d \n", 5, 89);

    //set the position to the start
    rewind(pFile);

    //display the content of the file
    int c = getc(pFile);

    while (c != EOF) {
        putchar(c);
        c = getc(pFile);
    }

    fclose(pFile);

    _getch();
    return 0;
}

