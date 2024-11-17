#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};  // 声明一个一维数组
    cout<<arr<<endl;
    // 声明一个指向 int[5] 类型的指针
    int (*ptr)[sizeof(arr)/sizeof(arr[0])] = &arr;
    // int *b[5] = arr;
    // 通过指针访问数组元素
    for (int i = 0; i < 5; ++i) {
        cout << "Element at index " << i << ": " << (*ptr)[i] << endl;
    }
    system("pause");
    return 0;
}