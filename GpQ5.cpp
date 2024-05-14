//Q5->Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ;
    cout<<"enter no terms: ";
    cin>>n;
    for(int i=1; i<=n;i++ ){
        int power = pow(4,(i-1));
        int tn = 3*power;
        cout<<tn<<" ";
    }
}