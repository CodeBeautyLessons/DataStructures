#include <iostream>

using namespace std;

int main()
{
    float month1 = 100;
    float month2 = 200;
    float month3 = 1300;
    float month4 = 0;
    float month5 = 200;
    float month6 = 250;

    float total = month1 + month2 + month3 + month4 + month5 + month6;
    float average = total / 6;
    float inTwoYears = average * 24;

    cout << "total: " << total << endl;
    cout << "average: " << average << endl;
    cout << "in two years: " << inTwoYears << endl;

    float months[6];// = { month1, month2, month3, month4, month5, month6 };
    months[0] = month1;
    months[1] = month2;
    months[2] = month3;
    months[3] = month4;
    months[4] = month5;
    months[5] = month6;

    total = months[0] + months[1] + months[2] + months[3] + months[4] + months[5];

    cout << "Enter amount: ";
    cin >> months[0] >> months[1] >> months[2] >> months[3] >> months[4] >> months[5];

    total = 0;
    for (size_t i = 0; i < sizeof(months) / sizeof(months[0]); i++)
    {
        cout << "Enter amount for element " << i++ << ":" << endl;
        cin >> months[i];
        total += months[i];
    }

    int size;
    cin >> size;
    //float runtimeSizeNotAllowed[size];

    return 0;
}
