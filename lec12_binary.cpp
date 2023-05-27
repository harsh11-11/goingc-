#include<iostream>
using namespace std;

void accessArr(int arr[], int n){
    cout<<"Enter Array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int binaryS(int arr[], int n){
    int target,low=0,high = n-1;
    cout<<"ENter the element you want ot find in this array";
    cin>>target;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]==target){
            cout<<"Element found at index"<<mid<<endl;

            return mid;
        }
        else if(arr[mid]>target){
           high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout<<"ELement NOt Found"<<endl;
    return 0;
}

int main(){
    int n;
    cout<<"Enter n no."<<endl;
    cin>>n;

    int arr[n];
    accessArr(arr,n);
    binaryS(arr,n);
}