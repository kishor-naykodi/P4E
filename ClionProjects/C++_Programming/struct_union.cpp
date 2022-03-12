#include <iostream>
#include <string.h>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

union Student
{
    int roll_no;
    char name[30];
    char standard[4];
    float percentage;

};


int main(int argc, char const *argv[])
{

  /*  Person p1;   //-----Recommended when you wanna use all the variables at a time 
    cout<<"************************ Using Structure ************************"<<endl;
    cout<< "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary<<endl<<endl;*/


    /*union Student s1;  //----Recomaned when you have to use only one variable and share a memory

    cout <<"********************** Using Union ********************" << endl;
    //s1.name="Kishor Naykodi";       =====>We cant writer like this becasuse you can initialise arrays but you cannot assign to them but you can use functions like append,remove etc.
    strcpy(s1.name,"Kishor Naykodi");  
    // s1.roll_no = 34;
    // strcpy(s1.standard,"BE");
    // s1.percentage = 99.95;

    cout<<s1.name<<endl;
    // cout<<s1.roll_no<<endl;
    // cout<<s1.standard<<endl;
    // cout<<s1.percentage<<endl;*/

    enum Meal{ breakfast, lunch, dinner};
        Meal m1 = lunch;
        cout<<m1;

    return 0;

}