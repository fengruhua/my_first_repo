#include<iostream>
using namespace std;

int main(){
    int arr[5][10];
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=i+j;
        }
    }
    int brr[5];
    for(int i=0;i<5;i++){
        brr[i]=i;
    }
    int(* p)[10]=arr;
    int * q =brr;
    cout<<q<<endl;
    // cout<<p<<endl;
    cout<<*q<<endl;

    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            cout<<*(*(p+i)+j)<<" ";
        }
        cout<<endl;
    }

    system("pause");
}