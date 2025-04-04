/*
Program No - 36
Topic      - STL-Vector
Program    - Creation & Display
Date       - 02.04.2025
Branch     - CSE (338)
Session No.- 10
Author     - Vivek Agrawal
*/

#include<iostream>
#include<vector>
#define SIZE 10
#define DT int

using namespace std;

int main()
{

	vector<DT> vtr;//no size
	int v_size=vtr.size();
    cout<<"SIze="<<v_size<<endl;
	int i=0,num;

	for (i=0;i<SIZE;i++)
	{
		vtr.push_back(10+i);
		cout<<10+i<<" is inserted";
		v_size=vtr.size();
		cout<<" SIze="<<v_size;
		cout<<endl;

	}






	cout<<"\n Vector Elements: ";

	for (i=0;i<vtr.size();i++)//n~vtr.size()
	{
		cout<<"\nSTL Vector Elements @ "<<i+1<<" ::"<<vtr[i];
	}



}

