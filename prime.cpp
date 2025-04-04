#include<iostream>
using namespace std;

string isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(i%n == 0){
            return "non prime ";
        }
    }
    return "prime ";
}

int main(){
    int n=7;
    cout <<isprime(n)<<endl;
    return 0;

}