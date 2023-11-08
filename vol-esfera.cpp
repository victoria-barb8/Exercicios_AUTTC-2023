//exercicio 5

#include <iostream>
#include <cmath>

using namespace std;

float vEsfera(float R){
	float V = 4.0/3.0 * M_PI * pow(R,3);
	return V;
}

int main()
{
	int b;
	cin >> b;
    cout << vEsfera(b);
    return 0;       
}
