#include<stdio.h>
int main(){
    int var=5;
    int *ptr;
    ptr=&var;
    printf("%d",var);
    printf("%d",ptr);
    printf("%d",*ptr);
    return 0;
}
