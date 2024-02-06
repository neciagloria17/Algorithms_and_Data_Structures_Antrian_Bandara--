#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "header.h"

int main(){
   	Bandara*penumpang_1 = (Bandara *)calloc(1,sizeof(Bandara));
   	Bandara*penumpang_2 = (Bandara *)calloc(1,sizeof(Bandara));
   	Bandara*penumpang_3 = (Bandara *)calloc(1,sizeof(Bandara));
   	Bandara*penumpang_4 = (Bandara *)calloc(1,sizeof(Bandara));
   	Bandara*penumpang_5 = (Bandara *)calloc(1,sizeof(Bandara));
    
	strcpy(penumpang_1->Id_KTP, "000039");
    strcpy(penumpang_1->Nama, "Samuel_Napitupulu");
    strcpy(penumpang_1->Rute_Penerbangan, "Kalimantan");
    strcpy(penumpang_1->Maskapai_Penerbangan, "BatikAir");
    strcpy(penumpang_1->Dosis_Vaksin, "Vaksin_ke1, Vaksin_ke2, Vaksin_ke3");
	strcpy(penumpang_1->Nomor_Kursi, "1");
    penumpang_1->ptrPenumpangLainnya= penumpang_2;

	strcpy(penumpang_2->Id_KTP, "000034");
    strcpy(penumpang_2->Nama, "Daniel_Saragih");
    strcpy(penumpang_2->Rute_Penerbangan, "Yogyakarta");
    strcpy(penumpang_2->Maskapai_Penerbangan, "AirAsia");
    strcpy(penumpang_2->Dosis_Vaksin, "Vaksin_ke1, Vaksin_ke2");
	strcpy(penumpang_2->Nomor_Kursi, "2");
    penumpang_2->ptrPenumpangLainnya= penumpang_3;
    
    strcpy(penumpang_3->Id_KTP, "000053");
    strcpy(penumpang_3->Nama, "Winda_Sitorus");
    strcpy(penumpang_3->Rute_Penerbangan, "Medan");
    strcpy(penumpang_3->Maskapai_Penerbangan, "LionAir");
    strcpy(penumpang_3->Dosis_Vaksin, "Vaksin_ke1, Vaksin_ke2, Vaksin_ke3");
	strcpy(penumpang_3->Nomor_Kursi, "3");
    penumpang_3->ptrPenumpangLainnya= penumpang_4;
    
    strcpy(penumpang_4->Id_KTP, "000052");
    strcpy(penumpang_4->Nama, "Necia_Sihotang");
    strcpy(penumpang_4->Rute_Penerbangan, "Medan");
    strcpy(penumpang_4->Maskapai_Penerbangan, "Sriwijaya");
    strcpy(penumpang_4->Dosis_Vaksin, "Vaksin_1, Vaksin_2");
	strcpy(penumpang_4->Nomor_Kursi, "4");
    penumpang_4->ptrPenumpangLainnya= penumpang_5;
    
	strcpy(penumpang_5->Id_KTP, "000048");
    strcpy(penumpang_5->Nama, "Eirene_Sipayung");
    strcpy(penumpang_5->Rute_Penerbangan, "Samosir");
    strcpy(penumpang_5->Maskapai_Penerbangan, "AirAsia");
    strcpy(penumpang_5->Dosis_Vaksin, "Vaksin_ke1, Vaksin_ke2, Vaksin_ke3");
	strcpy(penumpang_5->Nomor_Kursi, "05");
    penumpang_5->ptrPenumpangLainnya= NULL;

	menu:
	printf ("Pilihan \n");
	printf("1. Mencari seseorang berdasarkan ID KTP \n");
	printf("2. Mencetak informasi penumpang sesuai rute pesawat dan maskapai penerbangan \n");
	printf("3. Mencetak seluruh informasi penumpang\n");
	printf("4. Keluar \n");

	int pilih;	
	printf("Tekan bagian beberapa Pilihan : ");
	scanf("%d", &pilih);
	
	if(pilih==1){
		char Id_KTP [50];
    	printf("Cari berdasarkan Id_KTP = ");
    	scanf("%s", &Id_KTP);
    	MencariId_KTP(penumpang_1, Id_KTP);
    	goto menu;
	}
	else if(pilih == 2){
		char Rute_Penerbangan[50];
		printf("Masukkan Maskapai_Penerbangan = ");
		scanf("%s", &Rute_Penerbangan);
		MencariRute_Penerbangan(penumpang_1, Rute_Penerbangan);
		goto menu;
	}
	else if(pilih == 3){
		InformasiPenumpang(penumpang_1);
		goto menu;
	}
	else if(pilih == 4){
		printf("\n Terimakasih :) ");
	}
	else{
		exit(0);
	}

    return 0;
}
