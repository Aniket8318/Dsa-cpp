#include<iostream>
using namespace std;
#include <typeinfo>
#define SIZE 10

void display(int x, float y)
{
    cout<<"void display(int x, float y)"<<endl;
}

void display( float y, int x)
{
    cout<<"void display( float y, int x)";
}

int main()
{
    display(2,5.5f);
    display(5.5f,2);
}

