using namespace std;

class Input {
	public :

    void cetak(){
      for(i=0;i<10;i++){
        cout <<"masukkan nilai mahasiswa ke "<<i+1<<" = ";
        cin >> nilai[i];
      }
      
    }
		

		void toFile(){
			tulis_data.open("api_data.txt");
      for(i=0;i<10;i++){
        tulis_data << nilai[i];
        tulis_data <<endl;
      }
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int nilai[10];
    int min;
    int maks;
    int i;
};