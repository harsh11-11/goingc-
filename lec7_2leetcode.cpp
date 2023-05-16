#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //1009 ^1 = gives output in decimal.
    //&1 = gives output in binary.
    int num = 0;
    int ans = 0,bit = 0,count = 0;
    while(num!=0){
        bit = (num & 1)^1;
        ans  = ans + (bit * pow(2,count));
        num = num>>1;
        count++;
    }
    cout<<ans;

    //231
    int n;
    cin>>n;
    int flag = 0;
    if(n==0){
            cout<<"false";

        }
        while(n!=0){
            if(n%2==0){
                n=n/2;
            }
            else if(n==1){
                cout<<"true";
                flag=1;
                break;
            }
            else{
                cout<<"false"; 
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"true";
        }
}