/**

This Problem is to show How RECURSION works!
              Check it Out !!!
                Code it !

**/

/**
 * Printing the numbers 1 to N using Recursion 
 * Increasing and Decreasing Order
**/

#include<bits/stdc++.h>
using namespace std;

void Increasing(int n){
    //Base Case..
    if(n==0){
        return;
    }
    //Recursive Case..
    Increasing(n-1);
    cout<<n<<" ";
}

void Decreasing(int n){
    //Base Case..
    if(n==0){
        return;
    }
    //Recursive Case..
    cout<<n<<" ";
    Decreasing(n-1);
}


int main(){
    cout<<"Enter the value of 'N' till you want to Print numbers :"<<endl;
    int n; cin>>n;
    //Increasing(n);
    Decreasing(n);

    return 0;
}
