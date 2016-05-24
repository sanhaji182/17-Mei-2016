#include <iostream>
#include <cstdlib>>

using namespace std;

int main(){
    float jumlah_jarak=0;
    float jumlah_waktu=0;
    float kecepatan;
    int jarak,waktu;
    float angka[6][2];
    int urutan = 1;
    for(jarak=0;jarak<6;jarak++){
            cout<<"Perolehkan waktu dan jarak anda No."<<urutan<<endl;
        for(waktu=0;waktu<=1;waktu++){
                if(waktu!=0){
                cout<<"Waktu (s) : ";
            cin>>angka[jarak][waktu];
            }else{
            cout<<"Jarak (m) : ";
            cin>>angka[jarak][waktu];}
        }
        cout<<endl;
        urutan++;
    }
    system("cls");

    urutan=1;
    for(jarak=0;jarak<6;jarak++){
        for(waktu=0;waktu<=1;waktu++){
                if(waktu!=0){
                jumlah_waktu=jumlah_waktu+angka[jarak][waktu];
                cout<<"Waktu No."<<urutan<<" = "<<angka[jarak][waktu]<<"s"<<endl;
            }else{
                jumlah_jarak=jumlah_jarak+angka[jarak][waktu];
            cout<<"Jarak No."<<urutan<<" = "<<angka[jarak][waktu]<<"m"<<endl;}


        }
        cout<<endl;
        urutan++;
    }

    kecepatan=jumlah_jarak/jumlah_waktu;
    cout<<"-------------------------- "<<endl<<endl;
    cout<<"Total Jarak = "<<jumlah_jarak<<"m"<<endl;
    cout<<"Total Waktu = "<<jumlah_waktu<<"s"<<endl;
    cout<<"Total kecepatan (Total Jarak / Total Waktu ) = " <<kecepatan<<"m/s"<<endl;


return 0;
}
