/*
Program No - 42
Topic      - STL-Vector
Program    - Creation & Display
Date       - 02.04.2025
Branch     - CSE (338)
Session No.- 10
Author     - Vivek Agrawal
*/
#include<iostream>
using namespace std;

void change1 (int x)//Call by value
{
    cout<<"\nIn Function Call Copy X="<<x;
    x=x+10;
    cout<<"\nx=x+10;";
    cout<<"\nIn Function Call Copy X="<<x;

}

void change2 (int &x)//Call by reference
{
    cout<<"\nIn Function Call Copy X="<<x;
    x=x+10;
    cout<<"\nx=x+10;";
    cout<<"\nIn Function Call Copy X="<<x;

}
int main()
{
	int x=10;
	cout<<"\nBefore Function Call Original X="<<x;
	cout<<"\nchange1(x);";
	change1(x); //CALL BY VALUE, when changes in change() do not reflect back in main()
	cout<<"\nAfter Function Call Original X="<<x;

	cout<<"\nBefore Function Call Original X="<<x;
	cout<<"\nchange2(&x);";
	change2(x); //CALL BY REFERENCE, when changes in change() reflect back in main()
	cout<<"\nAfter Function Call Original X="<<x;

}
