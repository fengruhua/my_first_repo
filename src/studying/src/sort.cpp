#include"iostream"
using namespace std;

int main(){
    system("chcp 65001");
    int len = 0;
    int arr[len];
    int temp = 0;
    cout<<"请输入数的个数"<<endl;
    cin>>len;
    for (int i = 0; i < len; i++)
    {
        cout<<"请输入第"<<i+1<<"数"<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len -i -1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                cout<<i<<" "<<j<<endl;
                for (int z = 0; z < len; z++)
                {
                    cout<<arr[z]<<" ";
                }
                cout<<endl;
            }
            
        }
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                cout<<i<<" "<<j<<endl;
                for (int z = 0; z < len; z++)
                {
                    cout<<arr[z]<<" ";
                }
                cout<<endl;
            }
            
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    system("pause");
    
    
}