#include"iostream"
using namespace std;

int main(){
    system("chcp 65001");
    int num = 0;
    cout<<"请输入小猪的数量"<<endl;
    cin>>num;
    int max = 0;
    int max_num = 0;
    int arr[num]={};
    cout<<"请输入小猪们的重量"<<endl;
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
        if (max < arr[i])
        {
            max = arr[i];
            max_num = i;
        }
    }
    printf("\n最大的质量为%d，其位数是第%d位\n",max,max_num+1);
    // cout<<*&num<<endl;
    system("pause");

}