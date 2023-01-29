#include<iostream>
using namespace std;
int main(){

    //learning for loop
    //n natural numbers summation

    int n, sum = 0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<"sum of 1 to "<< n <<" is: " << sum<<endl;

    //Fibonacci series
    int a = 0,b = 1;
    cout<< a <<" "<< b << " ";
    for(int i=0;i<=n-2;i++){
        int temp = a + b;
        cout<< temp<<" ";
        a = b;
        b = temp;
    }

    // //Prime number is or not
    // int flag = 0;
    // for(int i=2;i<5;i++){
    //     if(n%i == 0){
    //         flag =1;
    //         break;
    //     }
    // }

    // if(flag){
    //     printf("Not a prime number");
    // }
    // else{
    //     cout<<"Prime number is: "<< n <<endl;
    // }

    //continue

    for(int i = 0; i<=15; i += 2 ) {
        cout<< i << " ";
        if( i&1 ){
            continue;
        }
        i++;
    }

}