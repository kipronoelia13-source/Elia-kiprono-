//
/*
Name:Elia kiprono 
Reg no:PA106/G/28745/25
Description.volume of a cylinder 
*/
#include <stdio.h>
#define PI 3.1416   // Define constant value of π

int main() {
    float radius, height, volume, surfaceArea;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = PI * radius * radius * height;

    // Calculate surface area
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("\nVolume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}