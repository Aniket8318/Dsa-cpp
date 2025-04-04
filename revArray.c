#include<stdio.h>
#include<conio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int temp=0;
    while(s<e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}