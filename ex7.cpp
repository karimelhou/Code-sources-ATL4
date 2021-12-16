#include <iostream>
#include <list>

using namespace std;

string Animal::getgenre()
{
    return this->genre;
}
// declaration of class element
class Element
{
private:
    string nom;
    string type;

public:
    void setNom(string nom)
    {
        this->nom = nom;
    }
    void setType(string type)
    {
        this->type = type;
    }
    string getNom()
    {
        return this->nom;
    }
    string getType()
    {
        return this->type;
    }
};
// declaration of class repas
class Repas
{
private:
    string nom;
    int heure;
    string description;
    list<Element> elementsList;

public:
    void setNom(string nom)
    {
        this->nom = nom;
    }
    void setHeure(int heure)
    {
        this->heure = heure;
    }
    void setDescription(string description)
    {
        this->description = description;
    }
    void setElementsList(list<Element> elementsList)
    {
        this->elementsList = elementsList;
    }
    string getNom()
    {
        return this->nom;
    }
    int getHeure()
    {
        return this->heure;
    }
    string getDescription()
    {
        return this->description;
    }
    list<Element> getElementsList()
    {
        return this->elementsList;
    }
};
// declaration of class Animal
class Animal
{
protected:
    string nom;
    int age;
    string genre;

public:
    void setNom(string nom);
    void setAge(int age);
    void setGenre(string genre);
    string getnom();
    int getage();
    string getgenre();
};

void Animal::setNom(string nom)
{
    this->nom = nom;
}
void Animal::setAge(int age)
{
    this->age = age;
}
void Animal::setGenre(string genre)
{
    this->genre = genre;
}
string Animal::getnom()
{
    return this->nom;
}
int Animal::getage()
{
    return this->age;
}

// declaration of class Chat
class Chat : public Animal
{
private:
    string type;
    Repas chatRepas;

public:
    void setType(string type)
    {
        this->type = type;
    }
    void setRepas(Repas chatRepas)
    {
        this->chatRepas = chatRepas;
    }
    string getType()
    {
        return this->type;
    }
    Repas getRepas()
    {
        return this->chatRepas;
    }
    void sauter()
    {
        cout << "hyaaa3\n";
    }
};
// declaration of class Race
class Race
{
protected:
    string specifite;
    bool isRaceHybride()
    {
        if (specifite == "hybride")
        {
            return true;
        }
        return false;
    }

public:
    void setSpecifite(string specifite)
    {
        this->specifite = specifite;
    }
    string getSpecifite()
    {
        return this->specifite;
    }
};

// declaration of class Chien
class Entraineur;
class Chien : public Animal, Race
{
private:
    string taille;
    list<Entraineur> entraineurList;

public:
    void setTaille(string taille)
    {
        this->taille = taille;
    }
    void setEntraineurList(list<Entraineur> entraineurList)
    {
        this->entraineurList = entraineurList;
    }
    string getTaille()
    {
        return this->taille;
    }
    list<Entraineur> getEntraineurList()
    {
        return this->entraineurList;
    }
    bool isChass3()
    {
        return true;
    }
};

// declaration of class Entraineur
class Entraineur
{
private:
    string nom;
    string description;
    list<Chien> chienList;

public:
    void setNom(string nom)
    {
        this->nom = nom;
    }
    void setDescription(string description)
    {
        this->description = description;
    }
    void setChienList(list<Chien> chienList)
    {
        this->chienList = chienList;
    }
    string getNom()
    {
        return this->nom;
    }
    string getDescription()
    {
        return this->description;
    }
    list<Chien> getChienList()
    {
        return this->chienList;
    }
};

// declaration of class Compitition
class Compitition
{
private:
    string date;
    string nom;
    Chien chien;
    Entraineur entraineur;

public:
    int ordre;
    void setDate(string date)
    {
        this->date = date;
    }
    void setNom(string nom)
    {
        this->nom = nom;
    }
    void setChien(Chien chien)
    {
        this->chien = chien;
    }
    void setEntraineur(Entraineur entraineur)
    {
        this->entraineur = entraineur;
    }
    string getDate()
    {
        return this->date;
    }
    string getNom()
    {
        return this->nom;
    }
    Chien getChien()
    {
        return this->chien;
    }
    Entraineur getEntraineur()
    {
        return this->entraineur;
    }
};

int main()
{
    // declaration of Elements objects
    list<Element> myElements;
    Element el1, el2;
    el1.setNom("Element 1");
    el1.setType("Type 1");
    el2.setNom("Element 2");
    el2.setType("Type 2");
    myElements.push_back(el1);
    myElements.push_back(el2);
    // declaration of Repas objects
    Repas myRepas;
    myRepas.setNom("Repas 1");
    myRepas.setHeure(3);
    myRepas.setDescription("Description 1");
    myRepas.setElementsList(myElements);
    // declaration of Chat objects
    Chat tom;
    tom.setNom("Tom");
    tom.setGenre("male");
    tom.setAge(3);
    tom.setRepas(myRepas);
    tom.setType("blue");
    tom.sauter();
    // declaration of Chien objects
    Chien spike;
    spike.setNom("Spike");
    spike.setGenre("male");
    spike.setAge(5);
    spike.setTaille("4");
    list<Chien> chienList;
    chienList.push_back(spike);
    // declaration of entraineur objects
    Entraineur myEntraineur;
    myEntraineur.setNom("Johan");
    myEntraineur.setChienList(chienList);
    myEntraineur.setDescription("Excptional coach.");
    list<Entraineur> entraineurList;
    entraineurList.push_back(myEntraineur);
    spike.setEntraineurList(entraineurList);
    // declaration of compition objects
    Compitition firstCompitition;
    firstCompitition.setNom("LALIGA");
    firstCompitition.setDate("25/08/2021");
    firstCompitition.setChien(spike);
    firstCompitition.setEntraineur(myEntraineur);

    return 0;
}