#include<iostream>
using namespace std;

int main(){
    float A = 2, B = 69,i = A, ans = 0;
    while(i <= B){
        ans = ans + 1/i;
        i = 1 / i+1;
    }
    cout << "ans = " << ans;

    return 0;
}
    