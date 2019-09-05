#include <stdio.h>

#define FREEZINF_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

int main() 
{
    float fatrenheit,celsius;
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fatrenheit);
    celsius = (fatrenheit - FREEZINF_PT) * SCALE_FACTOR;
    printf("Celesius equivalent: %.1f\n",celsius);
    return 0;
}