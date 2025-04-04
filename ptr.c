
//wap to swap two number using pointer
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int *ptr= &arr;
int sum=0;
while(ptr<&arr[4])
{
    sum=*ptr+sum;
    
}
printf(" the is : %d",sum);
return 0;


}