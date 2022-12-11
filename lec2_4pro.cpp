#include<iostream>
using namespace std;

int main(){
    int a1 = 2, a2=5;
    int x = a1/a2;
    cout<<x<<endl;//0

    float c = 2.0;
    int c1=5;
    float y = c/c1;
    cout<<y<<"\n\n"; //0.4

    int a = 1,b=2;
    bool x1 = (a==b);
    cout<<x1<<endl; //0

    bool x2 = (a>=b);
    cout<<x2<<endl; //0

    bool x5 = (a>b);
    cout<<x5<<endl; //0

    bool x3 = (a<=b);
    cout<<x3<<endl; //1

    bool x6 = (a<b);
    cout<<x6<<endl; //1

    bool x4 = (a!=b);
    cout<<x4<<endl; //1
}