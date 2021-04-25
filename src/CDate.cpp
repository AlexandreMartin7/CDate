#include "CDate.h"

CDate::CDate(int a, int m, int j, int h, int mn, int sec)
{
    //constructor
    this-> annee = a;
    this-> mois = m;
    this-> jour = j;
    this-> heure = h;
    this-> minute = mn;
    this-> seconde = sec;

}

    //destructor
CDate::~CDate()
{
    //dtor
}

    //bool operator
bool CDate::operator==(CDate d1)
{
    if(this->annee==this->annee && this->mois==this->mois && this->jour==this->jour && this->heure==this->heure && this->minute==this->minute && this->seconde==this->seconde)
        return true;
    else
        return false;
} // DOIT COMPORTER UNE ERREUR

bool CDate::operator<(CDate d1)
{
    if(this->annee<this->annee && this->mois<this->mois && this->jour<this->jour && this->heure<this->heure && this->minute<this->minute && this->seconde<this->seconde)
        return true;
    else
        return false;
} // DOIT COMPORTER UNE ERREUR

bool CDate::operator>(CDate d1)
{
    if(this->annee>this->annee && this->mois>this->mois && this->jour>this->jour && this->heure>this->heure && this->minute>this->minute && this->seconde>this->seconde);
} // DOIT COMPORTER UNE ERREUR
