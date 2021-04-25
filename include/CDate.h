#ifndef CDATE_H
#define CDATE_H


class CDate
{
    public:
        CDate(int a, int m, int j, int h, int mn, int sec);
        virtual ~CDate();

        int getDate(int& a, int& m, int& j, int& h, int& mn, int& sec);
        int todayAn() {return annee;};
        int todayMois() {return mois;};
        int todayJr() {return jour;};
        int todayHr() {return heure;};
        int todayMn() {return minute;};
        int todaySc() {return seconde;};

        void ajtsec();

        bool operator>(CDate d1);
        bool operator<(CDate d1);
        bool operator==(CDate d1);

    protected:

    private:
        int annee;
        int mois;
        int jour;
        int heure;
        int minute;
        int seconde;

};

#endif // CDATE_H
