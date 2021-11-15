#include <stdio.h>
struct Student
{
    int Rollno;
    char name[10];
    char schoolname[10];
};

int main(int argc, char const *argv[])
{
    typedef struct Student std;

    typedef struct Student std2;

    std2 s1;

    s1.Rollno = 1;

    printf("Roll no of s1 is %d", s1.Rollno);
}
