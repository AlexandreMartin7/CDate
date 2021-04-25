//********************************************************
// Auteur : MP Pinaud
// date : 19/03/2021
// fichier: TU_CDate.cpp
// Programme de test unitaire de la classe CDate
// Difficult� C
//********************************************************
#include <iostream>
using namespace std;
#include "include/CDate.h"



void test_constructeur();
void test_egal();
void test_constructeurSansParametre();
void test_sup();
void test_inf();
void test_incrementerSec();
void saisirDate(int &j, int &m, int &a, int &s, int &mn, int &h);
void afficherDate(CDate &d);

int main ()
{

	int rep;
	do
	{
		cout << "Test de la classe CDate" << endl;
		cout << "**************************" << endl<< endl;

		cout << "Quelle methode voulez-vous tester ?" << endl;
		cout << "1 - Constructeur " << endl;
		cout << "2 - operateur ==" << endl;
		cout << "3 - Constructeur sans parametre" << endl;
		cout << "4 - operateur >" << endl;
		cout << "5 - operateur <" << endl;
		cout << "6 - incrementerSec" << endl;
		cout << "0 - Sortie du test de la classe CDate" <<endl;

		cin >> rep;

		switch (rep)
		{

			case 1 :	test_constructeur();
						break;

			case 2 :	test_egal();
						break;

            case 3 :	test_constructeurSansParametre();
						break;

			case 4 :	test_sup();
						break;

			case 5 :	test_inf();
						break;

            case 6:     test_incrementerSec();
						break;

			case 0 :	{
					cout << "Fin du test de la classe CDate" <<endl;
					cout << "*********************************" << endl;
							break;
						}
			default :	cout << "Erreur de saisie" <<endl;
						break;
		}
		cout << endl << endl;
	} while (rep != 0);

	return 0;
}

//**************************************************************
// Fonction:saisirDate
// R�le :	permet de saisir les informations d'une date
// Param�tres de sortie : le jour, mois, ann�e, secondes, minutes, heures saisies
//***************************************************************
void saisirDate(int &j, int &m, int &a, int &s, int &mn, int &h)
{
    cout << "Saisir les informations de la date a creer" << endl;
	cout << "jour :";
	cin >>j;
	cout << "mois :";
	cin >>m;
	cout << "annee :";
	cin >>a;
	cout << "heure :";
	cin >>h;
	cout << "minutes :";
	cin >>mn;
	cout << "secondes :";
	cin >>s;

}
//**************************************************************
// Fonction:afficherDate
// R�le :	affiche la date pass�e en param�tre
// Param�tre d'entr�e : la date � afficher
//***************************************************************
void afficherDate (CDate &d)
{
cout << d.todayJr() << "/" << d.todayMois() << "/" << d.todayAn() << endl;    // Affichage de la date sous la forme jour/mois/annee
cout << d.todayHr() << "h" << d.todayMn() << " et " << d.todaySc() << "secs" << endl; // Affichage de l'heure


}


//**************************************************************
// Fonction:test_constructeur
// R�le :	teste le constructeur et affiche la date  � l'aide des m�thodes d'acc�s
//***************************************************************

void test_constructeur()
{
	int j, m, a,s,mn,h;
	cout << "-----------------------------------------------" << endl;
	cout << "Test du constructeur de la classe CDate:" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Saisir la date utilisee pour tester" << endl;

    saisirDate(j,m,a,s,mn,h);
    CDate today(a,m,j,h,mn,s); // Cr�ation de la date
    cout << "Vous avez entr� la date suivante:" << endl;
    afficherDate(today); // Affichage de la date sous la forme jour/mois/annee

}

//**************************************************************
// Fonction:test_constructeur
// R�le :	teste le constructeur sans param�tre de la classe CDate
//***************************************************************

void test_constructeurSansParametre()
{
    cout << "-----------------------------------------------" << endl;
	cout << "Test du constructeur sans parametre de la classe CDate:" << endl;
	cout << "-------------------------------------------------------" << endl;

	// Cr�ation de la date
	// A COMPLETER


	// Affichage de la date sous la forme jour/mois/annee
	// A COMPLETER

}

//**************************************************************
// Fonction:test_egal
// R�le :	teste de l'op�rateur == de la classe CDate
//***************************************************************
void test_egal()
{
	int j, m, a,s,mn,h;
    cout << "-----------------------------------------------" << endl;
	cout << "Test de la methode isEqual de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

    CDate today1(a,m,j,h,mn,s); // Cr�ation de la 1�re date


	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today2(a,m,j,h,mn,s); // Cr�ation de la 2�me date


	// Comparer les deux dates avec == et afficher le r�sultat de la comparaison
	if (today1 == today2)
        cout << "Les deux dates sont egales" << endl;
    else
        cout << "Les deux dates sont differentes" << endl;

}
// NE FONCTIONNE PAS (semble comparer la premi�re date � elle-m�me)

//**************************************************************
// Fonction:test_sup
// R�le :	teste de l'op�rateur >  de la classe CDate
//***************************************************************

void test_sup()
{
	int j, m, a,s,mn,h;
	cout << "--------------------------------------------" << endl;
	cout << "Test de la methode isLater  de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today1(a,m,j,h,mn,s);// Cr�ation de la 1�re date


	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today2(a,m,j,h,mn,s);// Cr�ation de la 2�me date


	// Comparer les deux dates avec > et afficher le r�sultat de la comparaison
	if (today1 > today2)
        cout << "La premi�re date est plus r�cente que la deuxi�me" << endl;
    else
        cout << "La deuxi�me date est plus r�cente que la premi�re" << endl;
}
// NE FONCTIONNE PAS

//**************************************************************
// Fonction:test_inf
// R�le :	teste l'op�rateur < de la classe CDate
//***************************************************************

void test_inf()
{
	int j, m, a,s,mn,h;
	cout << "Test de la m�thode isEarlier de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today1(a,m,j,h,mn,s);// Cr�ation de la 1�re date



	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today2(a,m,j,h,mn,s);// Cr�ation de la 2�me date


	// Comparer les deux dates avec > et afficher le r�sultat de la comparaison
	if (today1<today2)
        cout << "La deuxi�me date est plus r�cente que la premi�re" << endl;
    else
        cout << "La premi�re date est plus r�cente que la deuxi�me" << endl;
}
// NE FONCTIONNE PAS


//**************************************************************
// Fonction:test_incrementerSec
// R�le :	teste la la m�thode incr�menterSec de la classe CDate
//***************************************************************
void test_incrementerSec()
{
	int j, m, a, h, mn, s;
	cout << "Test de la m�thode incrementerSec de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;








}
