#include <stdio.h>
#include <conio.h>

long decimalToBinary(long n);
int main() {
    long i;
    long decimal;
    for(i=0; i<=64;i++)
    {
    printf("Binary number of %ld is %ld\n", i, decimalToBinary(i));
    }
 getch();
    return 0;
}

/* Function to convert a decinal number to binary number */
long decimalToBinary(long n) {
    int remainder;
 long binary = 0, i = 1;

    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
