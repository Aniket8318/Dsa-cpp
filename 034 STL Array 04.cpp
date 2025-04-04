/*
Program No - 34
Topic      - STL
Program    - Arrays Call By Value
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

void change(int A[]) //ARRAY BY VALUE
{
    for (int i=0;i<SIZE;i++)
    {
        A[i]+=5;

    }

    cout<<"\nA[i]+=5;\n";
}
void display(int A[])
{
    cout<<endl;
    for (int i=0;i<SIZE;i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<endl;
}
void change(array<int,SIZE> arr) //ARRAY BY DEFAULT IS CALL BY REFERENCE-Pointers internally
{
    for (int i=0;i<SIZE;i++)
    {
        arr[i]+=5;

    }
    cout<<"\narr[i]+=5;\n";
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
    change(A);
    display(A);

    //NOW STL ARRAY IS CALLED

    display(arr);
    change(arr);
    display(arr);

}
