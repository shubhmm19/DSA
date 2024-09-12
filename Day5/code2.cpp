#include <iostream>
using namespace std;

// int sumN(int n){
//     int sum = 0;

//     for(int i=1; i<n; i++){
//         sum += i;
//     }
//     return sum;
// }

int sumM(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int main(){
    cout<< sumM(5)<<endl;
    cout<< sumM(6)<<endl;
    return 0;
}