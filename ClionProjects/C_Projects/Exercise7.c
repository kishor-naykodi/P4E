#include <stdio.h>

struct Driver
{
    char name[22];
    char drId[5];
    int distTravel;
} d1, d2, d3;

void getDetails()
{

    printf("D1 Enter your details here...\n");
    printf("Name : ");
    scanf("%s", &d1.name);
    printf("Driver Id : ");
    scanf("%s", &d1.drId);
    printf("Traveled distance : ");
    scanf("%d", &d1.distTravel);
    printf("\n");

    printf("D2 Enter your details here...\n");
    printf("Name : ");
    scanf("%s", &d2.name);
    printf("Driver Id : ");
    scanf("%s", &d2.drId);
    printf("Traveled distance : ");
    scanf("%d", &d2.distTravel);
    printf("\n");

    printf("D3 Enter your details here...\n");
    printf("Name : ");
    scanf("%s", &d3.name);
    printf("Driver Id : ");
    scanf("%s", &d3.drId);
    printf("Traveled distance : ");
    scanf("%d", &d3.distTravel);
    printf("\n");
}

void printDetails()
{

    printf("Printing Details of all drivers:\n");

    printf("Details for D1: \n");
    printf("Name: %s\n", d1.name);
    printf("Driver Id: %s\n", d1.drId);
    printf("Distance Traveled: %d\n\n", d1.distTravel);

    printf("Details for D2: \n");
    printf("Name: %s\n", d2.name);
    printf("Driver Id: %s\n", d2.drId);
    printf("Distance Traveled: %d\n\n", d2.distTravel);

    printf("Details for D3: \n");
    printf("Name: %s\n", d3.name);
    printf("Driver Id: %s\n", d3.drId);
    printf("Distance Traveled: %d\n\n", d3.distTravel);
}

int main(int argc, char const *argv[])
{
    getDetails();
    printDetails();
    return 0;
}
