#include<iostream>
using namespace std;

void putValues(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

bool linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int size=0, key=0, arr[100];
    cout<<"Enter size of array"<<endl;
    cin>>size;
    cout<<"Enter elements of an array: "<<endl;
    putValues(arr,size);
    cout<<"Enter the value you want to search: "<<endl;
    cin>>key;
    
    if(linearSearch(arr,size,key)){
        cout<<"YES NUMBER exists"<<endl;
    }
    else{
        cout<<"NO NUMBER NOT exists"<<endl;
    }
}