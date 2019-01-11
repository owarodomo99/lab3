#include<iostream>
using namespace std;

int main(){
	float i = 6; 
	float M = 19;
	float ans = 0;
	while(i <= M){
		ans = ans + 1/i;
		i = i + 1;
	}
	cout << "ans = " << ans;
	
	return 0;
	
		
	}