# include <stdio.h>

float toCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    // Set the temperature in Fahrenheit
    float f_temp = 98.6;

    // Call the function with the fahrenheit value
    float result = toCelsius(f_temp);

    // Print the fahrenheit value
    printf("Fahrenheit: %.1f\n", f_temp);

    // Print the Celsius value
    printf("Celsius: %.1f\n", result);

    return 0;
}