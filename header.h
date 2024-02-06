#ifndef Bandara_Header
#define Bandara_Header

typedef struct SBandara Bandara;

struct SBandara{
    char Id_KTP[50];
    char Nama[50];
    char Rute_Penerbangan[50];
    char Maskapai_Penerbangan[50];
    char Dosis_Vaksin[50];
    char Nomor_Kursi[50];
    Bandara*ptrPenumpangLainnya;
};
void InformasiPenumpang (Bandara * isi);
void MencariId_KTP (Bandara * isi, char * cari);
void MencariRute_Penerbangan (Bandara * isi, char * Rute_Penerbangan);
#endif
