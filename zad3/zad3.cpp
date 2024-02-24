/*
zad 3.
ze zbioru od 2 do N gdzie n podaje uzytkownik wypisać wszystkie liczby pierwsze */

#include <iostream>

using namespace std;
void sito(int n){
bool tab[n+1];
for(int i=0;i<=n;i++){
    tab[i]=1;
}
for(int j=2;j*j<n+1;j++){
    for(int k = j+1;k<=n+1;k++){
        if(k%j==0){
            tab[k]=0;
        }
    }
}
for(int o=2;o<=n+1;o++){
    if(tab[o]==1){
        cout << o <<" ";
    }
}
}

int main()
{ 
    int x;
    cin >>x;
    sito(x);

    return 0;
}
