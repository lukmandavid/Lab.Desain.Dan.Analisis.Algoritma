#include <iostream>
using namespace std;

class nilai {
private:
    double nilai1;
    double nilai2;

public:
    // Setter
    void setnilai1(int nilai) {
        nilai1 = nilai;
    }

    void setnilai2(int nilai) {
        nilai2 = nilai;
    }

    // Getter
    int getnilai1() {
        return nilai1;
    }

    int getnilai2() {
        return nilai2;
    }
    
    int tambah() {
        return nilai1 + nilai2;
    }
    
    int kurang() {
        return nilai1 - nilai2;
    }
    
    int kali() {
        return nilai1 * nilai2;
    }
    
    double bagi() {
    	if (nilai2 == 0) {
    		return -1;
		}
        return nilai1 / nilai2;
    }
};

int main() {
    nilai nilai;
	int nilai1;
	int nilai2;
	
	cout << "Masukkan angka pertama: "; cin >> nilai1;
	cout << "Masukkan angka kedua: "; cin >> nilai2;

    nilai.setnilai1(nilai1);
    nilai.setnilai2(nilai2);

    int hasilPenambahan = nilai.tambah();
    int hasilPengurangan = nilai.kurang();
    int hasilPerkalian = nilai.kali();
    double hasilPembagian = nilai.bagi();

    cout << "Hasil penambahan: " << hasilPenambahan << endl;
    cout << "Hasil penguranngan: " << hasilPengurangan << endl;
    cout << "Hasil perkalian: " << hasilPerkalian << endl;
    if (hasilPembagian == -1) {
    	cout << "ERROR!\nHasil pembagian: Error: Pembagian dengan nol tidak dapat dilakukan\n0";
	} else {
		cout << "Hasil pembagian: " << hasilPembagian << endl;
	}

    return 0;
}
