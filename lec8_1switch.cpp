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
    cout<<"Enter one given operations number"<<endl;
    
    switch(c){
        case 1: cout<<"a+b = "<<a+b;
                break;
               // _Exit(1);//this will let get out of while and switch both at same time.
                //this will not let run any statement in its scope or any function that is written in its scope.
        case 2: cout<<"a-b = "<<a-b;
                //break;
                exit(1);//this will let run its up line.
        case 3: cout<<"a/b = "<<a/b;
                break;//continue; this will run in this scope only
        case 4: cout<<"a*b = "<<a*b;
                break;
        case 5: _Exit(1);
        default: cout<<"You have enter different character";
    }
    cout<<"1.ADD\n2.SUB\n3.DIV\n4.SUB\n5.Exit";
    cin>>c;
// Enter two numbers
// 12 3
// Enter one given operations number
// 1.ADD
// 2.SUB
// 3.DIV
// 4.SUB
// 1
// a+b = 15% 


// Enter two numbers
// 12 3
// Enter one given operations number
// 1.ADD
// 2.SUB
// 3.DIV
// 4.SUB
// 1
    }

}