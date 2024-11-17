#include<iostream>
#include<random>
#include<iomanip>
#include<ctime>
#include<string>
using namespace std;
int main(){
    // int a = 10;
    // int b = 10;
    // // a++;
    // // cout<<a<<endl;
    // // ++a;
    // // cout<<a<<endl;
    // for (int i = 0; i < 3; ++i)
    // {   
    //     // (a++);
    //     ++b;
    //     cout<<"a="<<(++a)<<"b="<<b<<endl;
    // }
    // srand((unsigned)time(NULL));
    
    // std::mt19937 rand_num;
    // int number = rand_num();
    // while ((int)(number%10)<=100)
    // {
    //     number = (int)(number % 10);
    //     printf("%d",number);
    // }
    // cout<<'d'<<endl;
    string temp = "helloworld";
    temp += "\n \njkl";
    temp += '\n';
    temp += 'b';
    cout<<temp<<endl;
    system("pause");
}