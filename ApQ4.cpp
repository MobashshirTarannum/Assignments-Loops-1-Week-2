//Q4->Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter no terms: ";
    cin>>n;
    for(int i=1; i<=n;i++ ){
        int tn = 3*i+1;
        cout<<tn<<" ";
    }
}