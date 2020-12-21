#include <iostream>
#include <iomanip>
using namespace std;

	int opsi;
	float r, t, luas, keliling, volume;
	char lagi;
	void ll();
	void kl();
	void vol();
	void menu();

	int main(){	
		cout << "Hitung Lingkaran =============\n";
		cout << "1. Luas Lingkaran\n";
		cout << "2. Keliling Lingkaran\n";
		cout << "3. Volume Tabung\n";
		cout << "Pilih : ";
		cin >> opsi;
	
		switch(opsi)
		{
			case 1:
			ll();
			break;
			
			case 2:
			kl();
			break;
			
			case 3:
			vol();
			break;
			default :
			cout << "\nInput Anda Salah\n";
		}
	return 0;
	}

	void ll(){
		cout << "Jari - jari	: ";
		cin >> r;
		luas = 3.14 * r * r;
		cout << "Luas Lingkaran adalah " << luas << "\n";
		menu();
	}

	void kl(){
	cout << "Jari - jari	: ";
	cin >> r;
	keliling = 2 * 3.14 * r;
	cout << "Keliling Lingkaran adalah " << keliling << "\n";
	menu();
	}

	void vol(){
	cout << "Jari - jari	: ";
	cin >> r;
	cout << "Tinggi tabung	: ";
	cin >> t;
	volume = 3.14 * r * r * t;
	cout << "Volume Tabung adalah " << volume << "\n";
	menu();
	}

	void menu(){
	cout << "Ulangi Program? (y/n) ";
	cin >> lagi;
	cout << "  \n\n";
	if (lagi == 'y')
		main();
	if (lagi == 'n')
		cout << "Program Selesai, Terima Kasih >_<\n";
	}


	
