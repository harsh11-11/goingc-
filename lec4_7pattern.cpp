#include<iostream>
using namespace std;
int main(){

    int i=1,n,j;
    cout<<endl<<"Enter a number"<<endl;
    cin>>n;
    while (i<=n){
        j=1;
        while(j<=n-i+1){
            cout<<" "<<" ";
            j++;
        }

        int k = 1;
        while(k<=i){
            cout<<k<<" ";
            k++;
        }

        int l=i-1;
        while(l>=1){
            cout<<l<<" ";
            l--;
        }
        
        i++;
        cout<<endl;
    }
    
}