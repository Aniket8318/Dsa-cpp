#include<stdio.h>
#include<conio.h>
int main(){
    int arr[6]={3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    printf("maximum element is :%d",max);
    return 0;
}