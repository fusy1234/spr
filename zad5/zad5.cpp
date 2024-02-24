/* zad 5.
tablica 2 wymiarową gdzie liość wierszy i kolumn podaje użytkownik wypełnić 
tak aby w komórce 0,0 była liczba 8 każda następna wartość idąc po wierszach było o 3 większe niż wartość wcześniejszej kartki */

#include <iostream>

using namespace std;

int main()
{
   int w,k;
cout << "podaj ilo�� wierszy";
   cin >> w;
   cout << "podaj ilo�� kolumn";
   cin >>k;
    int tab[w][k];
int p=8;
    for(int i = 0;i<w;i++){
        for(int j = 0 ; j<k;j++){
            tab[i][j]=p;
            p+=3;
            cout << tab[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
