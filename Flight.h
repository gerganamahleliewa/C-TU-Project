#ifndef PLANE_TICKETS_FLIGHT_H
#define PLANE_TICKETS_FLIGHT_H
#include <iostream>
#include <vector>
#include "Plane.h"
#include "Destination.h"
#define IS_COMPATIBLE 0
#define IS_NOT_COMPATIBLE -1

using namespace std;

/**
 * @file Flight.h
 * @brief Declaration of the Flight class to represent an airplane flight.
 *
 * This file contains the declaration of the Flight class, which models an airplane flight
 * with its flight number, associated plane, and destination. It includes methods for
 * determining flight compatibility, calculating costs, and estimating flight durations.
 *
 * @author Gergana Mahlelieva
 * @date 17.11.2024
 */

class Flight {
    private:
        string flightNumber;            ///< The unique identifier for the flight.
        Plane plane;                    ///< The Plane object associated with the flight.
        Destination destination;        ///< The Destination object representing the flight's endpoint.
    public:

    Flight();      ///< Default Constructor

    Flight(string flightNumber,Plane plane1, Destination destination1);    ///< Parametrized Constructor

    ///< Get and Set function
    void setFlightNumber(string flightNumber);
    string getFlightNumber();


    /**
    * @brief Checks whether the flight is compatible.
    *
    * This method verifies whether the plane and destination are compatible, such as
    * whether the plane's minimum runway length is supported by the destination's runway.
    *
    * @return An integer value:
    *         - `IS_COMPATIBLE` (0) if the flight is compatible.
    *         - `IS_NOT_COMPATIBLE` (-1) if the flight is not compatible.
    */
    int isCompatible();

    /**
    * @brief Calculates the cost of the flight.
    *
    * The cost of the flight is determined based on factors such as personnel cost,
    * fuel consumption, distance to the destination, and ticket price per person.
    *
    * @return The total cost of the flight as a double.
    */
    double calculateFlightCost();

    /**
    * @brief Calculates the estimated duration of the flight.
    *
    * The duration is calculated based on the distance to the destination and the
    * average speed of the associated plane.
    *
    * @return The estimated flight duration in hours as a double.
    */
    double calculateFlightDuration();


    /**
    * @brief Overloads the insertion (<<) operator to output Flight details.
    *
    * Formats and outputs the details of a Flight object, including the flight number,
    * associated plane details, and destination details.
    *
    * @param os The output stream to which the Flight details are written.
    * @param flight The Flight object whose details are to be printed.
    * @return The output stream containing the formatted Flight details.
    */
    friend ostream& operator<<(ostream& os, Flight flight) {
        os << "Flight Number: " << flight.flightNumber << endl;
        os << flight.plane;
        os << flight.destination;
        return os;
    }

};


#endif //PLANE_TICKETS_FLIGHT_H
