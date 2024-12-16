#include "PlaneClass.h"

////////////////////////////
///Parameterized constructor
////////////////////////////
PlaneInfo::PlaneInfo(string manufacturer, string model, int seatCount, int minRunwayLength,  double personnelCost,
                     double fuelConsumptionPerKmPerSeat,int fuelCapacity,int averageSpeed, int max_distance) {
        this->manufacturer = manufacturer;
        this->model = model;
        this->seatCount = seatCount;
        this->minRunwayLength = minRunwayLength;
        this->personnelCost = personnelCost;
        this->fuelConsumptionPerKmPerSeat = fuelConsumptionPerKmPerSeat;
        this->fuelCapacity = fuelCapacity;
        this->averageSpeed = averageSpeed;
        this->max_distance = max_distance;
}


////////////////////////////////
///Non Parameterized constructor
////////////////////////////////
PlaneInfo::PlaneInfo() {}


///////////////////////////////////////////
///set and get function Plane Manufacturer
///////////////////////////////////////////
void PlaneInfo::setManufacturer(string manufacturer){
    this->manufacturer = manufacturer;
}

string PlaneInfo::getManufacturer() {
    return this->manufacturer;
}


///////////////////////////////////
///set and get function Plane Model
///////////////////////////////////
void PlaneInfo::setModel(string model) {
    this->model = model;
}

string PlaneInfo::getModel() {
    return this->model;
}

///////////////////////////////////////
///set and get function Plane SeatCount
///////////////////////////////////////
void PlaneInfo::setSeatCount(int seatCount)
{
       this->seatCount = seatCount;
}

int PlaneInfo::getSeatCount()
{
   return this->seatCount;
}

/////////////////////////////////////////////////
///set and get function for Plane MinRunwayLength
/////////////////////////////////////////////////
void PlaneInfo::setMinRunwayLength(int minRunwayLength)
{
    this->minRunwayLength = minRunwayLength;
}

int PlaneInfo::getMinRunwayLength()
{
    return this->minRunwayLength;
}

///////////////////////////////////////////////
///set and get function for Plane PersonnelCost
///////////////////////////////////////////////
void PlaneInfo::setPersonnelCost(double personnelCost)
{
    this->personnelCost = personnelCost;
}

double PlaneInfo::getPersonnelCost()
{
    return this->personnelCost;
}

////////////////////////////////////////////////////////////
///set and get function for Plane fuelConsumptionPerKmPerSeat
////////////////////////////////////////////////////////////
void PlaneInfo::setFuelPerKmPerSeat(double fuelPerKmPerSeat)
{
    this->fuelConsumptionPerKmPerSeat = fuelPerKmPerSeat;
}

double PlaneInfo::getFuelPerKmPerSeat()
{
    return this->fuelConsumptionPerKmPerSeat;
}

//////////////////////////////////////////////
///set and get function for Plane fuelCapacity
//////////////////////////////////////////////
void PlaneInfo::setFuelCapacity(int fuelCapacity)
{
    this->fuelCapacity = fuelCapacity;
}

int PlaneInfo::getFuelCapacity()
{
    return this->fuelCapacity;
}

//////////////////////////////////////////////
///set and get function for Plane AverageSpeed
//////////////////////////////////////////////
void PlaneInfo::setAverageSpeed(int averageSpeed)
{
    this->averageSpeed = averageSpeed;
}

int PlaneInfo::getAverageSpeed()
{
    return this->averageSpeed;
}

//////////////////////////////////////////////
///set and get function for Plane MAX Distance
//////////////////////////////////////////////
void PlaneInfo::setMaxDistance(int max_distance)
{
    this->max_distance = max_distance;
}

int PlaneInfo::getMaxDistance()
{
    return this->max_distance;
}
