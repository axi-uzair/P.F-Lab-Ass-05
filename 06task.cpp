#include <iostream>
using namespace std;

int main(){

int num;
cout <<"Please enter the number till where you want to print the cube of numbers starting from 1: ";
cin >>num;
for(int i=1; i<=num; i++){
    cout <<i*i*i<<endl;
}

    return 0;
}