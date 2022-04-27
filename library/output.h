using namespace std;

class Output {
	public :
		void cetak(){
      cout << "\n==============================================";
			cout << "\nSTUDI KASUS MENCARI NILAI MAKSIMUM,MINIMUM,DAN RATA-RATA \n";
			cout << "\nNama Dosen : Pak Ardi Pujiyanta";
      cout << "\nNama Mata Kuliah : Algoritma Pemrograman" << endl;
      cout << "Daftar Nilai :  -> " << endl;
      for(int i=0;i<10;i++){
        cout << "nilai mahasiswa ke "<< i+1; 
        cout <<" = "<<nilai[i];
        cout << endl;
      }
      cout << "Nilai Maks : -> " << bsr << endl;
			cout << "Nilai Min :  -> " <<  kcl << endl;
			cout << "Rata-rata :   -> " <<  rera << endl;
      
		}
		void getData(){
			ambil_data.open("api_data.txt");
      bool besar = true;
      bool kecil = false;
			while(!ambil_data.eof()){
				if(besar){
          ambil_data >> bsr;
          besar = false;
          kecil = true;
        }else if(kecil){
          ambil_data >> kcl;
          
          kecil = false;
        }else {
          ambil_data >> rera;
          }
        }
			ambil_data.close();

      ambil_data.open("nilai.txt");
			while(!ambil_data.eof()){
				ambil_data >> nilai[indeks];
				indeks += 1;
			}
			ambil_data.close();
		
		}
      

	private :
		ifstream ambil_data;
    string bsr , kcl , rera;
    string nilai[10];
    int indeks=0;
};