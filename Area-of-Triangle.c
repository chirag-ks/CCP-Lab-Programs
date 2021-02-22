// WAP to calculate area of triangle using functions.

#include <stdio.h>
#include <math.h>

float area(float, float, float);
int main()
{
    float a, b, c, ar;
    printf("Enter the length of the three sides of the Triangle.\n");
    scanf("%f %f %f", &a, &b, &c);
    ar=area(a, b, c);
    printf("The area of the triangle is = %f square units\n", ar);
    return 0;
}
float area(float x, float y, float z)
{
    float s = (x + y + z) / 2;
    float a = sqrt(s * (s - x) * (s - y) * (s - z));
    return a;
}
