//WAP to print factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int product = 1;
    for(int i=1; i<=n; i++){
        product*=i;
    }
    cout<<product;
    return 0;
}