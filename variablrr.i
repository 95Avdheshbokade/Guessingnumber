#include<stdio.h>
void printAdd(int a){
    printf("The value of variable a is %u" , &a);
}
int main(){
    int i=4
    printf("The address of i is %d/n , i");
    printAdd(i);
    printf("The address of variable i is %d/n , i");
    return 0;
}