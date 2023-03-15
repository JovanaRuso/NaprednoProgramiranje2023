#include <iostream>
using namespace std;

enum Month { January, February, March, April, May, June, July, August, September, October, November, December };

int main() {
    // Print all months in a year
    for (int i = January; i <= December; i++) {
        cout << i << ". " << Month(i) << endl;
    }

    // Get input month from user
    int input_month;
    cout << "Enter a month (1-12): ";
    cin >> input_month;

    // Determine time of the year and month by order
    switch (input_month) {
        case January:
        case February:
        case December:
            cout << "It's winter, the " << input_month << " month of the year." << endl;
            break;
        case March:
        case April:
        case May:
            cout << "It's spring, the " << input_month << " month of the year." << endl;
            break;
        case June:
        case July:
        case August:
            cout << "It's summer, the " << input_month << " month of the year." << endl;
            break;
        case September:
        case October:
        case November:
            cout << "It's fall, the " << input_month << " month of the year." << endl;
            break;
        default:
            cout << "Invalid input. Please enter a month between 1 and 12." << endl;
    }

    return 0;
}
/* Programata preku enumeracija gi pretstavuva mesecite vo godinata i na sekoj mesec mu se dodeluva numericka vrednost pocnuvajki od
0 za januari i zavrsuvajki so 11 za dekemvri. So switch se odreduva godisnoto vreme i redot na vneseniot mesec vo godinata*/