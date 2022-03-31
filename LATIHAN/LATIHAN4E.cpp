#include <conio.h>
#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{
    char x[10];
    int nilai;

    //input//
    printf("Nama= ");
    scanf("%s",&x);
    printf("Nilai= ");
    scanf("%d",&nilai);

    //output
    printf("Selamat Datang %s",&x);
    printf("\nNilai Anda %d",&nilai);
    getch();
}
