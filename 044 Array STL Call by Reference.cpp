/*
Program No - 44
Topic      - STL-Vector
Program    - Creation & Display
Date       - 02.04.2025
Branch     - CSE (338)
Session No.- 10
Author     - Vivek Agrawal
*/

#include<iostream>
#include<array>
#include<array>
#define SIZE 10

using namespace std;

void array_creation(array <int,SIZE> &arr)//CALL BY REFERENCE
{
	for (int i=0;i<SIZE;i++)
		arr[i]=i;
}

void array_creation2(int A[])//CALL BY REFERENCE
{
	for (int i=0;i<SIZE;i++)
		A[i]=i;
}

void array_display(array<int,SIZE> arr)
{
	int i=0,num;
	int v_size=arr.size();

	cout<<"\n array Elements: ";

	for (i=0;i<arr.size();i++)
	{
		cout<<"\nSTL array Elements @ "<<i+1<<" ::"<<arr[i];
	}
}

void array_display2(int A[])////ALWAYS BY CALL BY REFERENCE ALEWAYS
{
	int i=0,num;


	cout<<"\n array Elements: ";

	for (i=0;i<SIZE;i++)
	{
		cout<<"\n array Elements @ "<<i+1<<" ::"<<A[i];
	}
}

int main()
{

	array<int,SIZE> arr={0};
	int A[SIZE]={0};

	array_creation(arr); // CALL BY VALUE

	array_display(arr);

	array_creation2(A); // CALL BY REFERENCE ALWAYS

	array_display2(A);





}

