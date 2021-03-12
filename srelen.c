#include<stdio.h>
int strlen(char * st){
    char *ptr = st;
    int len=0;
    while (*ptr!='/0'){
len++;
ptr++;
    }
    return len;
}
int main(){
    char st1[] = "Harry";
    int l=strlen(st);
printf("The length of thids string is %d", l);
return 0;

    
}