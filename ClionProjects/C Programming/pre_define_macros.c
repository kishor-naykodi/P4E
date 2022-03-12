#include <stdio.h>

int main()
{
    printf(__DATE__);
    printf("\n");
    printf(__TIME__);
    printf("\n");
    printf(__FILE__);
    printf("\n");
    printf("%d", __LINE__);
    printf("%d\n", __STDC__);
    return 0;
}