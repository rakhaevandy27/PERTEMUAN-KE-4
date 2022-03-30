//file header//
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
using namespace std;

int main(int argc, char const *argv[])
{   
    //colored text and backgorund//
    system("Color 0A");
    //deklarasi variabel//
    char nama_lengkap[35],panggilan[20],tempat_lahir[20],tanggal_lahir[20],bulan_lahir[20],tahun_lahir[20],jenis_kelamin[20];

    //header//
    system("cls");
    printf("==============================================================\n");
    printf("=============    PENGISIAN FORMULIR DATA DIRI    =============\n");
    printf("==============================================================\n");
    printf("SILAKAN MASUKAN INFORMASI ANDA\n");
    printf("\n");

    //INPUT DATA//
    printf("Nama Lengkap : ");
    gets(nama_lengkap);

    printf("Panggilan : ");
    scanf("%s",&panggilan);
    system("cls");

    printf("SILAKAN MASUKAN INFORMASI ANDA\n");
    printf("\n");
    printf("Tempat Lahir : ");
    scanf("%s",&tempat_lahir);
    
    printf("Tanggal Lahir : ");
    scanf("%s",&tanggal_lahir);
    
    printf("Bulan Lahir : ");
    scanf("%s",&bulan_lahir);

    printf("Tahun Lahir : ");
    scanf("%s",&tahun_lahir);
    system("cls");

    printf("SILAKAN MASUKAN INFORMASI ANDA\n");
    printf("Jenis Kelamin : ");
    scanf("%s",&jenis_kelamin);
    system("cls");
    

    //OUTPUT//
    system("Color09");
    printf("==============================================================\n");
    printf("=                        BIODATA DIRI                        =\n");
    printf("==============================================================\n");
    printf("\n");
    printf("   Nama Lengkap            : %s \n",nama_lengkap);
    printf("   Panggilan               : %s \n",panggilan);
    printf("   Tempat/tanggal lahir    : %s,%s %s %s \n",tempat_lahir,tanggal_lahir,bulan_lahir,tahun_lahir);
    printf("   Jenis Kelamin           : %s \n",jenis_kelamin);
    printf("\n");
    printf("   Terima kasih %s.\n",nama_lengkap);
    printf("   Data anda sudah berhasil di simpan.\n");
    printf("\n");

    getch();
}