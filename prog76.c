#include <stdio.h>

int main(void)
{
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };

    int base, index = 0;
    int convertedNumber[64];
    long int numberToConvert;

    printf("Number to be converted: ");
    scanf("%li", &numberToConvert);
    printf("Base: ");
    scanf("%i", &base);

    do {
        convertedNumber[index++] = numberToConvert % base;
        numberToConvert /= base;
    } while (numberToConvert != 0);

    for (--index; index >=0; --index)
        printf("%c", baseDigits[convertedNumber[index]]);

    printf("\n");

    return 0;
}
