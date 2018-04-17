#include <iostream>
 
using namespace std;
 
 
float polowki (int * tab, int n) {
	int polowa;
	
	if(n % 2 == 0) {
		polowa = n / 2;
	}
	else {
		polowa = (n / 2) + 1;
	}
	float zero = 0;
	float one = 0;
	for(int i = polowa - 1; i > 0; i--) {
			tab[i] = 0;
			zero++;
	}
	for(int i = polowa - 1; i < n; i++) {
		tab[i] = i + 1;
		one++;
	} 
	
	return one / zero;
} 
 
int main(int argc, char *argv[])
{
	int n;
	
	cout << "Podaj n" << endl;
	cin >> n;
	
	int * tab = new int[n];
	
	cout << polowki(tab, n) << endl;
	
	delete[] tab;
	
    return 0;
}
