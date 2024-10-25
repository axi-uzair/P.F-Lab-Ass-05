#include <iostream>
using namespace std;

int main(){

int num;
cout <<"PLease enter a number of which you want to print a multiplication table: ";
cin >>num;
for(int i=1; i<=10; i++){
    cout <<num<<"x"<<i<<"="<<num*i<<endl;
}

    return 0;
}