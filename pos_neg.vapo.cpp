//Exercicio 3

#include <iostream>

using namespace std;

int pn (float n){
	if (n > 0){
		return 1;
	}else{
		if (n < 0){
			return -1;
		}else{
			return 0;
		}
	}
}

int main()
{
    int y;
    cin >> y;
    cout << pn(y);
    return 0;       
}
