#include<iostream>
using namespace std;
int main(){

    int i=1,n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    while (i<=n)
    {
        int j=n-i;
        while (j>0)
        {
            cout<<" "<<" ";
            j--;
        }

        int k=1;
        while(k<=i){
            cout<<"*"<<" ";
            k++;
        }
        cout<<endl;
        i++;
        /* code */
    }

// Enter a number: 
// 4
//       * 
//     * * 
//   * * * 
// * * * * 
//j=space

    i=1;
    while (i<=n)
    {
        int j = n-i;
        while(j>=0)
        {
            cout<<"*"<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }


    i=1;
    while (i<=n)
    {
        int j=i-1;
        while(j>0){
            cout<<" "<<" ";
            j--;
        }

        int k=n-i+1;
        while(k>0){
            cout<<"*"<<" ";
            k--;
        }
        cout<<endl;
        i++;
       
    }
    
    i=1;
    while(i<=n){
        int j = i-1;
        while(j>0){
            cout<<" "<<" ";
            j--;
        }
         int k = 1;
         while(k<=n-i+1){
            cout<<i<<" ";
            k++;
         }
         cout<<endl;
         i++;
    }

    i=1;
    while(i<=n){
        int j = n-i;
        while(j>0){
            cout<<" "<<" ";
            j--;
        }
         int k = 1;
         while(k<=i){
            cout<<i<<" ";
            k++;
         }
         cout<<endl;
         i++;
    }


    i=1;
    while(i<=n){
        int j = i-1;
        while(j>0){
            cout<<" "<<" ";
            j--;
        }
         int k = 1;
         int start = i;
         while(k<=n-i+1){
            cout<<start+k-1<<" ";
            k++;
         }
         cout<<endl;
         i++;
    }
    
}