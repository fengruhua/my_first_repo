#include<iostream>
using namespace std;


int main(){
    system("chcp 65001");
    int arr[6]={10,20,10,5,3};
    int temp = 0;
    int start = 0; 
    int end = sizeof(arr)/sizeof(arr[0])-1;
    for (;start<=end; start++,end--)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

    }
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    system("pause");
}