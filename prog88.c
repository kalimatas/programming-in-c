#include <stdio.h>

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;

    return x;
}

float squareRoot(float);

int main(void)
{
    printf("Square root of 4 is %f\n", squareRoot(4));
    printf("Square root of 144 is %f\n", squareRoot(144));

    return 0;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;

    while (absoluteValue(guess * guess - x) >= epsilon)
        guess = (x / guess + guess) / 2.0;

    return guess;
}
