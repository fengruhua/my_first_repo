#include"iostream"
#include"string.h"
using namespace std;

int main(void){
    system("chcp 65001");
    int scores[3][3]={100,120,130,90,50,40,70,80,50};
    float ava = 0;
    int max = 0;
    string name[3] = {"张三","李四","王五"};
    string object[3] = {"语文","数学","英语"};
    for (int i = 0; i < sizeof(scores[0])/sizeof(scores[0][0]); i++)
    {
        ava = scores[i][0]+scores[i][1]+scores[i][2];
        cout<<name[i]<<"的总分为"<<ava<<endl;
        ava = ava / 3;
        cout<<name[i]<<"的平均分为"<<ava<<endl;
    }
    ava = 0;
    // cout<<(sizeof(scores)/sizeof(int)/(sizeof(scores[0])/sizeof(scores[0][0])))<<endl;
    for (int i = 0; i < sizeof(scores[0])/sizeof(scores[0][0]); i++)
    {
        for (int j = 0; j < (sizeof(scores)/sizeof(int)/(sizeof(scores[0])/sizeof(scores[0][0]))); j++)
        {   
            if (max<scores[j][i])
            {
                max = scores[j][i];
            }
            ava = ava+scores[j][i];
            
        }
        ava = ava/3;
        cout<<"学科"<<object[i]<<"的平均分为"<<ava<<endl;
        cout<<"最高分为"<<max<<endl;
        ava = 0;
        max = 0;
        
    }
    
    system("pause");
}