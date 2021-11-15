#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(float x1, float y1, float x2, float y2)
{
    float ed = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return sqrt(ed);
}

float areaOfCircle(float x1, float y1, float x2, float y2, float (*fptr)(float x1, float y1, float x2, float y2))
{
    double ed = fptr(x1, y1, x2, y2);
    printf("%f", ed);
    return 3.14 * (ed * ed);
}

int main(int argc, char const *argv[])
{
    float x1, y1, x2, y2;
    printf("Enter a values for x1 : \n");
    scanf("%f", &x1);
    printf("Enter a values for y1 : \n");
    scanf("%f", &y1);
    printf("Enter a values for x2 : \n");
    scanf("%f", &x2);
    printf("Enter a values for y2 : \n");
    scanf("%f", &y2);

    float Ed = Edistance(x1, y2, x2, y2);
    printf("The Edistance is : %f\n", Ed);
    float c = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("And area of circle is : %f", c);

    return 0;
}
