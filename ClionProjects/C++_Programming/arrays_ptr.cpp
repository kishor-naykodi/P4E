#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {69, 94, 85, 95, 78};
    arr[0] = 75; //changing the  value of the first element of an array.


    cout<<"Printing array using the index\n";
    for (int i = 0; i < 5; i++)
    {
        cout <<"The marks in subject "<<i+1<<" is "<<arr[i] <<endl<<endl;
    }
    cout<<"Printing array using the pointer arithmatic\n";
    int* ptr=arr;
    for (int i = 0; i < 5; i++)
    {
        cout <<"The marks in subject "<<i+1<<" is "<<*(ptr+i) <<endl;
    }

    return 0;
}