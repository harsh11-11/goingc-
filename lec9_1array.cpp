#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void maxMin(int arr[], int size){
    int max = INT_MIN, min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"MIN : "<<min<<endl;
    cout<<"MAX : "<<max<<endl;
}

void putValues(int arr[], int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void sumArray(int arr[], int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum = sum +arr[i];
    }
    cout<< "Sum of array is: " << sum << endl;
}

int main(){
    //int arr[5] = {[0 ... 4] = 1};
    //int array[100];
    //fill_n(array, 100, -1);
    //printArray(arr,5);
    //printArray(array,100);
    int arr[5] = {1,2,3,4,5};
    maxMin(arr,5);
    int size;
    int arr1[100];
    cout<<"Enter size: "<<endl;
    cin>>size;
    putValues(arr1,size);
    sumArray(arr1,size);

}