/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf(" Enter the integers\n");
    scanf("%d%d%d",&a,&b,&c);
    while(a>0&&b>0&&c>0)
    {
    if (a>b&&b>c)
    {
        printf("a is greater");
    }
    else if(a<b&&a>c)
    {
        printf("b is greater");
    }
    else
    {
        printf("c is greater");
    }
    exit(0);
    
    }
    printf("invalid integer");

    return 0;
}




