#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std ;

//genera un array con dati presi in input
void crea_array(int a[], int L);

//genera un array con numeri casuali da zero a maxx
void crea_rand_array(int a[], int L, int maxx);

//stampa l'array
void stampa_array(int a[], int L, bool rev);

//rende ogni elemento dell'array uguale a zero
void inizializza_array(int a[], int L);

//concatena 2 array
void concatena_array(int a[], int b[], int c[], int L1, int L2);

//stampa la stringa più lunga tra le 3
void strlen_maggiore_tre(char a[], char b[], char c[]);

//concatena 2 stringhe nell'array a[]
void concatena_stringhe_array1(char a[], int L1, char b[]);

//scrive in dest[] la prima parola che inizia con la lettera data
void trova_parola(char a[], char x, char dest[]);

//scrive in b[] la parola più lunga contenuta in a[]
void parola_piu_lunga(char a[],int  L, char b[]);
