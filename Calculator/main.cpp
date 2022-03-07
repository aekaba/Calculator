#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	void Arithmetic(), Trigonometric(), Exponential(), Logarithmic();
	int choice = 0;

	cout << "Geliþmiþ Hesapmakinesi\n";
	cout << "Yapmak istediðiniz iþlemi seçiniz\n";

	cout << "[1] Aritmetik\n";
	cout << "[2] Trigonometrik\n";
	cout << "[3] Üstel\n";
	cout << "[4] Logaritmik\n";

	cout << "Sizin Seçiminiz: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		Arithmetic();
		break;
	case 2:
		Trigonometric();
		break;
	case 3:
		Exponential();
		break;
	case 4:
		Logarithmic();
		break;
	default:
		cout << "Hatalý Giriþ";
	}
		
	return 0;
}

void Arithmetic() {
	int op = 0; 
	float A = 0, B = 0;

	cout << "Ýþlem Seçiniz\n";
	cout << "[1] Toplama\n";
	cout << "[2] Çýkarma\n";
	cout << "[3] Bölme\n";
	cout << "[4] Çarpma\n";
	cin >> op;
	cout << "Ýlk Sayýyý Girin: ";
	cin >> A;
	cout << "Ýkinci Sayýyý Girin: ";
	cin >> B;
	cout << "Sonuç: ";

	switch (op)
	{
	case 1:
		cout << (A + B);
		break;
	case 2:
		cout << (A - B);
		break;
	case 3:
		cout << (A / B);
		break;
	case 4:
		cout << (A * B);
		break;
	default:
		cout << "Hatalý Giriþ!";
		break;
	}
	cout << endl;
}
void Trigonometric() {
	int op = 0;
	float val = 0.0;
	cout << "Seçiniz\n";
	cout << "[1] Sinus\n";
	cout << "[2] Cosinus\n";
	cout << "Seçiminiz: ";
	cin >> op;
	cout << "Deðer Giriniz: ";
	cin >> val;
	if (op == 1)
		cout << sin(val);
	else if (op == 2)
		cout << cos(val);
	else
		cout << "Hatalý Giriþ!";
	cout << endl;
}
void Exponential() {
	float base = 0.0, eee = 0.0;
	cout << "Tabaný Girin: ";
	cin >> base;
	cout << "Üssü Girin: ";
	cin >> eee;
	cout << pow(base, eee) << endl;
}
void Logarithmic() {
	float value = 0.0;
	cout << "Log(e) nin hesaplanmasý için deðer girin: ";
	cin >> value;
	cout << log(value) << endl;
}
