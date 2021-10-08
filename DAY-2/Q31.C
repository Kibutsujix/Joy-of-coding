#include<stdio.h>
#include<stdlib.h>
int main()
{
int op1,op2,res; // Declaration of variables
char oper;
printf("Enter the operator\n"); // Reading Operator
scanf("%c",&oper);
// Reading Two Numbers
 printf("Enter two operands( Only integers) \n");
scanf("%d%d",&op1,&op2);
switch(oper)
{
case '+': res=op1+op2; // Addition
break;
case '-': res=op1-op2; // Subtraction
break;
case '*': res=op1*op2; // Multiplication
break;
// Checking for Division by zero error
case '/': if(op2==0)
 {
 printf("Divide by zero error");
 exit(0); // Program Termination
 }
 else
 res=op1/op2;
break;
default: printf("Not a valid operator");
exit(0);
}
printf("Result=%d",res); // Displaying the Result   
}