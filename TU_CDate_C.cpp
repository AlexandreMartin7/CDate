//********************************************************
// Auteur : MP Pinaud
// date : 25/04/2021
// fichier: TU_CDate.cpp
// Programme de test unitaire de la classe CDate
// Difficulté C
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
int jourDansLeMois(int a, int m );

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
// Rôle :	permet de saisir les informations d'une date
// Paramètres de sortie : le jour, mois, année, secondes, minutes, heures saisies
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
// Rôle :	affiche la date passée en paramètre
// Paramètre d'entrée : la date à afficher
//***************************************************************
void afficherDate (CDate &d)
{
cout << d.getDay() << "/" << d.getMonth() << "/" << d.getYear() << endl;    // Affichage de la date sous la forme jour/mois/annee
cout << d.getHour() << "h" << d.getMinute() << " et " << d.getSec() << "secs" << endl; // Affichage de l'heure


}


//**************************************************************
// Fonction:test_constructeur
// Rôle :	teste le constructeur et affiche la date  à l'aide des méthodes d'accès
//***************************************************************

void test_constructeur()
{
	int j, m, a,s,mn,h;
	cout << "-----------------------------------------------" << endl;
	cout << "Test du constructeur de la classe CDate:" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Saisir la date utilisee pour tester" << endl;

    saisirDate(j,m,a,s,mn,h);
    CDate today(a,m,j,h,mn,s); // Création de la date
    cout << "Vous avez entré la date suivante:" << endl;
    afficherDate(today); // Affichage de la date sous la forme jour/mois/annee

}

//**************************************************************
// Fonction:test_constructeur
// Rôle :	teste le constructeur sans paramètre de la classe CDate
//***************************************************************

void test_constructeurSansParametre()
{
    cout << "-----------------------------------------------" << endl;
	cout << "Test du constructeur sans parametre de la classe CDate:" << endl;
	cout << "-------------------------------------------------------" << endl;

	// Création de la date
	// A COMPLETER


	// Affichage de la date sous la forme jour/mois/annee
	// A COMPLETER

}

//**************************************************************
// Fonction:test_egal
// Rôle :	teste de l'opérateur == de la classe CDate
//***************************************************************
void test_egal()
{
	int j, m, a,s,mn,h;
    cout << "-----------------------------------------------" << endl;
	cout << "Test de la methode isEqual de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

    CDate today1(a,m,j,h,mn,s); // Création de la 1ère date


	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today2(a,m,j,h,mn,s); // Création de la 2ème date


	// Comparer les deux dates avec == et afficher le résultat de la comparaison
	if (today1 == today2)
        cout << "Les deux dates sont egales" << endl;
    else
        cout << "Les deux dates sont differentes" << endl;

}
// NE FONCTIONNE PAS (semble comparer la première date à elle-même)

//**************************************************************
// Fonction:test_sup
// Rôle :	teste de l'opérateur >  de la classe CDate
//***************************************************************

void test_sup()
{
	int j, m, a,s,mn,h;
	cout << "--------------------------------------------" << endl;
	cout << "Test de la methode isLater  de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today1(a,m,j,h,mn,s);// Création de la 1ère date


	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today2(a,m,j,h,mn,s);// Création de la 2ème date


	// Comparer les deux dates avec > et afficher le résultat de la comparaison
	if (today1 > today2)
        cout << "La première date est plus récente que la deuxième" << endl;
    else
        cout << "La deuxième date est plus récente que la première" << endl;
}

//**************************************************************
// Fonction:test_inf
// Rôle :	teste l'opérateur < de la classe CDate
//***************************************************************

void test_inf()
{
	int j, m, a,s,mn,h;
	cout << "Test de la méthode isEarlier de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today1(a,m,j,h,mn,s);// Création de la 1ère date



	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	CDate today2(a,m,j,h,mn,s);// Création de la 2ème date


	// Comparer les deux dates avec > et afficher le résultat de la comparaison
	if (today1<today2)
        cout << "La deuxième date est plus récente que la première" << endl;
    else
        cout << "La première date est plus récente que la deuxième" << endl;
}


//**************************************************************
// Fonction:test_incrementerSec
// Rôle :	teste la la méthode incrémenterSec de la classe CDate
//***************************************************************
void test_incrementerSec()
{
	int j, m, a, h, mn, s;
	cout << "Test de la méthode incrementerSec de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;


    saisirDate(j,m,a,s,mn,h);
	// Création de la date
	CDate today(j,m,a,s,mn,h);

	cout << "Combien de secondes voulez-vous ajouter ? :";
	int nbSec;
	cin >>nbSec;

	for(int i = 0; i<nbSec; i++)
        today.incrementerSec();

	afficherDate(today);
}

//**************************************************************
// Fonction:anneeBissextile
// Rôle :	verifie si une année est bissextile
// Paramètre d'entrée : l'année à tester
// Valeur de retour : true si l'année est bissextile, false sinon
//***************************************************************
bool anneeBisextile(int a){
    bool bissextile = false;
    if((a%4==0 && a%100!=0) || a%400==0)
    {
        bissextile = true;
    }

    return bissextile;

}




