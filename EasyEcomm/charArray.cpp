/*
Write a code to get the input in the given format and print the output in the given format.

Input Description:
A single line contains a string.

Output Description:
Print the characters in a string separated by comma.

Sample Input :
guvi
Sample Output :
g,u,v,i

*/

#include <iostream>
using namespace std;
int main() {
    //A Simple Hello World Program
    
    //Getting input via STDIN
   // int userIntInput = 0;
    char userStringInput[100] = "";
    cin >> userStringInput;
    for(int i=0;i<end(userStringInput)-begin(userStringInput);i++){
        cout << userStringInput[i];
        if(userStringInput[i+1] != ' ' && userStringInput[i+1]!= 0){
            cout<<",";
        }
        else{
            break;
        }
    }
    return 0;
}