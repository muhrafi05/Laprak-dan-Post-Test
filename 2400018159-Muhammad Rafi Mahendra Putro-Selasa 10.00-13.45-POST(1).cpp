#include <iostream>
#include <iomanip>

using namespace std;

struct bensin{
	double harga_pertalite;
	double harga_pertamax;
	double total_liter;
	string nama_pelanggan;
	string jenis_bensin;
	double total_harga;
	
};

int main() {
bensin data;
data.harga_pertalite=7000;
data.harga_pertamax=9000;
cout<<"Pilih bensin jenis bensin (pertalite / pertamax): ";
getline(cin,data.jenis_bensin);


if(data.jenis_bensin=="pertalite"||data.jenis_bensin=="PERTALITE"){
cout<<"Pilih total liter yang akan diisi\t\t: ";
cin>>data.total_liter;
cout<<"Masukkan nama pelanggan\t\t\t\t: ";
cin.ignore();
getline(cin,data.nama_pelanggan);
data.total_harga=data.harga_pertalite*data.total_liter;
}else if(data.jenis_bensin=="pertamax"||data.jenis_bensin=="PERTAMAX"){	
cout<<"Pilih total liter yang akan diisi\t\t: ";
cin>>data.total_liter;
cout<<"Masukkan nama pelanggan\t\t\t\t: ";
cin.ignore();
getline(cin,data.nama_pelanggan);
data.total_harga=data.harga_pertamax*data.total_liter;
}
cout<<endl<<endl;
cout<<"============STRUK PEMBELIAN==============\n";
cout<<"|Total liter\t: "<<data.total_liter<<" Liter\t\t|"<<endl;
cout<<"|Jenis bensin\t: "<<data.jenis_bensin<<"\t\t|"<<endl;
cout<<"|Nama pelanggan\t: "<<data.nama_pelanggan<<"\t\t\t|"<<endl;
cout<<"|Total harga\t: Rp."<<data.total_harga<<"\t\t|"<<endl;
cout<<"=========================================";





}
