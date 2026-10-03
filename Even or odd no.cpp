#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. to check: ";
    cin>>n;
    if(n%2==0){
        cout<<"The no. is even"<<"\n";
    }
    else{
        cout<<"The no. is odd"<<"\n";
    }
    return 0;
}