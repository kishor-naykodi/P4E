#include <iostream>
using namespace std;

//Function Prototype
int sum(int,int);
void greet();

int main(int argc, char const *argv[])
{
    int a,b;
    greet();
    cout << "Enter a first num : "<< endl;
    cin >> a;
    cout << "Enter a Second num : "<< endl;
    cin >> b;
    int addition = sum(a,b);    //Function calling.
    cout<<"The sum is : " << addition << endl; 
    return 0;
}

int sum(int a,int b){

    int c = a + b;
    return c;
}

void greet(){
    cout << "Hello dear, User!!!"<< endl;
}