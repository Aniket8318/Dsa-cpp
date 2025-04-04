/*
Program No - 29
Topic      - Generic Programming/Templates
Program    - Class Templates
Date       - 07.03.2025
Branch     - CSE-A (338)
Session No.- 07
Author     - Vivek Agrawal
*/
#include<iostream>
using namespace std;
#include <typeinfo>

template<typename CSE>//CSE-CUSTOMISABLE DT AS PER DT OF ARGUMENT
class ops
{
    CSE a,b,c;

public:
    CSE add()
    {   cout<<"a & b of type "<<typeid(CSE).name()<< " ";
        cin>>a>>b;
        c=a+b;
        auto d=c;//RUN TIME ATOMATIC TYPE
        cout<<"CSE template (template CSE)c type "<<typeid(c).name()<< " "<<endl;
        cout<<"auto        (AUTO VARIABLE)d type "<<typeid(d).name()<< " "<<endl;
        return c;
    }

};

int main()
{
    ops<int> a;
    auto ans=a.add();
    cout<<"ANS INT "<<typeid(ans).name()<<" "<<ans<<endl;

    ops<double> b;
    cout<<"ANS double "<<b.add()<<endl;

    ops<char> c;
    cout<<"ANS char "<<c.add()<<endl;
}
