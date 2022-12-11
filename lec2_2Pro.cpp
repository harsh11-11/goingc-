#include<iostream>
using namespace std;

int main(){
    int a = 10;
    //char a = 'n';//redefination
    cout<<"Integer: "<<a<<endl;

    char b = 'c';
    cout<<"Charcter datatype is:"<<b<<endl;

    float f = 1.2222222;
    cout<<"Float: "<<f<<endl;
    
    double d = 1.2222222;
    cout<<"Double: "<<d<<endl;

    bool bo = true;
    cout<<"Bool: "<<bo<<endl;

    cout<<"Size of Int:"<< sizeof(a)<<endl<<"Size of Char: "<<sizeof(b)<<endl;
    cout<<"Size of Bool:"<< sizeof(bo)<<endl<<"Size of Double: "<<sizeof(d)<<endl;
    cout<<"Size of Float:"<< sizeof(f)<<endl;
    
}