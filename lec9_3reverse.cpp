#include<iostream>
using namespace std;

void putValues(int arr[], int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    return;
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start<end)       
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

    return;
}

void swapAlternate(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
        if(start%2!=0){
            start++;
            end--;
        }        
    }
    
}

void swapAdajacent(int arr[], int size){

    for(int i=0;i<size;i+=2){
        if(i<size - 1){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter elements in array"<<endl;
    putValues(arr,size);
    // cout<<"Your array"<<endl;
    // printArray(arr,size);
    // cout<<"Reversed Array"<<endl;
    // reverseArray(arr,size);
    // printArray(arr,size);

    // cout<<"Swap Alternatively"<<endl;
    // swapAlternate(arr,size);
    // printArray(arr,size);

    cout<<"Swap Adjacent"<<endl;
    swapAdajacent(arr,size);
    printArray(arr,size);

    return 0;
}