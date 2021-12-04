
using namespace std;
#include <iostream>
#include <cstdlib>


float wurzel(float);

float wurzel(float Zahl)
{
    float Wert = 0;
    if (Zahl > 0)
    {
        Wert = 2;
        while (abs(Wert * Wert - Zahl) > 0.01)
        {
            Wert = Wert - ((Wert * Wert - Zahl) / (2 * Wert));
        }
    }
    return Wert;
}

int main()
{
    float Zahl = 0;

    cout << "Geben Sie Zahl ein:";
    cin >> Zahl;

    float Wert = wurzel(Zahl);

    cout << "Wurzel:" << Wert << endl;

    system("pause");
    return 0;
}

