#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter:";
    cin >> marks;
    if(marks>=90){
        cout<< "you are a A grade Student\n";
    }else if(90>marks && marks>=80){
        cout<< "you are a B grade Student\n"; 
    }else if(80>marks && marks>=70){
        cout<< "you are a C grade Student\n"; 
    }else if(70>marks && marks>=60){
        cout<< "you are a D grade Student\n";
    }else if(60>marks && marks>=50){
        cout<< "you are a E grade Student\n";
    }else{
        cout<< "you are Failed\n";
    }
    return 0;
}