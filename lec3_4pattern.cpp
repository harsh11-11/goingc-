#include<iostream>
using namespace std;

int main(){
    int n,i=1,j;
    cout<<"Enter size of Square Pattern"<<endl;
    cin>>n;

    while(i<=n){
        j=1;        
        while(j<=n){
        cout<<"*";
        j++;
        }
        cout<<endl;
        i++;
    }

    i=1;
    while(i<=n){
        j=1;
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    i=1;
    while(i<=n){
        j=1;
        while (j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

    i=0;
    while (i<n)
    {
        /* code */
        j=0;
        while (j<n)
        {
            cout<<n-j;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    
    int count = 1;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    i=1;
    count =1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
        
    }

    i=1;
    while(i<=n){
        j=1;
        count = i;
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;

    }

    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i+j-1;
            j++;
        }
        i++;
        cout<<endl;
    }


    i=1;
    while(i<=n){
        j=1;
        //count = i;
        while(j<=i){
            //cout<<count;
            cout<<
            j++;
            //count--;
        }
        cout<<endl;
        i++;
    }

}