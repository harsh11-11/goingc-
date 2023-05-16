#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    //7. reverse integer //1009,476
    //INT_MAX and INT_MIN
    int n,ans=0,digit=0;
    //int i=0;
    cin>>n;

    while (n!=0)
    {
        digit = n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
        ans = (ans * 10) + digit;
        //when i applied pow(10,i)
        //0*1+3 = 3
        //3*10+2 = 32
        //32*100+1 
        //instead this up equation is correct
        n=n/10;
        //i++;
    }
    cout<<ans;

//     class Solution {
// public:
//     int reverse(int x) {
        
//         int rem=0;
//         double temp=0;
//         int n=x;
        
//         while(x!=0)
//         {
//             rem=x%10;
//             temp=temp*10+rem;
//             x=x/10;
//         }
//         if(temp>2147483647 || temp<-2147483648)
//         {
//             return 0;
//         }
//         else
//         {
//         if(x<0)
//         {
//             return  int (temp*-1);
            
//         }
//         else
//         {
//             return int (temp);
//         }
//         }
//     }
// };

    return 0;
}