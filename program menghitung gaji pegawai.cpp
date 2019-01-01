#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	int gaji, jumlah_jam_kerja;
	
	cout << "menghitung gaji pegawai jika perjam 5000" <<endl;
	cout << "masukkan jumlah jam kerja : ";
	cin >> jumlah_jam_kerja;
	
	gaji = jumlah_jam_kerja * 5000;
	cout << "gaji pegawai adalah : " <<gaji;
	
	return 0;
	
}
