//
// Haydin Davis
// 4/3
// Temperatures
// COSC 1030
//
#include <iostream>
#include <iomanip>  

using namespace std;

typedef double TemperatureArray[50];

double calculateAverageTemp(const TemperatureArray temps, int numTemp) {
    
    double sum = 0.0;
    for (int i = 0; i < numTemp; ++i) {
        sum = sum + temps[i];
    }
    
    return sum / numTemp;
}

double findHighestTemp(const TemperatureArray temps, int numTemp) {
    
    double highest = temps[0];
    
    for (int i = 1; i < numTemp; ++i) {
        if (temps[i] > highest) {
            highest = temps[i];
        }
    }
    
    return highest;
}

double findLowestTemp(const TemperatureArray temps, int numTemp) {

    double lowest = temps[0];
    
    for (int i = 1; i < numTemp; ++i) {
        if (temps[i] < lowest) {
            lowest = temps[i];
        }
    }
    
    return lowest;
}



int main() {

    int numTemps;

    cout << "Please input the number of temperatures to be read"<<endl;
    cin >> numTemps;

    TemperatureArray temperatures;

    for (int i = 0; i < numTemps; ++i) {
        cout << "Input temerature " << i + 1 << ": "<<endl;
        cin >> temperatures[i];
    }

    double average = calculateAverageTemp(temperatures, numTemps);
    
    cout << "\nThe average temperature is " <<fixed << setprecision(2) << average << endl;

    double highest = findHighestTemp(temperatures, numTemps);
    
    cout << "The highest temperature is " << highest << endl;

    double lowest = findLowestTemp(temperatures, numTemps);
    
    cout << "The lowest temperature is " << lowest << std::endl;

    return 0;
}
