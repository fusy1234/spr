/* zad 4.
z pliku pobrać 6 liczb całkowitych nie ujemnych i obok kazdej z nich 
napisać postać binarną tej liczby */

#include <iostream>
#include <fstream>
using namespace std;
void dectobin(int a,int p){
int tab[32];
int i = 0;
while(a!=0){
    tab[i]=a%p;
    a=a/p;
    i++;

}
for(int j=i-1;j>=0;j--){
cout << tab[j]<<" ";
}
}
int main()
{
    int roz;
ifstream plik("cyfry.txt");
for(int i = 0;i<6;i++){
    plik >> roz;
    cout << roz <<" - ";
    dectobin(roz,2);
    cout << endl;
}


    return 0;
}
