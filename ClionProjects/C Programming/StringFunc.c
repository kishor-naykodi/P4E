#include <stdio.h>
#include <string.h>

int main( ) { 
    char  str[20];
    printf("Enter First String here : ");
    gets(str);

    char  str2[11];
    printf("Enter First String here : ");
    gets(str2);

//strccat(s1,s2) concatination of two strings and strcpy(s1,s2) copy s2 into s1
    char  str3[30] ;
    strcpy(str3,strcat ( str, str2 ));
    puts(str3);

//strlen() Finding the length of string
    int  str_length;
    str_length= strlen ( str ) ;
    printf ( " length = %d\n", str_length );

//Reversing the string
    strrev(str);
    printf("After reversing string is: %s",str);
}
