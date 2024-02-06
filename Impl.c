#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "header.h"

void InformasiPenumpang (Bandara * isi){
    while (isi != NULL){
        printf("Id_KTP \t \t = %s\n", isi->Id_KTP);
	    printf("Nama \t = %s \n", isi->Nama);
	    printf("Rute_Penerbangan \t = %s\n", isi->Rute_Penerbangan);
	    printf("Maskapai_Penerbangan \t \t = %s\n", isi->Maskapai_Penerbangan);
		printf("Dosis_Vaksin \t = %s\n", isi->Dosis_Vaksin);
	    printf("Nomor_Kursi \t \t = %s\n", isi->Nomor_Kursi);
	    puts ("");
	    isi=isi->ptrPenumpangLainnya;
    }
}

void MencariId_KTP (Bandara * isi, char * cari){
    while (isi != NULL){
        if(strcmp(isi->Id_KTP, cari) == 0){
        	printf("Id_KTP \t \t = %s\n", isi->Id_KTP);
	    	printf("Nama \t = %s \n", isi->Nama);
	    	printf("Rute_Penerbangan \t = %s\n", isi->Rute_Penerbangan);
	    	printf("Maskapai_Penerbangan \t \t = %s\n", isi->Maskapai_Penerbangan);
			printf("Dosis_Vaksin \t = %s\n", isi->Dosis_Vaksin);
	    	printf("Nomor_Kursi \t \t = %s\n", isi->Nomor_Kursi);
	    	puts ("");
        }
        isi=isi->ptrPenumpangLainnya;
    }
}
void MencariRute_Penerbangan (Bandara * isi, char * Rute_Penerbangan){
	while (isi !=NULL){
		if(strcmp(isi->Maskapai_Penerbangan, Rute_Penerbangan)==0){
	        printf("Id_KTP \t \t = %s\n", isi->Id_KTP);
	    	printf("Nama \t = %s \n", isi->Nama);
	    	printf("Rute_Penerbangan \t = %s\n", isi->Rute_Penerbangan);
	    	printf("Maskapai_Penerbangan \t \t = %s\n", isi->Maskapai_Penerbangan);
			printf("Dosis_Vaksin \t = %s\n", isi->Dosis_Vaksin);
	    	printf("Nomor_Kursi \t \t = %s\n", isi->Nomor_Kursi);
	    	puts ("");
		}
		isi=isi->ptrPenumpangLainnya;
	}
}

