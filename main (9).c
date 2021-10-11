/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,amount;
    printf("Enter the no of books\n");
    scanf("%d",&num);
    amount=num*10;
    if(num<10000)
    {
        
          printf("total amount is=%d",amount);
    }
    else if(num>10000&&num<15000)
    {
        amount=amount-((amount*10)/100);
    printf("total amount on 10 percent discount is=%d",amount);
       
    }
    else if(num>15000&&num<=20000)
    {
         amount=amount-((amount*20)/100);
         printf("total amount on 20 percent discount is=%d",amount);
    }
    

    return 0;
}

