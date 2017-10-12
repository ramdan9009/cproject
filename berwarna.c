#include <stdio.h>
#include <conio.h>
#include <windows.h>
void textcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon,color);
}
void main()
{
clrscr();
textcolor(1);printf(“teks ini menggunakan warna biru”);
printf(“\n”);
textcolor(2);printf(“teks ini menggunakan warna hijau”);
printf(“\n”);
textcolor(3);printf(“teks ini menggunakan warna cyan”);
printf(“\n”);
textcolor(4);printf(“teks ini menggunakan warna merah”);
printf(“\n”);
textcolor(5);printf(“teks ini menggunakan warna magenta”);
printf(“\n”);
textcolor(6);printf(“teks ini menggunakan warna brown”);
printf(“\n”);
textcolor(7);printf(“teks ini menggunakan warna lightgray”);
printf(“\n”);
textcolor(8);printf(“teks ini menggunakan warna darkgray”);
printf(“\n”);
getch();
}
