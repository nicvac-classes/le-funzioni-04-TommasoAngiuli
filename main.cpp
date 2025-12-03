#include <iostream>
using namespace std;

double addizione(double a, double b) 
{
    double somma;
    somma = a + b;
    return somma;
}

double divisione(double a, double b) 
{
    double rapporto;
    rapporto = a / b;
    return rapporto;
}

double input() 
{
    double in, a;
    do 
    {
        cout << "inserisci un valore positivo" << endl;
        cin >> a;
    } while (a < 0);
    in = a;
    return in;
}

double moltiplicazione(double a, double b) 
{
    double prodotto;
    prodotto = a * b;
    return prodotto;
}

double potenza(double a, double b) 
{
    double pot;
    int i;
    pot = 1;
    for (i = 1; i <= b; i++) 
    {
        pot = pot * a;
    }
    return pot;
}

double sottrazione(double a, double b)
{
    double differenza;
    differenza = a - b;
    return differenza;
}
int main() 
{
    double a, b, somma, differenza, rapporto, prodotto, pot, in;
    cout << "inserisci il primo valore" << endl;
    a = input();
    cout << "inserisci il secondo valore" << endl;
    b = input();
    somma = addizione(a, b);
    cout << "la somma tra i due valori è " << somma << endl;
    differenza = sottrazione(a, b);
    cout << "la differenza tra i due valori è " << differenza << endl;
    prodotto = moltiplicazione(a, b);
    cout << "il prodotto tra i due valori è " << prodotto << endl;
    rapporto = divisione(a, b);
    cout << "il rapporto tra i due valori è " << rapporto << endl;
    pot = potenza(a, b);
    cout << "il primo valore elevato al secondo è " << pot << endl;
    return 0;
}