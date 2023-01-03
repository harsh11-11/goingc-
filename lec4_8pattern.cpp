#include<iostream>
using namespace std;
int main(){

    int i =1,j,k,l,n;
    cout<<endl<<"Enter a number"<<endl;
    cin>>n;

    while(i<=n){
        j=n-i+1;
        while(j>0){
            cout<<j<<" ";
            j--;
        }

        k=i-1;
        while(k>0){
            cout<<"*"<<" ";
            k--;
        }

        l=i-1;
        while(l>0){
            cout<<"*"<<" ";
            l--;
        }

        // int m = n-i+1;
        // int count = m;
        // while(m>0){
        //     cout<<count<<"*";
        //     count--;
        //     m--;
        // }

        int m = 1;

        while(m<=n-i+1){
            cout<<m<<" ";
            m++;
        }


        cout<<endl;
        i++;
    }
}