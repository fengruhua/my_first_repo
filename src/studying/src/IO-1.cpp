#include<iostream>
using namespace std;
int main(){
    int *** arr= new int**[5];
    for(int i=0;i<5;i++){
        arr[i]=new int*[5];
        for(int j=0;j<5;j++){
            arr[i][j]=new int[5];
    }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                arr[i][j][k]=i+j+k;
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    system("pause");

}
