#include<stdio.h>
#include<string.h>

struct  employee{

    int code;
    float salary;
    char name[10];

};

 int main(){
     int a=34;
     char b=a;
     float d=234.56



     struct employee e1;
     e1 code=100;
     e1 salary=234.56;
     strcpy(e1.name, "avdhesh");

     return 0;
     
 }