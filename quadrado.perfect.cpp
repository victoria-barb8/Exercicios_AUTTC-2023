//Exercicio 4

#include <iostream>
#include <cmath>

using namespace std;

int qp(int n){
	if(n < 0 ){
		return 0;
	}
	
	float rq = sqrt(n);	
	if(rq - int(rq) == 0){
		return 1;
	}
	
	return 0;
	
}

int main()
{
   int v;
   cin >> v;
   cout << qp(v);
    return 0;       
}
