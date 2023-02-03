#include<iostream>
using namespace std;
int main(){
    int n,ans;

    cout<<"Enter the amount:"<<endl;
    cin>>n;

    switch(1){
        case 1: ans = n/100;
                cout<<"Total 100 notes: "<<ans<<endl;
        case 2: n = n - (ans*100);
                ans = n/50;
                cout<<"Total 50 notes: "<<ans<<endl;
        case 3: n = n -(ans*50);
                ans = n/20;
                cout<<"Total 20 notes: "<<ans<<endl;
        case 4: n = n-(ans*20);
                ans = n/10;
                cout<<"Total 10 notes: "<<ans<<endl;
                break;    
    }
}