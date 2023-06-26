//Immanuel Bagi Suranta (001202100031) IT CLASS 2
//Computing Career - Homework 1: Mini Market Program

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int main()
{
string brg1,brg2,brg3;
int byk1,byk2,byk3,jml1,jml2,jml3,total,disc;
int beras=68000,minyak=30000,gula=14000;

    cout <<"**************************************"<< endl;
    cout <<" Waroeng Sembako"<< endl;
    cout <<"**************************************"<< endl;
    cout <<"1. Beras 5kg    = Rp 68.000,-"<< endl;
    cout <<"2. Minyak 2L    = Rp 30.000,-"<< endl;
    cout <<"3. Gula 1kg     = Rp 14.000,-"<< endl;
    cout <<"**************************************"<< endl << endl;

    cout <<"Input nama barang 1 : "; cin >> brg1;
    cout <<"Banyak barang : "; cin >> byk1;
    jml1 = byk1 * beras;
    cout <<"Jumlah 1 : Rp. "<< jml1 << endl << endl;

    cout <<"Input nama barang 2 : "; cin >> brg2;
    cout <<"Banyak barang : "; cin >> byk2;
    jml2 = byk2 * minyak;
    cout <<"Jumlah 2 : Rp. "<< jml2 << endl << endl;

    cout <<"Input nama barang 3 : "; cin >> brg3;
    cout <<"Banyak barang : "; cin >> byk3;
    jml3 = byk3 *gula;
    cout <<"Jumlah 3 : Rp. "<< jml3 << endl << endl;

    cout <<"**************************************"<< endl;
    total = jml1+jml2+jml3;
    cout <<"Total Pembelian = Rp. "<< total << endl;

    if (total > 200000)
    disc = 0.1*total;

    else
    disc = 0;
    cout <<"Discount = Rp. "<< disc << endl;
    cout <<"Total Bayar = Rp. "<< total-disc << endl << endl;
    cout <<"***************************************"<< endl;
    cout <<" Terima kasih telah berkunjung ke toko kami ! "<< endl;
    cout <<"***************************************"<< endl;
    getch();
}
