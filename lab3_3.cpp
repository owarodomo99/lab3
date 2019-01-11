#include<iostream>
using namespace std;

int main(){
    float A,B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    int i = A, ans = 0;
    while(i <= B){
        ans = ans + i;
        i = 1 / i+1;
    }
    cout << "ans = " << ans;

    return 0;
}
    