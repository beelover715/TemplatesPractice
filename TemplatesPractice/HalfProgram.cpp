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

	return 0;
}

template <typename floatType>
floatType half(floatType templateNum) {
	return round(templateNum / 2);
}
int half(int halfNum) {
	return round(static_cast<float>(halfNum) / 2);
}