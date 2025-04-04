/*
Program No - 38
Topic      - STL
Program    - Common Functions
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

	vtr.push_back(101);
	vtr.push_back(102);
	vtr.push_back(103);
	vtr.push_back(104);

	int v_size=vtr.size();

	cout<<"\n Vector Elements: ";

	for (i=0;i<vtr.size();i++)
	{
		//cout<<"\nSTL Vector Elements @ "<<i+1<<" ::"<<vtr[i];
		cout<<"\nSTL Vector Elements @ "<<i+1<<" ::"<<vtr.at(i);
	}

	cout<<"\n Array Elements: ";

	for (i=0;i<arr.size();i++)
	{
		//cout<<"\nSTL Array Elements @ "<<i+1<<" ::"<<arr[i];
		cout<<"\nSTL Array Elements @ "<<i+1<<" ::"<<arr.at(i);
	}

	cout<<"\nArray First Element: "<<arr.front();
	cout<<"\nArray Last Element: "<<arr.back();

	cout<<"\nVector First Element: "<<vtr.front();
	cout<<"\nVector Last Element: "<<vtr.back();





}

