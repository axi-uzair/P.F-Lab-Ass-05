#include <iostream>
using namespace std;

int main(){

int sub,sum=0,marks;
float avg;
cout <<"Please enter the number of subjects: ";
cin >>sub;
for(int i=1; i<=sub; i++){
    cout <<"Please enter the "<<i<<" subject number out of 100: ";
    cin >>marks;
    sum=sum+marks;
}
avg =sum/sub;
if(marks >= 90)
    cout <<"Your grade is 'A'";
else if(marks >= 80)
    cout <<"Your grade is 'B'";
else if(marks >= 70)
    cout <<"Your grade is 'C'";
else if(marks >= 60)
    cout <<"Your grade is 'D'";
else
    cout <<"Your grade is 'F'";

    return 0;
}