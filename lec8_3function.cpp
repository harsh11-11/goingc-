//create power function
#include<iostream>
using namespace std;

bool isEven(int num){
    if(num&1){
        
        return 0;
    }
    return 1;

}

int power(int num1,int num2){
    int ans = 1;
    while(num2!=0){
        ans = ans*num1;
        num2--;
    }
    return ans;
}

int fact(int num){
    int ans =1;
    for(int i=1;i<=num;i++){
        ans = ans*i;
    }
    return ans;
}

int ncr(int n, int r){
    int num = fact(n);
    int deno = fact(r) * fact(n-r);
    int ans = num/deno;
    return (ans);
}

int countBits(int a){
    int ans = 0;
    while(a!=0){
        if(a&1){
            ans++;
        }
        a=a>>1;
    }
    return ans;
}

void fibo(int a){
    int num = 0;
    int next = 1, ans = 0;
    if(a==0){
        return;
    }
    else if(a==1){
        cout<<num;
        return;
    }
    else{
        cout<<num<<" "<<next<<" ";
        for(int i=0;i<a-2;i++){
            ans = num + next;
            num = next;
            next = ans;
            cout<<ans<<" ";
        }
    }
    
}

int main(){
    int a,b;
    cout<<"Enter base number: "<< endl;
    cin>>a;
    cout<<"Enter exponent: "<< endl;
    cin>>b;
    
    int c = power(a,b);
    cout<<"Power Answer is: "<< c << endl;
   
    if(isEven(a))
    cout<<"Base value is: Even"<<endl;

    else
    cout<<"Base value is: Odd"<<endl;

    cout<<"nCr of given numbers is: "<<ncr(a,b)<<endl;

    cout<<"Total number of set bits in "<<a<<"and"<<b<<" is:"<<countBits(a)+countBits(b)<<endl;

    cout<<"Fibonacci Series uptil ath is:"<<endl;
    fibo(a);
}