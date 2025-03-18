#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Pada bagian struct ini memiliki isi type data string dari variabel data ktp 
struct KTP{
	string nik;
	string nama;
	string tempat_tgl_lahir;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
};


//Pada void ini berisi syntax untuk input data
void inputKTP(KTP &ktp) {
	cout<<"Masukkan nik : ";
	getline(cin,ktp.nik);
	cout<<"Masukkan nama : ";
	getline(cin,ktp.nama);
	cout<<"Masukkan tempat/tgl lahir : ";
	getline(cin,ktp.jenis_kelamin);
	cout<<"Masukkan jenis kelamin : ";
	getline(cin,ktp.jenis_kelamin);
	cout<<"Masukkan golongan darah : ";
	getline(cin,ktp.gol_darah);
	cout<<"Masukkan Alamat : ";
	getline(cin,ktp.alamat);
	cout<<"Masukkan rt/rw : ";
	getline(cin,ktp.rt_rw);
	cout<<"Masukkan kelurahan/desa : ";
	getline(cin,ktp.kel_desa);
	cout<<"Masukkan kecamatan : ";
	getline(cin,ktp.kecamatan);
	cout<<"Masukkan agama : ";
	getline(cin,ktp.agama);
	cout<<"Masukkan status perkawinan : ";
	getline(cin,ktp.status_perkawinan);
	cout<<"Masukkan pekerjaan : ";
	getline(cin,ktp.pekerjaan);
	cout<<"Masukkan kewarganegaraan : ";
	getline(cin,ktp.kewarganegaraan);
	cout<<"Masukkan berlaku hingga : ";
	getline(cin,ktp.berlaku_hingga);
}
//Lalu pada void displayKTP menampilkan untuk input data ktp
void displayKTP(const KTP &ktp) {
	cout <<"\n============simulasi ktp======\n";
	cout<<left<<setw(20)<<"NIK"<<":"<<ktp.nik<<endl;
	cout<<left<<setw(20)<<"Nama"<<":"<<ktp.nama<<endl;
	cout<<left<<setw(20)<<"Tempat/tgl lahir"<<" :"<<ktp.tempat_tgl_lahir<<endl;
	cout<<left<<setw(20)<<"Jenis kelamin"<<":"<<ktp.jenis_kelamin<<endl;
	cout<<left<<setw(20)<<"Jenis kelamin"<<":"<<ktp.jenis_kelamin<<"gol darah"<<":"<<ktp.gol_darah<<endl;
	cout<<left<<setw(20)<<"alamat"<<":"<<ktp.alamat<<endl;
	cout<<left<<setw(20)<<"rt/rw"<<":"<<ktp.rt_rw<<endl;
	cout<<left<<setw(20)<<"kel/desa"<<":"<<ktp.kel_desa<<endl;
	cout<<left<<setw(20)<<"kecamatan"<<":"<<ktp.kecamatan<<endl;
	cout<<left<<setw(20)<<"agama"<<":"<<ktp.agama<<endl;
	cout<<left<<setw(20)<<"Status perkawinan"<<":"<<ktp.status_perkawinan<<endl;
	cout<<left<<setw(20)<<"pekerjaan"<<":"<<ktp.pekerjaan<<endl;
	cout<<left<<setw(20)<<"kewarganegaraan"<<":"<<ktp.kewarganegaraan<<endl;
	cout<<left<<setw(20)<<"Berlaku hingga"<<":"<<ktp.berlaku_hingga<<endl;
													
//Pada int main menampilkan hasil dari inputan data ktp							
}
int main() {
KTP ktp;
cout<<"Input data ktp\n";
inputKTP(ktp);

displayKTP(ktp);
	
}

