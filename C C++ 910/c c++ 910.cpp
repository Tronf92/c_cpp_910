#include <iostream>

using namespace std;

class obiect{
	public:
		obiect::obiect(void);
		void arata_obiect(void);
	private:
		int a;
		int b;
		int c;
};

obiect::obiect(void):a(1),b(2),c(3){};

void obiect::arata_obiect(void){
	cout << "a contine: " << a << endl;
	cout << "b contine: " << b << endl;
	cout << "c contine: " << c << endl;
}

void main(void){
	obiect numere;
	numere.arata_obiect();
	system("pause");
}
