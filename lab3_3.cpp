#include<iostream>
using namespace std;

int main(){
	float i = 2; 
	float M = 69;
	float ans = 0;
	while(i <= M){
		ans = ans + 1/i;
		i = i + 1;
	}
	cout << "ans = " << ans;
	
	return 0;
	
		
	}