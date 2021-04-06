// Nama : Muhammad Taufik Zamaludin
// NIM : 1120031026
// Universitas Faletehan Teknik Informatika

#include <iostream>
#include <sstream>
using namespace std;

struct tJam {
    int hh;
    int mm;
    int ss;

    void setJam(int jam) {
        hh = jam;
    }

    void setMenit(int menit) {
        mm = menit;
    }

    void setDetik(int detik) {
        ss = detik;
    }
    
    int getJam() {
    	return hh;
	}
    
    int getMenit() {
    	return mm;
	}
    
    int getDetik() {
    	return ss;
	}
	
	bool isValid(){
		if(hh < 0 || hh > 23) {
			return false;
		}
		
		if(mm < 0 || mm > 59) {
			return false;
		}
		
		if(ss < 0 || ss > 59) {
			return false;
		}
		
		return true;
	}

    void cetakJam() {
    	// Cek jika jam:menit:detik sudah valid
    	if(isValid()) {
    		string HH, hh_str, MM, mm_str, DD, dd_str;
    		stringstream ss, aa, zz;  
    		
  			ss << getJam();  
  			ss >> hh_str;
  			
  			aa << getMenit();  
  			aa >> mm_str;
  			
  			zz << getDetik();  
  			zz >> dd_str;
  				
    		if(getJam() <= 9){
  				HH = "0" + hh_str;
			}else{
				HH = hh_str;
			}
			
			if(getMenit() <= 9){
  				MM = "0" + mm_str;
			}else{
				MM = mm_str;
			}
			
			if(getDetik() <= 9){
  				DD = "0" + dd_str;
			}else{
				DD = dd_str;
			}
			
        	cout << "Jam sekarang " << HH << ":" << MM << ":" << DD << endl;
		} else {
			cout << "Format jam tidak benar !!!" << endl;
		}
    }
};
