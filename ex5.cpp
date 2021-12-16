#include <iostream>
#include <iterator>
#include <set>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;
// function to search for the element and return 1 or 0 depending on the result of the search
int recherche(int element, set<int> s1)
{
    int t = 0;
    if (s1.count(element))
        return t = 1;
    else
        return t;
}

// method by passing begin and end
int recherche1(int element, set<int>::iterator begin, set<int>::iterator end)
{
    int t1 = 0;
    for (set<int>::iterator setIterator = begin; setIterator != end; setIterator++)
    {
        if (*setIterator == element)
        {
            return t1 = 1;
        }
    }
    return t1;
}

// method template
template <typename Iterable, typename element, typename Iterator, typename Begin, typename End>
int recherche3(Iterable field, Iterator iterator, element target, Begin begin, End end)
{
    int t2 = 0;
    for (
        iterator = begin;
        iterator != end;
        iterator++)
    {
        if (*iterator == target)
        {
            return t2 = 1;
        }
    }
    return t2;
}

int main()
{
    // empty set container
    set<int> s1;
    set<int>::iterator it;
    int i, valeur;
    // insert values in the container
    for (i = 1; i < 101; ++i)
    {
        s1.insert(i);
    }
    // element to search
    cout << "entrer la valeur de l'element a cherche"
         << "\t";
    cin >> valeur;

    // check if the function find the element
    cout << "first method" << endl;
    if (recherche(valeur, s1) == 1)
        cout << "element existe\n"
             << endl;

    else
        cout << "element not existe\n"
             << endl;
    // using second method
    cout << "second method" << endl;
    if (recherche1(valeur, s1.begin(), s1.end()) == 1)
        cout << "element existe\n"
             << endl;
    else
        cout << "element not existe\n"
             << endl;

    // using template method
    cout << "template method" << endl;
    if (recherche3(s1, it, valeur, s1.begin(), s1.end()) == 1)
    {
        cout << "element existe\n"
             << endl;
    }
    else
    {
        cout << "element not existe\n"
             << endl;
    }

    // template method using vector string
    cout << "template method using vector string\n";
    vector<string> vec1 = {"hello"};
    vector<string>::iterator vectorIterator;
    if (recherche3(vec1, vectorIterator, "hello", vec1.begin(), vec1.end()))
    {
        cout << "hello existe\n"
             << endl;
    }
    else
    {
        cout << "hello not existe\n"
             << endl;
    }

    // template method using int list
    cout << "template method using int list\n";
    list<int> list1;
    list<int>::iterator it1;
    // inserting values from 1 to 100.
    for (int i = 1; i < 101; i++)
    {
        list1.push_back(i);
    }
    if (recherche3(list1, it1, valeur, list1.begin(), list1.end()) == 1)
    {
        cout << "element existe\n"
             << endl;
    }
    else
    {
        cout << "element not existe\n"
             << endl;
    }

    // template method using float array
    cout << "template method using float array\n";
    float Table[100];
    float *TableIterator = Table;
    for (int i = 1; i < 101; i++)
    {
        Table[i - 1] = i;
    }
    if (recherche3(Table, TableIterator, valeur, &Table[0], &Table[100]) == 1)
    {
        cout << "element existe\n"
             << endl;
    }
    else
    {
        cout << "element not existe\n"
             << endl;
    }

    return 0;
}