#include<iostream>
using namespace std;
int n=6;
void display(int *B)
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
	int A[6]={10,20,30,40,50,60};


	for (int i=0;i<n;i++)
	{
		cout<<A[i]<<"\t";
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
	display(A);


}
