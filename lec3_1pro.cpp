#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a value: "<<endl;
    cin>>a;
    cout<<"Enter b value"<<endl;
    cin>>b;

    //to find whether a is bigger or b.
    //in this it goes to every block of if. 
    if(a>b){
        cout<<"A is Big\n"<<endl;
    }
    if(a>0){
        cout<<"A is greater than zero"<<endl;
    }
    if(a<b){
        cout<<"B is Big\n"<<endl;
    }

    
    //to find whether a is +ve,-ve,0
    if(a>0){
        cout<<"a is +ve\n"<<endl;
    }
    else{
        if(a<0){
            cout<<"A is -ve\n"<<endl;
        }
        else{
            cout<<"A is 0\n"<<endl;
        }
    }

    
    
    //refined version of +ve,-ve,0
    //in this it goes in one part
    if(a>0){
        cout<<"A is positive"<<endl;
    }

    else if(a>1){
        cout<<"A is greater than 1"<<endl;
    }
    else if(a<0){
        cout<<"A is Negative"<<endl;
    }
    else{
        cout<<"A is Zer0"<<endl;
    }
}