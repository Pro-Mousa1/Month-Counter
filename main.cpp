#include <iostream>
using namespace std;
int main() {
    int month;
    cout <<"Enter month number\n";
    cin>>month;
    switch (month) {
        case 1:
            cout<<"JANUARY\n";
            cout<<"First month of the year";
            break;
        case 2:
            cout<<"FEBRUARY\n";
            cout<<"Second month of the year";
            break;
        case 3:
            cout<<"MARCH\n";
            cout<<"Third month of the year";
            break;
        case 4:
            cout<<"APRIL\n";
            cout<<"Fourth month of the year";
            break;
        case 5:
            cout<<"MAY\n";
            cout<<"Fifth month of the year";
            break;
        case 6:
            cout<<"JUNE\n";
            cout<<"Sixth month of the year";
            break;
        case 7:
            cout<<"JULY\n";
            cout<<"Seventh month of the year";
            break;
        case 8:
            cout<<"AUGUST\n";
            cout<<"Eighth month of the year";
            break;
        case 9:
            cout<<"SEPTEMBER\n";
            cout<<"Ninth month of the year";
            break;
        case 10:
            cout<<"OCTOBER\n";
            cout<<"Tenth month of the year";
            break;
        case 11:
            cout<<"NOVEMBER\n";
            cout<<"Eleventh month of the year";
            break;
        case 12:
            cout<<"DECEMBER\n";
            cout<<"Last month of the year";
            break;
        default:
            cout<<"Invalid input. We only have 12 months in a year.";
    }
}
