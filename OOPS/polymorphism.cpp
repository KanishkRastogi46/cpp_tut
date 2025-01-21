#include<iostream>
#include<string>
using namespace std;

// car class
class Car{

    string vehicleType= "4 wheeler";
    string brand;
    string model;
    friend class SuperCar;

public:
    Car(): brand("Mahindra") , model("Thar") {};
    Car(const string & brand, const string & model): brand(brand) , model(model) {};
    Car(const Car & car): brand(car.brand) , model(car.model) {};
    virtual void run();

};
void Car::run(){
    cout << brand << " " << model << " runs on 4 wheels" << endl;
}

// supercar class
class SuperCar: public Car{

protected:
    string engine;

public:
    SuperCar(const string & brand, const string & model, const string & engine): Car(brand, model), engine(engine) {};
    SuperCar(const SuperCar & supcar): Car(supcar), engine(supcar.engine) {};
    void run(const string & speed);

};
void SuperCar::run(const string & speed){
    cout << "Top speed of " << brand << " " << model << " with " << engine << " is " << speed << endl;
};


int main(){
    SuperCar car1("Tata", "Nexon", "4-cylinder");
    car1.run("150 kmph");
    SuperCar car2(car1);
    car2.run("160 kmph");

    // can't change the value of brand and model attributes outside the class as they are private members
    // car2.brand= "Mahindra";
    // car2.model= "Thar";

    Car * car;
    car= &car1;
    car->run();

    return 0;
}