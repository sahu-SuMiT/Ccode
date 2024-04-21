#include <iostream>
#include <string>
using namespace std;

// Base class
class Publication {
protected:
    std::string title;
    float price;
public:
    virtual void getData() {
        std::cout << "Enter title: "; std::cin >> title;
        std::cout << "Enter price: "; std::cin >> price;
    }
    virtual void putData() const {
        std::cout << "Title: " << title << ", Price: " << price;
    }
};

// Derived class 1
class Book : public Publication {
private:
    int pageCount;
public:
    void getData() override{
        Publication::getData();
        std::cout << "Enter page count: "; std::cin >> pageCount;
    }
    void putData() const override {
        Publication::putData();
        std::cout << ", Page count: " << pageCount << std::endl;
    }
};

// Derived class 2
class Tape : public Publication {
private:
    float playTime;
public:
    void getData() override {
        Publication::getData();
        std::cout << "Enter play time: "; std::cin >> playTime;
    }
    void putData() const override {
        Publication::putData();
        std::cout << ", Play time: " << playTime << std::endl;
    }
};

int main() {
    Book myBook;
    Tape myTape;

    std::cout << "Enter data for book:\n";
    myBook.getData();

    std::cout << "\nEnter data for tape:\n";
    myTape.getData();

    std::cout << "\nData on book:\n";
    myBook.putData();

    std::cout << "\nData on tape:\n";
    myTape.putData();

    return 0;
}
