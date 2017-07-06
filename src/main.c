#include <stdio.h>
#include "temperature_converter.h"


int main() {
    float celsius;

    celsius = 0;
    while (celsius < 100) {
        celsius += 21;

        printf("%.2f C = %.2f F = %.2f K\n", celsius, celsius_to_fahrenheit(celsius), celsius_to_kelvin(celsius));
    }
    return 0;
}