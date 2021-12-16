#include <iostream>
using namespace std;

class Test
{
public:
    static int tableau[];

public:
    static int division(int indice, int diviseur)
    {
        //on a ajoute des conditions en cas d'exception avec if throw  
        if ( diviseur == 0)
        {
            throw "division by zero is not supported!!";
        }
        if (indice>10 || indice<0)
        {
            throw "l'indice doit etre compris entre 0 et 9 ";
        }
        
        return tableau[indice] / diviseur;
    }
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};

int main()
{
    int x, y;
    bool test = true;
    //en cas d'exception nous attrapons l'exception avec try catch 
        try
        {
            cout << "Entrez lindice de lentier a diviser: " << endl;
            cin >> x;
            cout << "Entrez le diviseur: " << endl;
            cin >> y;
            cout << "Le resultat de la division est: " << endl;
            cout << Test::division(x, y) << endl;
        }
        catch (const char* e)
        {
            cerr << e<< '\n';

        
    }

 return 0;

}