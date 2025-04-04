#include<iostream>
using namespace std;
#include <typeinfo>
#define SIZE 10
void change(int A[]) //ARRAY BY DEFAULT IS CALL BY REFERENCE-Pointers internally
{
    for (int i=0;i<SIZE;i++)
    {
        A[i]+=5;

    }
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


int main()
{
    int A[SIZE]={1,2,3}; //1 2 3 and rest all zeros
    int B[SIZE]; // all garbages

    display(A);
    change(A);
    display(A);

    //Sizes of A&B are fixed at compile time and can't be changed in program

}
