//Q6->Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include<iostream>
using namespace std;
int main(){
    int i=97;
    while (i<=122){
        char ch = (char)i;
        cout<<ch<<"->"<<i<<",";
        i++;
    }
}