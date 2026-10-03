#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter any three numbers.";
    cin>>x>>y>>z;
    if((x>y) && (x>z)){
        cout<<x<<" is greater."<<"\n";
    }
    else if((y>z) && (y>x)){
        cout<<y<<" is greater."<<"\n";
    }
    else if((z>x) && (z>y)){
        cout<<z<<" is greater."<<"\n";
    }
    return 0;
}