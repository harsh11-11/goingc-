#include<iostream>
using namespace std;

int main(){

    //CHECKING AND,OR, XOR, AND NOT
    int a=2,b=6;
    cout<<"a and b ="<<(a & b)<< endl;
    cout<<"a not = "<<~a << endl;
    cout<<"a xor b = "<<(a^b) << endl;
    cout<<"a or b = "<<(a|b) << endl;
    //output(multiplication)
    // a and b =2
    // a not = -3
    // a xor b = 4
    // a or b = 6

    //CHecking right shift and left shift
    cout<<"Left shift a by 1 = "<< (a<<1) << endl;
    cout<<"Left shift a by 2 = "<< (a<<2) << endl;
    cout<<"Right shift a by 1 = "<<(a>>1) << endl;
    cout<<"Right shift a by 2 = "<<(a>>3) <<endl; //after 1 it gaves 0 only
    //output(division)
    // Left shift a by 1 = 4
    // Left shift a by 2 = 8
    // Right shift a by 1 = 1
    // Right shift a by 2 = 0

    //Checking with negative numbers
    int c = -1;
    cout<<"Left shift a by 1 = "<< (c<<1) << endl;
    cout<<"Right shift a by 1 = "<<(c>>1) << endl;
    //output
    // Left shift a by 1 = -2
    // Right shift a by 1 = -1

    //checking pre incremen/post and post increment/decrement
    cout<<"Post increment 5+ a++ ="<<5 + a++<<endl;
    cout<< a<<endl;
    cout<<"Post decrement 5 - a-- = "<< 5 - a--<<endl;
    cout<< a<< endl;

    cout<<"Pre increment 5+ ++a ="<<5 + ++a <<endl;
    cout<< a<<endl;
    cout<<"Pre decrement 5 - --a = "<< 5 - --a<<endl;
    cout<< a<< endl;

}