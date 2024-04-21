#include <iostream>
using namespace std;

// Base class
class IntegratedCircuit {
public:
    virtual void powerConsumption() = 0; 
    virtual void pinConfiguration() = 0;
};

// Derived class 1
class Microcontroller : public IntegratedCircuit {
    double voltage;
    double current;
public:
    void powerConsumption() override {
        std::cout << "Microcontroller power consumption calculation.\n";
        cout<<"Enter Microcontorller Current and Voltage rating: ";cin>>current>>voltage;
        cout<<"POWER:"<<current*voltage<<endl;
        
    }
    void pinConfiguration() override {
        std::cout << "Microcontroller pin configuration.\n";
    }
};

// Derived class 2
class OperationalAmplifier : public IntegratedCircuit {
    double voltage;
    double current;
public:
    void powerConsumption() override {
        std::cout << "Operational Amplifier power consumption calculation.\n";
        cout<<"Enter Microcontorller Current and Voltage rating: ";cin>>current>>voltage;
        cout<<"POWER:"<<current*voltage<<endl;
    }
    void pinConfiguration() override {
        std::cout << "Operational Amplifier pin configuration.\n";
    }
};

// Derived class 3
class DigitalSignalProcessor : public IntegratedCircuit {
    double voltage;
    double current;
public:
    void powerConsumption() override {
        std::cout << "Digital Signal Processor power consumption calculation.\n";
        cout<<"Enter Microcontorller Current and Voltage rating: ";cin>>current>>voltage;
        cout<<"POWER:"<<current*voltage<<endl;
    }
    void pinConfiguration() override {
        std::cout << "Digital Signal Processor pin configuration.\n";
    }
};

int main() {
    Microcontroller mc;
    OperationalAmplifier opamp;
    DigitalSignalProcessor dsp;

    mc.powerConsumption();
    mc.pinConfiguration();

    opamp.powerConsumption();
    opamp.pinConfiguration();

    dsp.powerConsumption();
    dsp.pinConfiguration();

    return 0;
}
