// this is a test
// Modular multiplicative inverse
#include <iostream>

int inverseA(int a, int n, int b){
	// a is the number for which we need the inverse
    // n is the modulus-> a*i needs to be congruent to 1 with respect to the modulus n
	// ax = b (mod n)
	// b*a^(-1) = x (mpd n)
	for (int i = 1; i < n; i++) {
		if ((i * a) % n == 1)
			return b * i % n;
	}
	return 0;
}


int main(){
	int n;
	int a;
	int b;
	std::cout << "Give the number n=";
	std::cin >> n;
	std::cout << "Give the number a=";
	std::cin >> a;
	std::cout << "Give the number b=";
	std::cin >> b;

	int m = inverseA(a, n, b);

	std::cout<<"The congruent number of b*a^(-1) (mod n) = " << m;

	return 0;
}