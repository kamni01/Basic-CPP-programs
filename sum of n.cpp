#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    if(n<=0){
        cout<<"Enter a valid number.";
    }
    else {
      sum=n*(n+1)/2;
      cout<<"Sum of "<<n<<" natural nos. is : "<< sum;
      return 0;
    }
}