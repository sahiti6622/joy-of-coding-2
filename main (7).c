/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
void main()
{
int op1,op2,res; 
char oper;
printf("Enter the operator\n"); 
scanf("%c",&oper);

 printf("Enter two operands \n");
scanf("%d%d",&op1,&op2);
switch(oper)
{
case '+': res=op1+op2; 
break;
case '-': res=op1-op2; 
break; 
case '*': res=op1*op2;
break;

case '/': if(op2==0) 
 {
 printf("Divide by zero error");
 exit(0);
 }
 else
 res=op1/op2;
break;
default: printf("Not a valid operator");
exit(0); 
}
printf("Result=%d",res); 
}

