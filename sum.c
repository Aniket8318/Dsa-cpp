#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={4,5,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;

}
