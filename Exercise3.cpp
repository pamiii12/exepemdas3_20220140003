#include <iostream>
#include <string>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << nama;
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public: 
	string nama;
	vector<penerbit*> daftar_penerbit;
	
	pengarang(string pNama) :nama(pNama) {
		cout << nama;
	}

	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class Buku {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	Buku(string pNama) :nama(pNama) {
		cout << nama;
	}
	void tambahBuku();
	void cetakBuku();
};

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}

void pengarang::cetakPenerbit() {
	cout << "Daftar pengarang pada penerbit \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void penerbit::cetakPengarang() {
	cout << "Daftar penerbit yang diikuti \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void 

int main() {
	penerbit* varPenerbit1 = new penerbit("Joko");
	penerbit* varPenerbit2 = new penerbit("Lia");
	penerbit* varPenerbit3 = new penerbit("Giga");
	penerbit* varPenerbit4 = new penerbit("Asroni");
	pengarang* varPengarang1 = new pengarang("Gama Press");
	pengarang* varPengarang2 = new pengarang("Intan Pariwara");
	Buku* 

	varPengarang1->tambahPenerbit(varPenerbit1);
	varPengarang1->tambahPenerbit(varPenerbit2);
	varPengarang1->tambahPenerbit(varPenerbit3);

	varPengarang2->tambahPenerbit(varPenerbit4);
	varPengarang2->tambahPenerbit(varPenerbit3);

	varPenerbit3->tambahPengarang(varPengarang1);
	varPenerbit3->tambahPengarang(varPengarang2);

	varPengarang1->cetakPenerbit();
	varPengarang2->cetakPenerbit();
	varPenerbit3->cetakPengarang();


	return 0;
}



