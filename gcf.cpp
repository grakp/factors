#include<iostream> 

using namespace std;

int main(){
	int x, y, j;
	cin >> x;
	cin >> y;

	for(int i = 1; i <= x && i <= y; i++){
		if(x % i == 0 && y % i == 0){
			j = i;
		}
	}

	cout << j << endl;
	
	return 0;
}
