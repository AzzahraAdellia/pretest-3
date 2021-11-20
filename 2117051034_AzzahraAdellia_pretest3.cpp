#include <iostream>
using namespace std;

int main(){
	//Pretest Kelas C
	
	//tipe data
	int Nilai_DDP;
	
	//input
	cout << "Masukkan Nilai Mata Kuliah DDP : ";
	cin  >> Nilai_DDP;
	
	//output
	if (Nilai_DDP < 50){
	cout << "F" << endl;
	}else if (Nilai_DDP <= 56){
	cout << "E" << endl;
	}else if (Nilai_DDP <= 61){
	cout << "D" << endl;
	}else if (Nilai_DDP <= 66){
	cout << "C" << endl;
	}else if (Nilai_DDP <= 71){
	cout << "B" << endl;
	}else if (Nilai_DDP <= 76){
	cout << "B+" << endl;
	}else if (Nilai_DDP > 76){
	cout << "A" << endl;
	}
	
	return 0;}
