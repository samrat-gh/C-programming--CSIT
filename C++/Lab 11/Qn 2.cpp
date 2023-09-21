//(2) Write a program using exception handling in which an object type is thrown. 

#include <iostream>
using namespace std;

class Distance {
private:
    int kilometers;
    float meters;

public:
    class ConvertException {
    public:
        int convertedKilometers;
        float convertedMeters;

        ConvertException(int km, float m) : convertedKilometers(km), convertedMeters(m) {}
    };

    Distance() : kilometers(0), meters(0.0) {}

    void setData() {
        cout << "Kilometers: ";
        cin >> kilometers;
        cout << "Meters: ";
        cin >> meters;
        if (meters > 1000) {
            throw ConvertException(kilometers, meters);
        }
    }

    void showData() {
        cout << "Kilometers: " << kilometers << endl;
        cout << "Meters: " << meters << endl;
    }
};

int main() {
    try {
        Distance distance;
        cout << "Enter Distance:" << endl;
        distance.setData();
        distance.showData();
    }
    catch (Distance::ConvertException exception) {
        cout << endl << "Meters greater than 1000" << endl;
        cout << "After converting:" << endl;
        int extraKilometers = exception.convertedMeters / 1000;
        exception.convertedMeters -= extraKilometers * 1000;
        exception.convertedKilometers += extraKilometers;
        cout << "Kilometers: " << exception.convertedKilometers << endl;
        cout << "Meters: " << exception.convertedMeters << endl;
    }

    return 0;
}

