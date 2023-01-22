#include <iostream>
#include <string>

using namespace std;

int main () {
  bool start = true;
  string info;

  int pasien;
  string nama;
  string alamat;
  int kode_layanan;
  string jenis_layanan;
  int biaya_dokter;
  int biaya_obat;
  int bayar;
  int total;

  while(start) {
    cout << "Rumah Sakit Ibu dan Anak" << endl;
    cout << "Widya Asmita" << endl;
    cout << "Jl. Anggrek No. 20 Palembang" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;
    cout << "No. Pasien : ";
    cin >> pasien;
    cout << "Nama Pasien : ";
    cin >> nama;
    cout << "Alamat : ";
    cin >> alamat;
    cout << "Kode Layanan : ";
    cin >> kode_layanan;
    if(kode_layanan == 1) {
      jenis_layanan = "Umum";
      biaya_dokter = 60000;
    }
    if(kode_layanan == 2) {
      jenis_layanan = "Spesialis Penyakit Dalam";
      biaya_dokter = 100000;
    }
    if(kode_layanan == 3) {
      jenis_layanan = "Spesialis Kandungan";
      biaya_dokter = 150000;
    }
    if(kode_layanan == 4) {
      jenis_layanan = "Spesialis Anak";
      biaya_dokter = 200000;
    }
    cout << "Jenis Layanan : " << jenis_layanan << endl;
    cout << "Biaya Dokter  : " << biaya_dokter << endl;
    cout << "Biaya Obat : ";
    cin >> biaya_obat;
    cout << "----------------------------" << endl;
    cout << "Total Bayar   : " << biaya_obat + biaya_dokter << endl;
    cout << "Uang Bayar    : ";
    cin >> bayar;
    cout << "Uang Kembali  : " << bayar - (biaya_obat + biaya_dokter) << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "INPUT DATA LAGI [Y/T] ? ";
    cin >> info;
    if(info == "T") {
      break;
    }
  }
  return 0;
}
