#include"iostream"
#include"string.h"
using namespace std;

int main(){
    system("chcp 65001");
    int num = 0;
    bool flag = true;
    while (flag)
    {   FLAG:
        cout<<"请选择副本难度"<<endl;
        cin>>num;
        switch (num)
        {
            case 10:
            case 9:
                cout<<"你选择的是高难度"<<endl;
                break;
            case 8:
            case 7:
                cout<<"你选择的是较高难度"<<endl;
                break;
            case 6:
            case 5:
                cout<<"你选择的是中难度"<<endl;
                break;
            case 4:
            case 3:
                cout<<"你选择的是较低难度"<<endl;
                break;
            case 2:
            case 1:
                cout<<"你选择的是低难度"<<endl;
                break;
            default:
                cout<<"你选择的是错误难度，或者你输入的数据错误，请重新输入"<<endl;
                goto FLAG;
                // continue;
        }

        while (1)
        {
            cout<<"请选择是否继续 1/0"<<endl;
            cin>>num;
            if (num==1){
                flag = true;
                break;
            }
            else if(num==0){
                flag = false;
                break;
            }
            else{
                cout<<"输入错误，请重新输入"<<endl;
                continue;
            }
        }
        
    }
    
    system("pause");
}
