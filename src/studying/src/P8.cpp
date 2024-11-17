#include<iostream>
using namespace std;
int main()
{
    system("chcp 65001");
    int box_x[5]={0};
    int box_y[5]={0};
    printf("输入数字：");
    for (int i = 0; i < 5; i++)
    {
        cin>>box_y[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<box_y[i]<<"——";
    }
    cout<<endl;
    system("pause");
    return 0;
}
