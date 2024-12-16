#include "Flight.h"


////////////////////////////////
///Non Parameterized constructor
////////////////////////////////
Flight::Flight() {}

////////////////////////////
///Parameterized constructor
////////////////////////////
Flight::Flight(string flightNumber,Plane plane1, Destination destination1) {
    this->flightNumber = flightNumber;
    this->plane = plane1;
    this->destination = destination1;
}


////////////////////////////////////
///set and get function FlightNumber
////////////////////////////////////
void Flight::setFlightNumber(string flightNumber) {
    this->flightNumber = flightNumber;
}

string Flight::getFlightNumber() {
    return this->flightNumber;
}

////////////////////////////////////
///Check is flight Compatible or NOT
////////////////////////////////////
int Flight::isCompatible() {

    if(this->destination.getRunwayLength() >= this->plane.getPlaneInfoRunwayLength() )
    {
        return IS_COMPATIBLE;
    }else{
        return IS_NOT_COMPATIBLE;
    }
}


///////////////////////////////
///Return how much cost flight
///////////////////////////////
double Flight::calculateFlightCost() {

       int distance = this->destination.getDistance();
       double personSalary = this->plane.getPersonnelCost();
       double FuelPerKM = this->plane.getPlaneInfoFuelPerKM();

       double fuelCost = ((FuelPerKM * distance) / distance) * 100 ;
       double totalCost = fuelCost + personSalary;

       return totalCost;
}


//////////////////////////////
///Return Duration For Flight
//////////////////////////////
double Flight::calculateFlightDuration() {
    int averageSpeed = this->plane.getAverageSpeed();
    int distance = this->destination.getDistance();
    double totalDuration;

    if(averageSpeed <= 200 || distance < 100)
    {
        throw invalid_argument("Average speed must be greater than 200.");
    }

    totalDuration = (double) (distance / averageSpeed);

    return totalDuration;
}
