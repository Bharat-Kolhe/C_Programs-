#include <stdio.h>
int main()
{
    float km;
    scanf("%f", &km);
    printf("Meters: %.2f\nFeet: %.2f\nInches: %.2f\nCentimeters: %.2f",
           km * 1000, km * 3280.84, km * 39370.1, km * 100000);
    return 0;
}
