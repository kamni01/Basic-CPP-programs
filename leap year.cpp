#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a year: ";
    cin>>n;
    if(n %400 == 0 || (n % 4 == 0 ) && (n%100 !=0 )){
        cout<<"Leap year."<<"\n";
    }
    else
    cout<<"Not a Leap year,"<<"\n";
    return 0;
}