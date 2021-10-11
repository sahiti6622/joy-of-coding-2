/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,sum=0,sum2;
    float rem;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("sum of digits of entered number is=%d\n ",sum);
    sum2=0;
    while(sum>0)
    {
        rem=sum%10;
        sum2=sum2+rem;
        sum=sum/10;
        
    }
    printf("single digit sum is equal to=%d",sum2);

    return 0;
}

