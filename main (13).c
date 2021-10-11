/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,rev=0,count,rem=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
       rev=rev*10;
        rev=rev+num%10;
        num=num/10;
    }
    printf("reverse of the number is %d\n",rev);
    while(rev>0)
    {
        rem=rev%10;
        rev=rev/10;
        printf("%d\t",rem);
    }

    return 0;
}


