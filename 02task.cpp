#include <iostream>
using namespace std;

int main(){

int n, sum=0;
cout<<"Please enter a natural number where you want to end the summation of numbers starting from 1: ";
cin>>n;
for(int i=1; i<=n; i++){
    sum+=i;
}
cout <<sum;

    return 0;
}