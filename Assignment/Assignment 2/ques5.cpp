//WAP to check given input is a vowel or consonent
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter any character:";
    cin>>c;
   if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' ||c=='U') {
        cout << c << " is a vowel";
    } 
    else{
        cout<<c<<" is Consonent";
    }
    return 0;
}