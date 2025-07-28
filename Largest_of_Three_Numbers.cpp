#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cout<<"Enter Num1:";
    cin>>num1;
    
    cout<<"Enter Num2:";
    cin>>num2;
    
    cout<<"Enter Num3:";
    cin>>num3;
    
    if(num1>num2){
        if(num1>num3){
        cout<<"Num1 is LARGEST.";
        }
    }
    if(num2>num1){
        if(num2>num3){
        cout<<"Num2 is LARGEST.";
        }
    }
    if(num3>num1){
        if(num3>num2){
        cout<<"Num3 is LARGEST.";
        }
    }
    
    return 0;
}

