#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;
//header
void welcome()
{
    cout<<"\n\t   -----------------------------------------------------------------";
    cout<<"\n\t   |               |               |               |               |";
    cout<<"\n\t   |      :V       |               |               |       XD      |";
    cout<<"\n\t   |                        AGASTHYA HOTEL                         |";
    cout<<"\n\t   |-------------          JL. In Dulu No 42          -------------|";
    cout<<"\n\t   |                 Kota Konoha, Provinsi East Blue               |";
    cout<<"\n\t   |              Nama Resepsionis : Nobita (123456789)            |";
    cout<<"\n\t   |      :P       |               |               |       :)      |";
    cout<<"\n\t   |               |               |               |               |";
    cout<<"\n\t   -----------------------------------------------------------------" << endl;
}
//data tipe kamar
string pilihan(int i){
    string kamar[5];

    kamar[0]= "STANDART";
    kamar[1]= "PREMIUM";
    kamar[2]= "DELUXE";
    kamar[3]= "SUITE";
    kamar[4]= "ROYALE";

    return kamar[i];

}

//data fitur kamar
void fitur(int i){
    string fitur[5];

    fitur[0] = "\n\t   - Ukuran kamar 4x6 \n\t   - Single bed \n\t   - Kamar mandi (shower & closet) \n\t   - Televisi \n\t   - Lemari kecil";
    fitur[1] = "\n\t   - Ukuran kamar 4x6 \n\t   - Double bed \n\t   - Kamar mandi (shower & closet) \n\t   - Televisi \n\t   - Lemari kecil";
    fitur[2] = "\n\t   - Ukuran kamar 5x6 \n\t   - Double bed \n\t   - Kamar mandi (shower, closet & bath tub) \n\t   - Televisi \n\t   - Lemari sedang \n\t   - Single sofa";
    fitur[3] = "\n\t   - Ukuran kamar 5x6 \n\t   - King bed \n\t   - Kamar mandi (shower, closet & bath tub) \n\t   - Televisi \n\t   - Lemari besar \n\t   - Meja \n\t   - Kursi \n\t   - Double sofa \n\t   - Kulkas";
    fitur[4] = "\n\t   - Ukuran kamar 6x7 \n\t   - King bed & Single bed \n\t   - Kamar mandi (shower, closet & bath tub) \n\t   - Televisi \n\t   - Lemari sedang & Lemari besar \n\t   - Meja \n\t   - Kursi \n\t   - Double sofa kulkas \n\t   - Mini room";

    cout << fitur[i];
}
//harga tiap tipe kamar
int harga(int i){
    int harga[5];

    harga[0] = 400000;
    harga[1] = 450000;
    harga[2] = 650000;
    harga[3] = 800000;
    harga[4] = 1000000;

    return harga[i];
}

//data tersimpan
void datapesanan(string nama, string alamat, string kamar, string no, char gender, int o, int harga, int total, int durasi, int tanggal, int bulan, int tahun, int p, int a, int tahun_fix)
{
    int kembali;
    cout << "\n\t   ================================================================";
    cout << "\n\t   Data Pesanan Anda";
    cout << "\n\t   ----------------------------------------------------------------";
    cout << "\n\t   Nama              : " << nama;
    cout << "\n\t   Jenis kelamin     : " << gender;
    cout << "\n\t   Alamat            : " << alamat;
    cout << "\n\t   No. telp.         : " << no;
    cout << "\n\t   Tipe kamar        : " << kamar;
    cout << "\n\t   No. kamar         : " << o;
    cout << "\n\t   Durasi menginap   : " << durasi << " hari";
    cout << "\n\t   Tanggal check in  : " << tanggal << "/" << bulan << "/" << tahun;
    cout << "\n\t   Tanggal check out : " << p << "/" << a << "/" << tahun_fix;
    cout << "\n\t   Harga perhari     : Rp " << harga;
    total = harga*durasi;
    cout << "\n\t   Harga Total       : Rp " << total;
    cout << "\n\t   ================================================================";
}

