/*
Program No - 33
Topic      - STL
Program    - Arrays
Date       - 28.03.2025
Branch     - CSE-A (338)
Session No.- 08
Author     - Vivek Agrawal
*/

#include<iostream>
using namespace std;
#include <typeinfo>
#include<array>
#define SIZE 10


void display(int A[])
{
    cout<<endl;
    for (int i=0;i<SIZE;i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;
}

void display(array<int,SIZE> arr)
{
    cout<<endl;
    for (int i=0;i<SIZE;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}



int main()
{
    int A[SIZE]={1,2,3}; //1 2 3 and rest all zeros
    array<int,SIZE> arr={1,2,3};//1 2 3 and rest all zeros

    display(A);
 

    //NOW STL ARRAY IS CALLED

    display(arr);


}
