#include <iostream>
#include <string.h>
#define maks 500
using namespace std;
 
int main(){
    char chiper[maks];
    char plain[maks];
    int key;
    int jumlah=0;
   
    cout<<"Masukkan kata : ";
    cin.getline(chiper, sizeof(chiper));
   
    cout<<"Masukkan key : ";
    cin>>key;
    //merubah plaintext menjadi aSchipper text
    for(int i=0; i<strlen(chiper); i++){
        cout<<chiper[i] <<"( "<<int(chiper[i])<< " )"; //manggil code asci
        jumlah=jumlah+int(chiper[i]);
        chiper[i] =(chiper[i]+key)%128;
       
    }
   
    cout<<endl;
    cout<<"total = "<<jumlah;
   
    cout<<"\nhasil enkripsi : "; //manggil kode setelah di enkripsi
    for(int i = 0; i<strlen(chiper); i++){
        if(chiper[i]>=90){
        //Agar ketika Melebihi 90 Di kurang dengan 26 supaya tidak lebih dari 90
        //jika melebihi maka beberbeda dengan hasil manual, karena ini berdasarakan tabel ascii
            chiper[i]=chiper[i]-26;
            cout<<chiper[i];
        }
        else{
        cout<<chiper[i];
        }
    }
   
    //Merubah chipper text menjadi plaintext kembali
    for(int i=0; i<strlen(chiper); i++){ //ubah kembali enkripsi ke dekripsi
        plain[i]=(chiper[i]-key)%128;
        chiper[i]=plain[i];
    }
   
    cout<<"\nhasil dekripsi : "; //Manggul Kode setelah di dekripsi
    for(int i=0; i<strlen(chiper); i++){
        if(chiper[i]<=64){
        //Jika kurang dari 64 maka akan di tambah dengan 26 supaya angka tidak kurang dari 64 dan dapat kembali ke plaintext awal,
        //jika kurang dari 64 maka dia tidak akan sama dengan manual karema imi berdasarkan tabel ascii
            chiper[i]=chiper[i]+26;
            cout<<chiper[i];
        }
        else{
        cout<<chiper[i];
        }
    }
}
