/*
Program No - 41
Topic      - STL-Vector
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

void vector_creation(vector <int> &vtr)//CALL BY REFERENCE
{
	vtr.push_back(101);
	vtr.push_back(102);
	vtr.push_back(103);
	vtr.push_back(104);
	vtr.push_back(105);
	vtr.push_back(106);
	vtr.push_back(107);
	vtr.push_back(108);
	vtr.push_back(109);
	vtr.push_back(110);
	vtr.push_back(111);
}

void vector_display(vector<int> vtr)
{
	int i=0,num;
	int v_size=vtr.size();

	cout<<"\n Vector Elements: ";

	for (i=0;i<vtr.size();i++)
	{
		cout<<"\nSTL Vector Elements @ "<<i+1<<" ::"<<vtr[i];
	}
}

int main()
{

	vector<int> vtr;

	vector_creation(vtr); // CALL BY VALUE

	vector_display(vtr);




}

