//(2) Create a class named Person and record the data of 5 people in a file. Then, retrieve the 
//written data and display information of only those people who are 30 yrs or older.

#include <iostream>
#include <fstream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {}
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void getData() {
        if (age >= 30) {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "-------------------" << endl;
        }
    }
};

int main() {
    Person P[5];
    ofstream opfile("data.txt", ios::binary);

    int i, age;
    string name;

    for (i = 0; i < 5; i++) {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        P[i] = Person(name, age);
        opfile.write((char*)&P[i], sizeof(P[i]));
    }
    opfile.close();

    ifstream ipfile("data.txt", ios::binary);

    cout << "People over 30 years old:" << endl;
    for (i = 0; i < 5; i++) {
        ipfile.read((char*)&P[i], sizeof(P[i]));
        P[i].getData();
    }

    ipfile.close();

    return 0;
}

