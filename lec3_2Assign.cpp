//1
#include<iostream>
using namespace std;

int main(){
    // int a = 9;

    // if(a==9){
    //     cout<<"NINEY"<<endl;
    // }

    // if(a>0){
    //     cout<<"POSITIVE"<<endl;
    // }
    // else{
    //     cout<<"NEGATIVE"<<endl;
    // }


    // //2
    // int b = 2;
    // int c = b+1;

    // if((b=3)==c){
    //     cout<<b<<endl;
    // }
    // else{
    //     cout<<b+1<<endl;
    // }


    // //3
    // int d = 24;
    // if(d>20){
    //     cout<<"Love"<<endl;
    // }
    // else if(d==24){
    //     cout<<"Lovely"<<endl;
    // }
    // else{
    //     cout<<"Babbar"<<endl;
    // }
    // cout<<d;

    //4
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;

    if(ch>=65 && ch<=96){
        cout<<"Lies between A and Z"<<endl;
    }
    else if (ch>=97 && ch<=123){
        cout<<"Lies between a and z"<<endl;
    }
    else if (ch>=48 && ch<=57){
        cout<<"Lies between 0 and 9"<<endl;
    }
    else{
        cout<<"Type a valid character"<<endl;
    }
}