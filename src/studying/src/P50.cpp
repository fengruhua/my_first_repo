#include"iostream"
using namespace std;

int add_num(int num1,int num2){
    int sum = num1+num2;
    return sum;
}

int main(){
    system("chcp 65001");
    int num1;
    int num2;
    cout<<"输入数1"<<endl;
    cin>>num1;
    cout<<"输入数2"<<endl;
    cin>>num2;
    int sum = add_num(num1,num2);
    cout<<"结果="<<sum<<endl;
    system("pause");

}