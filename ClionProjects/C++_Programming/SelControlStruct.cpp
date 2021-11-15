#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int age;
    // cout<<"Tell me you age";
    // cin>>age;
    // if (age<18)
    // {
    //     cout<<"You cannot come to my party."<<endl;
    // }else if (age==18){
    //     cout<<"You have to give you id and get permission."<<endl;
    // }else{
    //     cout<<"You can come to the party";
    // }
    

    char op;
    int a,b;
    cout<<"Enter the operation that you want to perform."<<endl;
    cin>>op;
    cout<<"Enter two no that you want to "<<op<<endl;
    cin>>a>>b;

    switch (op){

        case '+':
            cout<<a<<" "<<op<<" "<<b<<" = "<<a+b;
            break;

        case '-':
            cout<<a<<" "<<op<<" "<<b<<" = "<<a-b;
            break;

        case '*':
            cout<<a<<" "<<op<<" "<<b<<" = "<<a*b;
            break;

        case '/':
            cout<<a<<" "<<op<<" "<<b<<" = "<<a/b;
            break;

        default:
            cout<<"You have entered wrong operation. Try again."<<endl;
            break;
    }

    return 0; 
}
