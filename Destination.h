#ifndef PLANE_TICKETS_DESTINATION_H
#define PLANE_TICKETS_DESTINATION_H
#include <iostream>

using namespace std;

/**
 * @class Destination
 * @brief This class represents a flight destination with details about the destination's name, departure location,
 *        distance, and runway length at the destination airport. It provides setter and getter methods for each
 *        property and an overloaded stream insertion operator to print destination details.
 *
 * The class allows you to set and retrieve the name, departure location, distance, and runway length of the destination.
 * It also includes a method to print the details of the destination using the stream insertion operator.
 *
 * @author Gergana Mahlelieva
 * @date 17.11.2024
 */

class Destination {
private:
    string name;               ///< The name of the destination
    string departureFrom;     ///< The location where the flight departs from (e.g., airport or city)
    int distance;             ///< The distance from the departure point to the destination (in kilometers or miles)
    int runwayLength;         ///< The length of the runway at the destination airport (in meters or feet)

public:

    ///< Parametrized Constructor
    Destination(string name, string departureFrom, int distance, int runwayLength);

    ///< Default Constructor
    Destination();


    ///< Getter and Setter functions
    void setName(string name);
    string getName();

    void setDepartureFrom(string departureFrom);
    string getDepartureFrom();

    void setDistance(int distance);
    int getDistance();

    void setRunwayLength(int runwayLength);
    int getRunwayLength();


    /**
     * @brief Stream insertion operator overload for printing the destination details.
     *
     * @param os The output stream to write the details to.
     * @param destination The destination object whose details will be printed.
     * @return The output stream with the destination details.
     */
    friend ostream& operator<<( ostream& os, Destination destination)
    {
        os << "Destination Name:" << destination.name << endl;
        os << "Departure From:" << destination.departureFrom << endl;
        os << "Distance:" << destination.distance << endl;
        os << "RunwayLength:" << destination.runwayLength << endl;

        return os;
    }

};


#endif //PLANE_TICKETS_DESTINATION_H
