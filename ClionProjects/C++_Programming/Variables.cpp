#include<iostream>
using namespace std;

int gloVar = 6;
int sum(int a,int b){ 
    int gloVar = a + b;
    return gloVar;
    }

int main(){
    
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    cout<<sum(a,b)<<endl;   //gloVar not changing here because it has local scope.
    cout<<gloVar;           //Here gloVar is printed 6 because it has gloabl scope.
    return 0;
}
