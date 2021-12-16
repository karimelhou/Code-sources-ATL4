#include<iostream>
#include <ctime>
#include <time.h>
#include <string>
#include<iomanip>

using namespace std;

//declaration de la fonction 
void date(string date){
    cout<<"date is " << date.substr(0,2) <<"/" <<date.substr(2,2) << "/" << date.substr(4,4) <<endl;
    cout<<"time is " <<date.substr(8,2) <<"h" <<date.substr(10,2) <<endl;
}


int main(){
    //declaration de la chaine de caractere date 
    string datef;
    cout<<"enter date \n"<<endl;
    cin>>datef;

    date(datef);

}