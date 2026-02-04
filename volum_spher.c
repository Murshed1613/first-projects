#include <stdio.h>
#include <math.h>
int main() {
    float radius, volume, pi = 3.1416;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    volume = (4.0/3.0) * pi * pow(radius,3);
    printf("Volume of sphere = %f\n", volume);
    return 0;
}
