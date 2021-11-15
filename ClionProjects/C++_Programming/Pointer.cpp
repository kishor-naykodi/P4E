#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int num=3;
    int* ptr;
    ptr = &num;

    // & ---> (Address of) Operator
    cout<<"The address of num is "<<&num<<endl;
    cout<<"The address of num stored in ptr is "<<ptr<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address ptr is "<<*ptr<<endl;

    // Pointer to pointer
    int** ptr2 = &ptr;
    cout<<"The address of ptr is "<<&ptr<<endl;
    cout<<"The address of ptr stored in ptr2 is "<<ptr2<<endl; 
    cout<<"The value at address ptr2 is "<<*ptr2<<endl;
    cout<<"The value at address value_at(value_at(ptr2)) is "<<**ptr2<<endl; 

    return 0;
}
