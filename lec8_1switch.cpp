#include<iostream>
using namespace std;
int main(){

    //making calculator
    double a,b;
    int c;
    
    //cin>>str; you cannot use string in switch case
    while(1){
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"1.ADD\n2.SUB\n3.DIV\n4.SUB\n5.Exit";
    cin>>c;
        switch(c){
                case 1: {cout<<"a+b = "<<a+b;
                        break;}
               // _Exit(1);//this will let get out of while and switch both at same time.
                //this will not let run any statement in its scope or any function that is written in its scope.
                case 2: cout<<"a-b = "<<a-b;
                //break;
                        exit(1);//exit the switch/loop
                case 3: cout<<"a/b = "<<a/b;
                        break;//continue; this will run in this scope only
                case 4: cout<<"a*b = "<<a*b;
                        break;
                case 5: _Exit(1);
                default: cout<<"You have enter different character";
    }
    }

}