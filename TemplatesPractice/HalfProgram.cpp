// Charles Schneider
// CIS 1202 N01
// December 4th, 2024

#include <iostream>

using namespace std;

//template holder
template <typename floatType>

//function prototypes
floatType half(floatType);
int half(int);

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << "\n";
	cout << half(b) << "\n";
	cout << half(c) << "\n";

	return 0;
}

template <typename floatType>
floatType half(floatType templateNum) {
	return templateNum/2;
}
int half(int halfNum) {
	return round(static_cast<float>(halfNum) / 2);
}