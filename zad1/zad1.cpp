/*
zad 1.
z pliku pobrać rozmiar tablicy jedno wymiarowej wypisać podaną liczbę następnie 
wypełnić tablicę o tym rozmiarze liczbami losowymi całkowitymi od 10 do 50 wyświetlić
otrzymaną tablice posortować jej elementy i wyświetlić */

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;
 void bubblesort(int tab[], int n){
    int temp;
    for(int k=0;k<n-1;k++){
        for(int  i=0;i<n-1;i++){
            if(tab[i]>tab[i+1]){
                temp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
            }
        }
    }
    }

int main()
{
    int roz;
    srand(time(NULL));
    ifstream plik("rozmiar.txt");
    plik >> roz;
    cout << roz;
    cout << endl;
    int tab[roz];
    for(int i=0;i<roz;i++){
        tab[i]=rand()%40+10;
        cout << tab[i]<<" ";
    }
    cout << endl;
cout << " po posortowaniu";
cout << endl;

bubblesort(tab,roz);
 for(int i=0;i<roz;i++){

        cout << tab[i]<<" ";
    }




    return 0;
}
