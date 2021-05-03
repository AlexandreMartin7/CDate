//*****************************************************************************************************************************//
//Auteur : Alexandre Martin
//Date : 03/05/2021
//Fichier : CDate.cpp
//Code des méthodes de la classe CDate.
// Solution avec les opérateurs
//*****************************************************************************************************************************//

#include <time.h>
#include <iostream>
using namespace std;

#include "..\include\CDate.h"

CDate::CDate(int a, int m, int j, int h, int mn, int sec)
{
    //constructor
    this-> year = a;
    this-> month = m;
    this-> day = j;
    this-> hour = h;
    this-> minute = mn;
    this-> sec = sec;

}

    //destructor
CDate::~CDate()
{
    //dtor
}



    //bool operator
bool CDate::operator == (const CDate &d)
    {
    if((this->day==d.day)&&(this->month==d.month)&&(this->year==d.year)&&(this->sec==d.sec)&&(this->minute==d.minute)&&(this->sec==d.sec))
        {
            return true;
        }
        return false;
    }

bool CDate::operator < (const CDate &d)
    {
        if((*this) > d || (*this) ==d)
        {
            return false;
        }
        return true;
    }

bool CDate::operator > (const CDate &d)
    {
        bool resultat=false;

        resultat=((this->year>d.year)
                  ||((this->year==d.year)&&(this->month>d.month))
                  ||((this->year==d.year)&&(this->month==d.month)&&(this->day>d.day))
                  ||((this->year==d.year)&&(this->month==d.month)&&(this->day==d.day)&&(this->hour>d.hour))
                  ||((this->year==d.year)&&(this->month==d.month)&&(this->day==d.day)&&(this->hour==d.hour)&&(this->minute>d.minute))
                  ||((this->year==d.year)&&(this->month==d.month)&&(this->day==d.day)&&(this->hour==d.hour)&&(this->minute==d.minute)&&(this->sec>d.sec)));

        return resultat;
    }

void CDate::incrementerSec()
{
    bool bissextile = false;
    if((this->year%4==0 && this->year%100!=0) || this->year%400==0)
    {
        bissextile = true;
    }

    this->sec++;

    if(this->sec==60)
    {
        this->sec=0;
        this->minute++;

        if(this->minute==60)
        {
            this->minute=0;
            this->hour++;

            if(this->hour==24)
            {
                this->hour=0;
                this->day++;


                switch(this->month)
                {
                case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                    {
                        if(this->day==32)
                        {
                            this->day=1;
                            this->month++;
                        }
                    }break;

                case 4:case 6:case 9:case 11:
                    {
                        if(this->day==31)
                        {
                            this->day=1;
                            this->month++;
                        }
                    }break;


                case 2: //février
                    {
                        if(bissextile==false && this->day==29)
                        {
                            this->day=1;
                            this->month++;
                        }
                        if(bissextile==true && this->day==30)
                        {
                            this->day=1;
                            this->month++;
                        }
                    }break;
                }

                if(this->month==13)
                {
                    this->month=1;
                    this->year++;
                }
            }
        }
    }
}

