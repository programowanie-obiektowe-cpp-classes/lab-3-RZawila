#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int total_towar = 0; // na pocz¹tku nic nie przewieŸliœmy
    int sail_counter = 0; //licznik ¿aglowców

    Stocznia stocznia{}; // postawienie stoczni

    while(total_towar<towar)
    {
        Statek* ship = stocznia(); // tworau randomowy statek

        if(dynamic_cast <Zaglowiec*>(ship))// sprawdzenie typu obiektu ship
        {
           // std::cout<<"ship jest zaglowcem"<<"\n";// do testow programu
            ++sail_counter;// inkrementacja liczby zaglowcow
        }
        if(dynamic_cast <Tankowiec*>(ship))// sprawdzenie typu obiektu ship
        {
           // std::cout<<"ship jest tankowcem"<<"\n";// do testow programu

        }



        total_towar += ship->transportuj(); //przewozi towar
        //std::cout<<"Transported "<< total_towar<<" of "<<towar<<"\n";


        delete ship;// niszczy statek
    }




    return sail_counter;// zwraca ilosc zaglowców
}
