using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> nilai[i];
        i=i+1;
				}
			ambil_data.close();
		}

		void toFile(){
			
      // menghitung jumlah isi array keseluruhan
nilaiMahasiswa = 0 ; //inisialisasi
for ( indeks = 0 ; indeks < 10 ; indeks++ )
{
nilaiMahasiswa = nilaiMahasiswa + nilai [indeks];
}

rerata = (double) nilaiMahasiswa / 10 ;


// mencari yang terkecil dari nilai yang ada di array
terkecil = nilai [0] ; //inisialisasi
for (indeks = 0 ; indeks < 10 ; indeks++ )
{
if (terkecil > nilai [indeks] )
{
terkecil = nilai [indeks];
}
}


// mencari yang terbesar dari nilai yang ada di array
terbesar = nilai [0] ; //inisialisasi
int num = 0;
for (indeks = 0 ; indeks < 10 ; indeks++ )
{
if (num < nilai [indeks] )
{
num = nilai [indeks];
terbesar = nilai [indeks];
}
}
			tulis_data.open("api_data.txt");
			tulis_data << terbesar << endl;
			tulis_data << terkecil << endl;
      tulis_data << rerata << endl;
			tulis_data.close();

      tulis_data.open("nilai.txt");
      for(n=0;n<10;n++){
        tulis_data << nilai[n];
        tulis_data << endl;
      }
      tulis_data.close();
		
}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int nilai[10];
    int i = 0;
    int indeks;
    int n;
    int nilaiMahasiswa;
    int terkecil;
    int terbesar;		
    double rerata;
		int num = 0;
};