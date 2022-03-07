#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	void Arithmetic(), Trigonometric(), Exponential(), Logarithmic();
	int choice = 0;

	cout << "Geli�mi� Hesapmakinesi\n";
	cout << "Yapmak istedi�iniz i�lemi se�iniz\n";

	cout << "[1] Aritmetik\n";
	cout << "[2] Trigonometrik\n";
	cout << "[3] �stel\n";
	cout << "[4] Logaritmik\n";

	cout << "Sizin Se�iminiz: ";
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
		cout << "Hatal� Giri�";
	}
		
	return 0;
}

void Arithmetic() {
	int op = 0; 
	float A = 0, B = 0;

	cout << "��lem Se�iniz\n";
	cout << "[1] Toplama\n";
	cout << "[2] ��karma\n";
	cout << "[3] B�lme\n";
	cout << "[4] �arpma\n";
	cin >> op;
	cout << "�lk Say�y� Girin: ";
	cin >> A;
	cout << "�kinci Say�y� Girin: ";
	cin >> B;
	cout << "Sonu�: ";

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
		cout << "Hatal� Giri�!";
		break;
	}
	cout << endl;
}
void Trigonometric() {
	int op = 0;
	float val = 0.0;
	cout << "Se�iniz\n";
	cout << "[1] Sinus\n";
	cout << "[2] Cosinus\n";
	cout << "Se�iminiz: ";
	cin >> op;
	cout << "De�er Giriniz: ";
	cin >> val;
	if (op == 1)
		cout << sin(val);
	else if (op == 2)
		cout << cos(val);
	else
		cout << "Hatal� Giri�!";
	cout << endl;
}
void Exponential() {
	float base = 0.0, eee = 0.0;
	cout << "Taban� Girin: ";
	cin >> base;
	cout << "�ss� Girin: ";
	cin >> eee;
	cout << pow(base, eee) << endl;
}
void Logarithmic() {
	float value = 0.0;
	cout << "Log(e) nin hesaplanmas� i�in de�er girin: ";
	cin >> value;
	cout << log(value) << endl;
}
