#include <stdio.h>
#include "incl_file.c"

#define PI 3.14
#define Area_OF_Circle(r) (3.1415 * (r) * (r))
int main()
{

    printf("%f\n", PI);
    printf("The area of circle is %f\n", Area_OF_Circle(5));
    Greet();

    return 0;
}