#ifndef PLANE_TICKETS_SEARCHFLIGHT_H
#define PLANE_TICKETS_SEARCHFLIGHT_H
#include <iostream>
#include <vector>
#include "Plane.h"
#include "Destination.h"
#include "Flight.h"
#define AVAILABLE 0
#define NOT_AVAILABLE -1

using namespace std;

/**
 * @class SearchFlight
 * @brief This class provides functionality to search for flights based on availability and the best matching plane.
 *
 * The `SearchFlight` class helps to check if a flight is available for a specific destination and airline.
 * It also allows for finding the best flight from a list of planes based on certain criteria.
 *
 * @author Gergana Mahlelieva
 * @date 18.11.2024
 */

class SearchFlight {
private:
    Plane plane;               ///< The Plane object associated with this search
    Destination destination;  ///< The Destination object associated with this search
    Flight flight;            ///< The Flight object associated with this search
public:
    ///< Default Constructor
    SearchFlight();

    ///< Parametrized Constructor
    SearchFlight(Plane plane1,Destination destination1,Flight flight1);

    /**
    * @brief Checks if a flight is available based on the departure location and airline.
    *
    * This method checks if the destination and airline are available in the current data set.
    * Also check RunwayLength and Max Distance of plane.
    *
    * @param departureFrom The location from which the flight departs.
    * @param airline The airline for which availability is being checked.
    * @return Returns `AVAILABLE` (0) if the flight is available, `NOT_AVAILABLE` (-1) otherwise.
    */
    int is_available_destination(string departureFrom, string airline);

    /**
    * @brief Finds the best flight from a list of planes based on certain criteria.
    *
    * This method compares multiple planes and returns the best option according to the criteria
    * of price of tickets, distance and fuel.
    *
    * @param planes A vector of `Plane` objects to search through.
    * @return Returns the best `Plane` object based on the defined criteria.
    */
    Plane findBestFlight(vector<Plane> planes);

};


#endif //PLANE_TICKETS_SEARCHFLIGHT_H
