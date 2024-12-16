#include "Destination.h"

////////////////////////////////
///Non Parameterized constructor
////////////////////////////////
Destination::Destination() {}


////////////////////////////
///Parameterized constructor
////////////////////////////
Destination::Destination(string name,string departureFrom, int distance, int runwayLength) {
      this->name = name;
      this->departureFrom = departureFrom;
      this->distance = distance;
      this->runwayLength = runwayLength;
}

///////////////////////////////////////////////
///set and get function For Name Of Destination
///////////////////////////////////////////////
void Destination::setName(string name) {
    this->name = name;
}

string Destination::getName() {
    return this->name;
}


///////////////////////////////////////////////
///set and get function For Name Of Destination
///////////////////////////////////////////////
void Destination::setDepartureFrom(string departureFrom)
{
    this->departureFrom = departureFrom;
}

string Destination::getDepartureFrom() {
    return this->departureFrom;
}

////////////////////////////////////////////
///set and get function For Name Of Distance
////////////////////////////////////////////
void Destination::setDistance(int distance) {
    this->distance = distance;
}

int Destination::getDistance() {
    return this->distance;
}

/////////////////////////////////////////
///set and get function For RunwayLength
/////////////////////////////////////////
void Destination::setRunwayLength(int runwayLength) {
    this->runwayLength = runwayLength;
}

int Destination::getRunwayLength() {
    return this->runwayLength;
}

