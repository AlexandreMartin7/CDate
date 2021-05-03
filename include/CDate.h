#ifndef CDATE_H
#define CDATE_H


class CDate
{
    public:
    //***************************************************************
	// m�thode :constructeur
	// r�le:initialise les attributs jour,mois,annee de la date cr��e
	// param�tres d'entr�e:
	//				j: valeur du jour
	//				m: valeur du mois
	//				a: valeur de l'ann�e
	//              sec : secondes
	//              mn : minutes
	//              h : heure
	// Objet courant : Sortie
	//***************************************************************
        CDate(int a, int m, int j, int h, int mn, int sec);
        CDate();

        int getDate(int& a, int& m, int& j, int& h, int& mn, int& sec);
        int getYear() {return year;};
        int getMonth() {return month;};
        int getDay() {return day;};
        int getHour() {return hour;};
        int getMinute() {return minute;};
        int getSec() {return sec;};

        void ajtsec();

        bool operator > (const CDate &d);
        bool operator < (const CDate &d);
        bool operator == (const CDate &d);

    //***********************************************************************
    // m�thode: incrementerSec
    // r�le: ajoute 1 seconde � la date courante
    // Objet courant : Entr�e/Sortie
    //************************************************************************
        void incrementerSec ();

    //***************************************************************
	// m�thode :destructeur
	//***************************************************************
        ~CDate();

    private:
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int sec;

};

#endif // CDATE_H
