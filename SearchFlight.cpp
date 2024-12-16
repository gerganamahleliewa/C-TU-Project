#include "SearchFlight.h"

SearchFlight::SearchFlight() {}

SearchFlight::SearchFlight(Plane plane1, Destination destination1, Flight flight1)
{
     this->plane = plane1;
     this->destination = destination1;
     this->flight = flight1;
}

int SearchFlight::is_available_destination(string departureFrom, string airline)
{
    if((airline.compare(this->plane.getAirline())) == 0 && (departureFrom.compare(this->destination.getDepartureFrom()) == 0)) {
        if (this->plane.getPlaneInfoRunwayLength() < this->destination.getRunwayLength() &&
            this->plane.getMaxDistance() >= this->destination.getDistance()) {
            cout << "This Flight is possible with " << this->plane.getManufacturer() << " to destination "
                 << this->destination.getName() << "." << endl;
            return AVAILABLE;
        } else {
            cout << "This Flight is NOT possible with " << this->plane.getManufacturer() << " to destination "
                 << this->destination.getName() << "." << endl;
            return NOT_AVAILABLE;
        }
    }else
    {
        cout << "Not such flight from " << departureFrom << " to " << this->destination.getName() << "." << endl;
    }

}


///////////////////////////////
///Return Best Plane To FLight
///////////////////////////////
Plane SearchFlight::findBestFlight(vector<Plane> planes)
{
    Plane bestPlane = planes[0];

    for(auto plane:planes)
    {
        if(plane.getMaxDistance() >= this->destination.getDistance() && plane.getFuelCapacity() > bestPlane.getFuelCapacity() && plane.getTicketPerPerson() < bestPlane.getTicketPerPerson())
        {
            bestPlane = plane;
            cout << "Best Plane for this destination is with Id:" << plane.getId() << " and cost:" << plane.getTicketPerPerson() << endl;
        }
    }
    return bestPlane;
}
