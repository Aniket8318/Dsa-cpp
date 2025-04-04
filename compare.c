#include<stdio.h>
#include<conio.h>
int main(){
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;i<n;j++){
        if(arr[i]>arr[j])
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
    for( int j=0;j<n;j++){
        printf("%d",arr[j]);
    }
return 0;
}
