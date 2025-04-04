/*
Program No - 37
Topic      - STL-Vector vs ARray
Program    - Creation & Display
Date       - 02.04.2025
Branch     - CSE (338)
Session No.- 10
Author     - Vivek Agrawal
*/

#include<iostream>
#include<array>
#include<vector>
#define SIZE 10

using namespace std;

int main()
{
	array<int, SIZE> arr={1,2,3};
	vector<int> vtr;

	int i=0,num;

	for (i=0;i<SIZE;i++)
	vtr.push_back(10+i);

	int v_size=vtr.size();

	cout<<"\n Vector Elements: ";

	for (i=0;i<vtr.size();i++)
	{
		cout<<"\nSTL Vector Elements @ "<<i+1<<" ::"<<vtr[i];
	}

	cout<<"\n Array Elements: ";

	for (i=0;i<arr.size();i++)
	{
		cout<<"\nSTL Array Elements @ "<<i+1<<" ::"<<arr[i];
	}




}

