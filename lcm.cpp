#include<iostream> 

using namespace std;

int main(){
	int x, y, j, k;
	cin >> x;
	cin >> y;
	
	//gcf
	for(int i = 1; i <= x && i <= y; i++){
		if(x % i == 0 && y % i == 0){
			j = i;
		}
	}

	//lcm
	k = (x * y) / j;
	cout << k << endl;
	
	return 0;
}