//program utama
int main(){
    string nama, alamat, kamar, no;
    int j, pk, o, tanggal, bulan, tahun, durasi, total, tahun_fix, bayar, kembali;
    char gender, opsi1, ulang, ulang1, ulang2, ulang3;


//isi identitas
awal:
    system ("cls");
    welcome();
    cout << "\n\n\t    Silahkan isi form berikut ini";
    cout << "\n\t    (Peringatan : tidak boleh ada spasi!)";
    cout << "\n\t   =================================================================";
    cout << "\n\t   |  Contoh                                                       |";
    cout << "\n\t   |---------------------------------------------------------------|";
    cout << "\n\t   |  Nama Pemesan       : Udin_Uchiha                             |";
    cout << "\n\t   |  Jenis kelamin (L/P): L                                       |";
    cout << "\n\t   |  Alamat             : Jakarta_Pusat                           |";
    cout << "\n\t   |  No. telp.          : 081111111111                            |";
    cout << "\n\t   =================================================================";
    cout << "\n\n\t    Nama Pemesan       : ";
    cin >> nama;
    genderin:
    cout << "\t    Jenis kelamin (L/P): ";
    cin >> gender;
    if( gender == 'l' || gender == 'L' )
    {
        cout << "\t    Alamat             : ";
        cin >> alamat;
        cout << "\t    No. telp.          : ";
        cin >> no;
    }
    else if (gender == 'p' || gender == 'P')
    {
        cout << "\t    Alamat             : ";
        cin >> alamat;
        cout << "\t    No. telp.          : ";
    cin >> no;
    }
    else
    {
        cout << "\n\t    Invalid!" << endl;
        goto genderin;
    }

//menu
    do{
        system ("cls");
        welcome();
        cout << "\n\t   Menu";
        cout << "\n\t   a. Lihat Fasilitas";
        cout << "\n\t   b. Cek Harga";
        cout << "\n\t   c. Pesan Kamar";
        cout << "\n\t   d. Batalkan";
        cout << "\n\t   Masukan pilihan anda : ";
        cin >> opsi1;

//menu utama hotel
        if (opsi1 == 'a'||opsi1=='A'){
            cout << "\n\t   =================================================================";
            cout << "\n\t   Berikut ini adalah beberapa tipe kamar yang tersedia : " ;
            for(int i=1;i<6;i++){
                cout << "\n\t   " << i <<". " << pilihan(i-1);
                cout << " room";
            }
            cout << "\n\t   Pilih room: ";
            cin >> j;
            cout << "\n\t   =================================================================";
            cout << "\n\t      " << pilihan(j-1);
            cout << "\n\t   =================================================================";
            fitur(j-1);
            cout << "\n\t   =================================================================";
            cout << endl;
            getch();
            ulang= 'Y';

        } else if(opsi1 == 'b'||opsi1=='B'){
            cout << "\n\t   List Harga";
            cout << "\n\t   =================================================================";
            for(int i=1;i<6;i++){
            cout << "\n\t   " << i <<". " << pilihan(i-1) << " room \t= \tRp " << harga(i-1);
            }
            cout << "\n\t   =================================================================";
            getch();
            ulang= 'Y';

        } else if(opsi1 == 'c'||opsi1=='C'){
            cout << "\n\t   Berikut ini adalah beberapa tipe kamar yang tersedia : " ;
            for(int i=1;i<6;i++){
                cout << "\n\t   " << i <<". " << pilihan(i-1);
                cout << " room";
            }
            cout << "\n\t   Pilih room : ";
            cin >> pk;
            kamar = pilihan(pk-1);
            ulang = 't';

        } else if(opsi1 == 'd'||opsi1=='D'){
            system ("cls");
            welcome();
            cout << "\n\t\t\t     -_PEMESANAN ANDA DIBATALKAN!_-\n\n";
            getch();
            exit(0);

        } else {
            cout << "\n\t   Masukan invalid" <<  endl;
            getch();
            ulang = 'y';
        }
    }while (ulang == 'Y' || ulang == 'y');


//nomor kamar
nomor:
    cout << "\n\t   =================================================================";
    cout << "\n\t   Pilih nomor kamar (1-100) = ";
    cin >> o;
    if (o>100)
    {
        cout << "\t   Nomor kamar tidak tersedia!\n";
        goto nomor;
    }

//durasi stay
    cout << "\t   Lama menginap             = ";
    cin >> durasi;
    cout << "\t   Tanggal Check In (DD)     = ";
    cin >> tanggal;
    cout << "\t   Bulan            (MM)     = ";
    cin >> bulan;
    cout << "\t   Tahun            (YYYY)   = ";
    cin >> tahun;
    //calender logic
    int tanggal_bulan[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i, k = 0, p, a;
    for(i = 0; i < bulan; i++)
    k = k + tanggal_bulan[i];
    k = k + tanggal+durasi;
    cout << "\t   Tanggal Check Out       = ";
    if(k <= 365){
        for(i = 0; i < 13; i++){
            p = k - tanggal_bulan[i];

        if(p <= tanggal_bulan[i+1]){
            a = i+1;
        break;
        }else
            k=p;
        }
        tahun_fix = tahun;
        cout << p << "/" << a << "/" << tahun_fix;
    } else {
        k = k - 365;
        for(i = 0; i < 13; i++){
            p = k - tanggal_bulan[i];
        if(p <= tanggal_bulan[i+1]){
            a = i+1;
        break;
        }else
            k = p;
        }
    tahun_fix = tahun + 1;
    cout << p << "/" << a << "/" << tahun_fix;
    }

    system ("cls");
    welcome();
    datapesanan(nama, alamat, kamar, no, gender, o, harga(pk-1), total, durasi, tanggal, bulan, tahun, p, a, tahun_fix);

    cout << "\n\t   Apakah data anda sudah benar?(y/t) ";
    cin >> ulang1;
    if ( ulang1 == 'y' || ulang1 == 'Y'){
        system("cls");
        welcome();
        datapesanan(nama, alamat, kamar, no, gender, o, harga(pk-1), total, durasi, tanggal, bulan, tahun, p, a, tahun_fix);
        cout << "\n\t   Lanjutkan Pembayaran? (y/t) ";
        cin >> ulang2;
        if ( ulang2 == 'Y' || ulang2 == 'y'){
            pay:
            system("cls");
            welcome();
            total = harga(pk-1)*durasi;
            datapesanan(nama, alamat, kamar, no, gender, o, harga(pk-1), total, durasi, tanggal, bulan, tahun, p, a, tahun_fix);
            cout << "\n\t   Masukkan nominal  : Rp ";
            cin >> bayar;
            if(bayar >= total){
                    kembali = bayar - total;
                    cout << "\t   Kembali           : Rp " << kembali << endl;
                    getch();
            }else if(bayar < total){
                    kembali = total - bayar;
                    cout << "\t   Kurang            : Rp " << kembali << endl;
                    getch();
            }
        }else if (ulang2 == 't' || ulang2 == 'T'){
            system("cls");
            welcome();
            datapesanan(nama, alamat, kamar, no, gender, o, harga(pk-1), total, durasi, tanggal, bulan, tahun, p, a, tahun_fix);
            cout << "\n\t   Untuk menyelesaikan pemesanan, Anda perlu melakukan pembayaran";
            cout << "\n\t   Apakah Anda ingin membatalkan pesanan? (y/t) ";
            cin >> ulang3;
            if (ulang3 == 'y' || ulang3 == 'Y'){
                system("cls");
                welcome();
                cout <<"\n\t   -----------------------------------------------------------------";
                cout << "\n\t  |                Pesanan Anda Telah Dibatalkan                   |";
                cout <<"\n\t   -----------------------------------------------------------------" << endl;
                getch();
                exit(0);
            }else if(ulang3 == 't' || ulang3 == 'T'){
                goto pay;
            }
        }
    } else if ( ulang1 == 't' || ulang1 == 'T'){
        goto awal;
    }

        system ("cls");
        welcome();
        datapesanan(nama, alamat, kamar, no, gender, o, harga(pk-1), total, durasi, tanggal, bulan, tahun, p, a, tahun_fix);
        cout << "\n";
        cout << "\n\t   -----------------------------------------------------------------";
        cout << "\n\t  |                TERIMAKASIH ATAS KUNJUNGANNYA                   |";
        cout << "\n\t   -----------------------------------------------------------------" << endl;
        getch();
}
