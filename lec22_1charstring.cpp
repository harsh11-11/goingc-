#include<iostream>
using namespace std;


bool palin(char str[],int len){
    int some = len - 1;
    for (int i = 0; i < len; i++)
    {
        /* code */
        if(i<len/2){
            if(str[i]==str[some]){
                some--;
                continue;
            }
            else{
                return false;
            }
        }
    }
return true;
    
    
}
void reverse(char str[], int len){
    int s=0;
    int e=len-1;
    while (s<e)
    {
        swap(str[s++],str[e--]);
    }
}
int getLength(char str[]){
    int count = 0;
    for ( int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char str[20];
    cout<<"Enter a name"<<endl;
    cin>>str;

    cout<<"Length of string is: "<<getLength(str)<<endl;
    int len = getLength(str);
    reverse(str,len);
    cout<<str<<endl;
    cout<< palin(str, len);
    return 0;
}