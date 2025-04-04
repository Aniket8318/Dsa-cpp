#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[]={4,5,6,7,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=1;i<n;i=i+2){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;

}
