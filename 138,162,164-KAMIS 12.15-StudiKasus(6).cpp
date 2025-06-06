#include <iostream>
using namespace std;

class nilaiMHS{
	public:
		int jumlah_mhs;
		void input_nilai(){
			cout << "+===============================================+" << endl;
			cout << "|\t\tINPUT NILAI MAHASISWA\t\t|" << endl;
			cout << "+===============================================+" << endl;
	
			for(int i=0; i<jumlah_mhs;i++){
				cout << "| Masukkan Nama Mahasiswa Ke-"<< i+1 << " : ";
				cin.ignore();
				getline(cin, nama_mhs[i]);
				cout << "| Masukkan NIM " << nama_mhs[i] << " : ";
				cin >> nim_mhs[i];
				cout << "|\n";
				cout << "| Input Nilai Alpro " << nama_mhs[i] << " : ";
				cin >> nilai_mhs[0];
				cout << "| Input Nilai Matdis " << nama_mhs[i] << " : ";
				cin >> nilai_mhs[1];
				cout << "| Input Nilai Pweb " << nama_mhs[i] << " : ";
				cin >> nilai_mhs[2];
				cout << "| Input Nilai Aljabar " << nama_mhs[i] << " : ";
				cin >> nilai_mhs[3];
				total_nilai[i] = (nilai_mhs[0]+nilai_mhs[1]+nilai_mhs[2]+nilai_mhs[3]) / 4;
				if(total_nilai[i] < 60) huruf[i] = 'D';
				else if(total_nilai[i] > 60 && total_nilai[i] < 75) huruf[i] = 'C';
				else if(total_nilai[i] > 75 && total_nilai[i] < 85) huruf[i] = 'B';
				else if(total_nilai[i] >= 85 && total_nilai[i] < 100) huruf[i] = 'A';
				cout << "+===============================================+" << endl;
		}
		cout << "|\tNILAI MAHASISWA BERHASIL DIINPUT\t|" << endl;
		cout << "+===============================================+" << endl << endl;
	}			
		void tampilkan_data(){
			cout << "+===============================================+" << endl;
			cout << "|\t\tDATA NILAI MAHASISWA\t\t|" << endl;
			cout << "+===============================================+" << endl;
			
			for(int i=0; i<jumlah_mhs;i++){
				cout << "| Nama \t\t\t: " << nama_mhs[i] << endl;
				cout << "| NIM \t\t\t: " << nim_mhs[i] << endl;
				cout << "| Nilai Akhir Mahasiswa : " << total_nilai[i] << endl;
				cout << "| Huruf \t\t: " << huruf[i] << endl;
				cout << "| Kelulusan \t\t: ";
				if(huruf[i] == 'B' || huruf[i] == 'A') cout << "LULUS" << endl;
				else cout << "TIDAK LULUS" << endl;
				cout << "+===============================================+" << endl;
			}
				cout << endl;
		}
	
	private:
		string nama_mhs[100], nim_mhs[100];
		float nilai_mhs[100], total_nilai[100];
		char huruf[100];
		
};



int main(){
	nilaiMHS mhs;
	
	int pilihan;
	cout << "Masukkan jumlah mahasiswa: ";
	cin >> mhs.jumlah_mhs;
	cout << endl;
	
	do{
	cout << "+===============================================+" << endl;
	cout << "|\t\t\tMENU\t\t\t|" << endl;
	cout << "+===============================================+" << endl;
	cout << "| 1. Input Nilai\t\t\t\t|" << endl;
	cout << "| 2. Tampilkan Data Nilai\t\t\t|" << endl;
	cout << "| 3. Keluar\t\t\t\t\t|" << endl;
	cout << "+===============================================+" << endl;
	cout << "| Masukkan Pilihan : ";
	cin >> pilihan;
	cout << "+===============================================+" << endl << endl << endl;
	
	switch(pilihan){
		case 1: mhs.input_nilai(); break;
		case 2: mhs.tampilkan_data(); break;
		case 3: break;
		default : cout << "Input tidak valid" << endl; break;
	}
	} while(pilihan != 3);
	return 0;
}


