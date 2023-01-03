#include<iostream>
using namespace std;
int main(){

    int i=1,n,j;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    char ch = 'A';


    while (i<=n)
    {
        j=1;
        while(j<=n){
            ch='A'+i-1;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
    
cout<<endl;

    i=1;
    ch='A';
    while(i<=n){
        j=1;
        while(j<=n){
            ch = 'A' + j - 1;
            cout<< ch;
            j++;
        }
        cout<<endl;
        i++;

    }

cout<<endl;

    i=1;
    ch='A';
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<ch;
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }

 cout<<endl;

    
    i=1;
    int k = 0;
    while (i<=n)
    {   
        j=1;
        
        while (j<=n)
        {
            ch = 'A'+ j - 1 + k;//'A'+i+j-2
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
        k++;
        
    }

 cout<<endl;
 
    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            ch = 'A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    
cout<<endl;

    i=1;
    ch='A';
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<ch; 
            ch = ch + 1;
            j++;
        }
        cout<<endl;
        i++;
        
    }

cout<<endl;

    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            ch = 'A'+i+j-2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

cout<<endl;

    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            ch = 'A'+n-i;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;

    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            ch = 'A'+n-i-1+j;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    

}