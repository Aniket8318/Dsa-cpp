#include<iostream>
using namespace std;

void display(int *B, int n)
{
    cout<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<B[i]<<"\t";
	}
	cout<<endl;

	for (int i=0;i<n;i++)
	{
		cout<<*(B+i)<<"\t"; // value after de-refernecing
	}
	cout<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<(B+i)<<"\t"; //memory address
	}

}
int main()
{
	//int A[6];//static array
	//int n=6;//size fixed

	int *A,n; //A--pointer
	cout<<"ENter Size";
	cin>>n; //size dynamic

	A=new int[n];//dynamic array this is eq to line26

	for (int i=0;i<n;i++) //array enter
	{
		cin>>A[i];
	}
	cout<<endl;

	for (int i=0;i<n;i++)
	{
		cout<<*(A+i)<<"\t"; // value after de-refernecing
	}
	cout<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<(A+i)<<"\t"; //memory address
	}
	//int *B; //B pointer type int

	//A-pointer -- base address -- int

	//B=A;
	display(A,n);


}
