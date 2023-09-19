#include<bits/stdc++.h>
using namespace std;

int main(){
     srand((unsigned) time(0));
    int r = rand()%100;
    cout<<"Guess the number between 1 to 100"<<endl;
    int x;
    int ct=0;
    while (x!=r)
    {
        ct++;
    cin>>x;

        /* code */
        if(x==r){
            cout<<"congrats you guessed right \n";
            
        }
        else if(x<r){
            cout<<"The number is greater than you guessed. Guess again\n";
        }
        else{
            cout<<"The number is smaller than you guessed. Guess again\n";
        }
    }
    
}
