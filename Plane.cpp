#include "Plane.h"

////////////////////////////////
///Non Parameterized constructor
////////////////////////////////
Plane::Plane() {}


////////////////////////////
///Parameterized constructor
////////////////////////////
Plane::Plane(string id,string airline,double ticketPerPerson,PlaneInfo planeInfo1) {
    this->id = id;
    this->airline = airline;
    this->ticketPerPerson = ticketPerPerson;
    this->planeInfo = planeInfo1;
}

////////////////////////////////
///set and get function Plane ID
////////////////////////////////
void Plane::setId(string id) {
    this->id = id;
}

////////////////////////////////
///set and get function Airline
////////////////////////////////
string Plane::getId() {
    return this->id;
}

void Plane::setAirline(string airline)
{
    this->airline = airline;
}

string Plane::getAirline()
{
    return this->airline;
}

/////////////////////////////////////////
///set and get function Ticket Per Person
/////////////////////////////////////////
void Plane::setTicketPerPerson(double ticketPerPerson) {
    this->ticketPerPerson = ticketPerPerson;
}

double Plane::getTicketPerPerson() {
    return this->ticketPerPerson;
}

//////////////////////////////////////////////
///Function return From planeInfo RunwayLength
//////////////////////////////////////////////
int Plane::getPlaneInfoRunwayLength()
{
   return this->planeInfo.getMinRunwayLength();
}


//////////////////////////////////////////////
/////Function return From planeInfo FuelPerKM
//////////////////////////////////////////////
double Plane::getPlaneInfoFuelPerKM() {
    return this->planeInfo.getFuelPerKmPerSeat();
}


////////////////////////////////////////////////
///Function return From planeInfo PersonnelCost
///////////////////////////////////////////////
double Plane::getPersonnelCost() {
    return this->planeInfo.getPersonnelCost();
}

///////////////////////////////////////////////
///Function return From planeInfo AverageSpeed
//////////////////////////////////////////////
int Plane::getAverageSpeed() {
    return this->planeInfo.getAverageSpeed();
}


///////////////////////////////////////////////
///Function return From planeInfo MAX Distance
//////////////////////////////////////////////
double Plane::getMaxDistance() {
    return this->planeInfo.getMaxDistance();
}

///////////////////////////////////////////////
///Function return From planeInfo Manufacturer
//////////////////////////////////////////////
string Plane::getManufacturer() {
    return this->planeInfo.getManufacturer();
}

///////////////////////////////////////////////
///Function return From planeInfo Model
//////////////////////////////////////////////
string Plane::getModel() {
    return this->planeInfo.getModel();
}

///////////////////////////////////////////////
///Function return From planeInfo Fuel Capacity
//////////////////////////////////////////////
int Plane::getFuelCapacity() {
    return this->planeInfo.getFuelCapacity();
}


////////////////////////////////////
///Function return vector of planes
////////////////////////////////////
vector<Plane> Plane::flightManger(int planeCount)
{
    vector<Plane> planes;
    string id, manufacturer, model,airline;
    int seatCount,minRunwayLength,fuelCapacity,averageSpeed,max_distance;
    double personnelCost, fuelConsumptionPerKmPerSeat,ticketPerPerson;

    for(int i = 0; i < planeCount;i++)
    {
        cout << "Plane ID:";
        cin >> id;

        cout << "Plane Ticket Per Person:";
        cin >> ticketPerPerson;

        cout << "Plane Airline:";
        cin >> airline;

        cout << "Plane Manufacturer:";
        cin >> manufacturer;

        cout << "Plane Model:";
        cin >> model;

        cout << "Plane SeatCount:";
        cin >> seatCount;

        cout << "Plane MinRunwayLength:";
        cin >> minRunwayLength;

        cout << "Plane Fuel Capacity:";
        cin >> fuelCapacity;

        cout << "Plane Average Speed:";
        cin >> averageSpeed;

        cout << "Plane Max Distance:";
        cin >> max_distance;

        cout << "Plane Personnel Cost:";
        cin >> personnelCost;

        cout << "Plane Fuel Per KM:";
        cin >> fuelConsumptionPerKmPerSeat;

        PlaneInfo planeInfo1(manufacturer,model,seatCount,minRunwayLength,personnelCost,fuelConsumptionPerKmPerSeat,fuelCapacity,averageSpeed,max_distance);
       ///add in the end of vector without avoiding unnecessary copies
        planes.emplace_back(id,airline,ticketPerPerson,planeInfo1);
    }
    return planes;

}
