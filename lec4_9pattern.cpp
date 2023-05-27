#include<iostream>
using namespace std;

void pattern(int n){

    for(int i=1;i<=n/2;i++){
        
        for(int j=0;j<i;j++){
                cout<<"*"<<" ";
        }

        for (int k = 0; k < n-2*i; k++)
        {
            cout<<" "<<" ";
        }
        
        for (int m = 0; m < i; m++)
        {
            cout<<"*"<<" ";
        }
        

        cout<<endl;

    }

    for(int i=n/2;i>0;i--){
            for(int j=i;j>0;j--){
                cout<<"*"<<" ";
            }

            for (int k = 0; k < n-2*i; k++)
            {
            cout<<" "<<" ";
            }
        
            for (int m = i; m > 0; m--)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
    }
}

int main(){

    int n = 0;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern(n);
    return 0;
}