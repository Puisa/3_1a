#include "std_lib_inc.h"

double durchschnittBerechnen (vector <double> eingabe)
{
    // if (eingabe.empty())
    //  {
    //  return 0.0;
    //  }

    double summe = 0.0;
    for (double temperatur : eingabe)
    {
        summe += temperatur;
    }
    return summe / eingabe.size();
}

int main()
{
    vector <double> temperaturen = {};
    double temperatur = 0.0;
    cin >> temperatur;

    while(cin)
    {
        temperaturen.push_back(temperatur);
        cin >> temperatur;
    }

    // Durchschnittstemperatur berechnen
    double durchschnittstemperatur = durchschnittBerechnen(temperaturen);
    cout << "Die Durchschnittstemperatur ist " << durchschnittstemperatur << '\n';
    return 0;
}