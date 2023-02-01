#include<iostream>
#include<math.h>
// #include<bits/stdc++.h>

using namespace std;
int main(){

    //decimal to binary
    // int n=0,num=0,ans = 0;
    // cout<<"Enter a Decimal Number"<<endl;
    // cin>>n;
    // num = n;
    // int count = 0;
    // while (num!=0){
    //     int digit = num & 1;
    //     ans = digit * pow(10,count) + ans;
    //     count++;
    //     num = num>>1;
    // }
    // cout<<endl<<"In Binary is: "<<endl<< ans;

    //binary to  decimal
    int n=0,num=0,ans = 0;
    cout<<"Enter a Binary Number"<<endl;
    cin>>n;
    num = n;
    int count = 0;
    while (num!=0){
        int digit = num & 1;
        ans = ans + (digit * pow(2,count));
        
        count++;
        num = num/10; //should not perform >> on binary number.**
    }
    cout<<endl<<"In Decimal is: "<<endl<< ans;

    //number complement
//     class Solution {
// public:
//     int findComplement(int num) {
//         int output = 0;
//         long power = 1;
//         while (num > 0) {
//             output += power * (1 - num % 2);
//             power *= 2;
//             num /= 2;
//         }
//         return output;
//     }
// };
    return 0;
}