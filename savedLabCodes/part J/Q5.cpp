#include <iostream>

// Base class
class AnalogFilter {
public:
    // Virtual functions
    virtual void computeFrequencyResponse() = 0;  // Pure virtual function
    virtual void filterCharacteristics() = 0;  // Pure virtual function
};

// Derived class 1
class Lowpass : public AnalogFilter {
private:
    double cutoffFrequency; 
public:
    Lowpass(double cutoff) : cutoffFrequency(cutoff) { }

    double getCutoffFrequency() {
        return cutoffFrequency;
    }
    
    void setCutoffFrequency(double newCutoff) {
        cutoffFrequency = newCutoff;
    }
    
    void computeFrequencyResponse() override {
        std::cout << "Computing frequency response for Lowpass filter with cutoff frequency: " << cutoffFrequency << "\n";
    }

    void filterCharacteristics() override {
        std::cout << "Lowpass filter characteristics:\n";
        std::cout << "Cutoff Frequency: " << cutoffFrequency << "\n";
    }
};

// Derived class 2
class Highpass : public AnalogFilter {
private:
    double cutoffFrequency; 
public:
    Highpass(double cutoff) : cutoffFrequency(cutoff) { }

    double getCutoffFrequency() {
        return cutoffFrequency;
    }
    
    void setCutoffFrequency(double newCutoff) {
        cutoffFrequency = newCutoff;
    }
    
    void computeFrequencyResponse() override {
        std::cout << "Computing frequency response for Highpass filter with cutoff frequency: " << cutoffFrequency << "\n";
        // we can add more lines here
    }

    void filterCharacteristics() override {
        std::cout << "Highpass filter characteristics:\n";
        std::cout << "Cutoff Frequency: " << cutoffFrequency << "\n";
        // we can add more lines here too
    }
};


// Derived class 3
class Bandpass : public AnalogFilter {
private:
    double lowerCutoffFrequency;
    double upperCutoffFrequency;
public:
    Bandpass(double lowerCutoff, double upperCutoff) 
        : lowerCutoffFrequency(lowerCutoff), upperCutoffFrequency(upperCutoff) { }

    double getLowerCutoffFrequency() {
        return lowerCutoffFrequency;
    }

    double getUpperCutoffFrequency() {
        return upperCutoffFrequency;
    }
    
    void setLowerCutoffFrequency(double newLowerCutoff) {
        lowerCutoffFrequency = newLowerCutoff;
    }

    void setUpperCutoffFrequency(double newUpperCutoff) {
        upperCutoffFrequency = newUpperCutoff;
    }
    
    void computeFrequencyResponse() override {
        std::cout << "Computing frequency response for Bandpass filter with lower cutoff frequency: " << lowerCutoffFrequency;
        std::cout << " and upper cutoff frequency: " << upperCutoffFrequency << "\n";
        // we can add more lines here
    }

    void filterCharacteristics() override {
        std::cout << "Bandpass filter characteristics:\n";
        std::cout << "Lower Cutoff Frequency: " << lowerCutoffFrequency << "\n";
        std::cout << "Upper Cutoff Frequency: " << upperCutoffFrequency << "\n";
        // we can add more lines here
    }
};

// Derived class 4
class Bandreject : public AnalogFilter {
    private:
    double cutoffFrequency; 
public:
    Bandreject(double cutoff) : cutoffFrequency(cutoff) { }

    double getCutoffFrequency() {
        return cutoffFrequency;
    }
    
    void setCutoffFrequency(double newCutoff) {
        cutoffFrequency = newCutoff;
    }
    
    void computeFrequencyResponse() override {
        std::cout << "Computing frequency response for BandReject filter with cutoff frequency: " << cutoffFrequency << "\n";
    }

    void filterCharacteristics() override {
        std::cout << "BandReject filter characteristics:\n";
        std::cout << "Cutoff Frequency: " << cutoffFrequency << "\n";
    }
};

// Derived class 5
class Allpass : public AnalogFilter {
    private:
    double cutoffFrequency; 
public:
    Allpass(double cutoff) : cutoffFrequency(cutoff) { }

    double getCutoffFrequency() {
        return cutoffFrequency;
    }
    
    void setCutoffFrequency(double newCutoff) {
        cutoffFrequency = newCutoff;
    }
    
    void computeFrequencyResponse() override {
        std::cout << "Computing frequency response for Allpass filter with cutoff frequency: " << cutoffFrequency << "\n";
    }

    void filterCharacteristics() override {
        std::cout << "Allpass filter characteristics:\n";
        std::cout << "Cutoff Frequency: " << cutoffFrequency << "\n";
    }
};

int main() {
    std::cout<<"\n\n";
    Highpass hp(5000); // Lowpass filter with cutoff frequency 10000 Hz
    hp.getCutoffFrequency();
    hp.computeFrequencyResponse();
    hp.filterCharacteristics(); 
    std::cout<<"\n\n";
    
    Lowpass lp(1000);  // Lowpass filter with cutoff frequency 1000 Hz
    lp.getCutoffFrequency();
    lp.computeFrequencyResponse();
    lp.filterCharacteristics();
    std::cout<<"\n\n";

    Bandpass bp(1000,5000);
    bp.getLowerCutoffFrequency();
    bp.getUpperCutoffFrequency();
    bp.computeFrequencyResponse();
    bp.filterCharacteristics();
    std::cout<<"\n\n";

    Bandreject br(2500);
    br.getCutoffFrequency();
    br.computeFrequencyResponse();
    br.filterCharacteristics();
    std::cout<<"\n\n";

    Allpass ap(3500);
    ap.getCutoffFrequency();
    ap.computeFrequencyResponse();
    ap.filterCharacteristics();
    std::cout<<"\n\n";

    return 0;




    return 0;
}
