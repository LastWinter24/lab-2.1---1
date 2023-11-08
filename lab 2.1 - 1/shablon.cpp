#include <iostream>

using namespace std;

void sayHello() {
	setlocale(LC_ALL, "RU");

	cout << "Привет" << endl;
}
void sayGoodbye() {
	cout << "Пока" << endl;
}
int main() {
	sayHello();
	cout << "**********************************" << endl;
	sayGoodbye();
	

	return 0;
}



