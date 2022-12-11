#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"number b/w 1 to n is:"<<endl;
    while(i<=num){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    
    int sum = 0,j=0;
    while(j<=num){
        sum = sum + j;
        j++;
    }
    cout<<"Sum of numbers 1 to n is: "<<sum<<endl;
    

    int k = 2;
    cout<<"Even numbers between 1 to n"<<endl;
    while(k<=num){
        
        cout<<k<<" ";
        k=k+2;
    }
    cout<<endl;


    
    k=2,sum=0;
    while(k<=num){
        sum =sum +k;
        k=k+2;    
    }
    cout<<"Sum of even numbers are: "<<sum<<endl;


    cout<<"Checking whether given number is prime or not"<<endl;
    int x = num + 1; 
    int count =0;
    while(x<num){
        if(num%x!=0){
            x++;
            continue;
        }
        else{
            cout<<"Not a prime"<<endl;
            count = 1;
            break;
        }

    }
    if(!count){
        cout<<"It is:  "<<"Prime"<<endl;
    }





}