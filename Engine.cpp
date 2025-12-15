#include<iostream>
#include <string>
#include "Engine.h"
using namespace std;
Engine::Engine(int hp, const string& t): horsepower(hp), Fueltype(t), isRunning(false) {
    isRunning = false;
    cout << "Engine created with " << horsepower << " HP and fuel type: " << Fueltype << endl;
}
int Engine::getHorsepower() const {
    return horsepower;
}
string Engine::getFuelType() const {
    return Fueltype;
}
bool Engine::getIsRunning() const {
    return isRunning;
}
void Engine::start(){
    if(!isRunning) {
        isRunning = true;
        cout << "Engine started." << endl;
    } else {
        cout << "Engine is already running." << endl;
    }
}
void Engine::stop(){
    if(isRunning) {
        isRunning = false;
        cout << "Engine stopped." << endl;
    } else {
        cout << "Engine is already stopped." << endl;
    }
}