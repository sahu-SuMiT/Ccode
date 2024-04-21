#include <iostream>
#include <cmath>
using namespace std;
const int pi=3.1415;

class Component {
protected:
    string name;
    double value;
    string type;
public:
    Component(string n, double v, string t) : name(n), value(v), type(t) {}
};

class Resistor : public Component {
public:
    Resistor(double resistance) : Component("Resistor", resistance, "Ohm") {}
};

class Capacitor : public Component {
public:
    Capacitor(double capacitance) : Component("Capacitor", capacitance, "Farad") {}
};

class Inductor : public Component {
public:
    Inductor(double inductance) : Component("Inductor", inductance, "Henry") {}
};

class SeriesRLC : public Resistor, public Capacitor, public Inductor {
    double frequency;
public:
    SeriesRLC(double r, double c, double l, double f)
        : Resistor(r), Capacitor(c), Inductor(l), frequency(f) {}

    double calculateImpedance() {
        double XL = 2 * pi * frequency * Inductor::value;  // Inductive reactance
        double XC = 1 / (2 * pi * frequency * Capacitor::value);  // Capacitive reactance
        return sqrt(Resistor::value*Resistor::value +(XL - XC)*(XL-XC));  // Impedance
    }

    double calculateBandwidth() {
        return Resistor::value / (2 * pi * Inductor::value);  // Bandwidth=R/L
    }

    double calculateResonantFrequency() {
        return 1 / (2 * M_PI * sqrt(Inductor::value * Capacitor::value));  // Resonant frequency=1/2pi*sqrt(LC)
    }
};

int main() {
    //Enter resistance, capacitance, Inductance and frequency
    SeriesRLC circuit(100, 0.001, 0.01, 50);
    cout << "Impedance: " << circuit.calculateImpedance() << " Ohm" << endl;
    cout << "Bandwidth: " << circuit.calculateBandwidth() << " Hz" << endl;
    cout << "Resonant Frequency: " << circuit.calculateResonantFrequency() << " Hz" << endl;
    return 0;
}
