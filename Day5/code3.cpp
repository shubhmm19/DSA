#include <iostream>
using namespace std;

// int sumOf(int num){
//     int digSum = 0;

//     while(num>0){
//         int latDig = num%10;
//         num/=10;

//         digSum +=latDig;
//     }

//     return digSum;
// }

int sumM(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int nCr(int n,  int r){
    int fact_n = sumM(n);
    int fact_r = sumM(r);
    int fact_nmr = sumM(n-r);

    return fact_n/(fact_r*fact_nmr);
}


int main(){
    int n =8, r=2;
    cout << nCr(n,r)<<endl;

    
    return 0;
}