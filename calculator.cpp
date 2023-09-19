#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the operands\n";
    int a,b;
    cin>>a>>b;
    cout<<"Which operation you want to perform\n";
    cout<<"Enter 1 for addition \n";
    cout<<"Enter 2 for subtraction \n";
    cout<<"Enter 3 for multiplication \n";
    cout<<"Enter 4 for divison \n";
    int r;
    cin>>r;
    if(r==1)cout<<"addition of these numbers is\n"<<a+b;
    else if(r==2)cout<<"subtraction of these numbers is\n"<<a-b;
    else if(r==3)cout<<"multiplication of these numbers is\n"<<a*b;
    else if(r==4){
        cout<<"divison of these numbers is\n"<<a/b;
    }
    else cout<<"Invalid input\n";
}