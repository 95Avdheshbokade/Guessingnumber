#include<stdio.h>

 int main(){
 float tax=0,income;
 printf("enter your income\n");
 scanf("%f",&income);

 if (income>=25000 && income<=500000)
 {
     tax=tax+0.05 *(income-25000);

 }
 
 if (income>=50000 && income<=1000000)
 {
     tax=tax+0.2 *(income-500000);
     
 }
 
 if (income>=500000 && income<=1000000)
 {
     tax=tax+0.3 *(income-100000);
     
 }
 
 printf("your 1net income of the month of jan %f\n",tax);
 
 
 return 0;
 
 }
