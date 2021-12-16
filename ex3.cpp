#include<iostream>
#include<list>

using namespace std;

int main(){
    
    int valeurs,length;
    //declaration de la liste 
    list<int> liste1;
    cout<<"Entrer la taille de la liste  ";
    cin>>length;
    cout<<"Entrer les elements de la liste \n ";
    // déclaration d'une boucle pour entrer les valeurs dans la liste 
    for(int i=0; i<length; i++){
        cout<<"la valeur de "<<i+1<<"\t";
        cin>>valeurs;
        liste1.push_back(valeurs);
    }
    //declaration de la fonction qui tri la liste
    liste1.sort();
    cout<<"la liste apres le tri est : \n";
    //affichage de la liste trié 
    for(list<int>::iterator it = liste1.begin(); it!=liste1.end(); it++){
        cout << "" << *it;
        cout << "\n"; 
    }

    return 0;
}