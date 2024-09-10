#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the age:";
    cin >> age;

    if(age >=18){
        cout << "You are eligible \n";
    }else{
        cout << "You are not\n";
    }
    return 0;
}