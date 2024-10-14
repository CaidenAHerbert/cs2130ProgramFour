#include <iostream>

int input;

void convert(int input, int base) {
	//variable that will hold base 8 digits
	int remainder;

	if (input == 0) {
		return;
	}

	remainder = input % base;
	convert(input / base, base);

	if (remainder < 10) {
		std::cout << remainder;
	} else {
		std::cout << char('A' + (remainder - 10));
	}
}





int main() {
	
	std::cout << "Enter your number in base 10: " << std::endl;
	std::cin >> input;

	std::cout << "The number in base 2 is: ";
	convert(input, 2);
	std::cout << std::endl;

	std::cout << "The number in base 8 is: ";
	convert(input, 8);
	std::cout << std::endl;

	std::cout << "The number in base 16 is: ";
	convert(input, 16);
	std::cout << std::endl;


	return 0;
}
