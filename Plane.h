#ifndef PLANE_TICKETS_PLANE_H
#define PLANE_TICKETS_PLANE_H
#include <iostream>
#include <vector>
#include "PlaneClass.h"

using namespace std;

/**
 * @file Plane.h
 * @brief Declaration of the Plane class for managing airplane and ticket information.
 *
 * This file contains the declaration of the Plane class, which handles details
 * about a specific plane, including its identifier, associated airline, ticket price,
 * and technical specifications via the PlaneInfo class. It also provides functionality
 * to manage flights and access various attributes.
 *
 * @author Gergana Mahlelieva
 * @date 17.11.2024
 */


class Plane{
private:
    string id;                   ///< The unique identifier for the plane.
    string airline;              ///< The name of the airline associated with the plane.
    double ticketPerPerson;      ///< The ticket price per passenger.
    PlaneInfo planeInfo;         ///< Technical specifications of the plane (PlaneInfo object).
public:

    ///< Default Constructor
    Plane();

    ///< Parametrized Constructor
    Plane(string id,string airline,double ticketPerPerson, PlaneInfo planeInfo1);


    ///< Get and Set function
    void setId(string id);
    string getId();

    void setAirline(string airline);
    string getAirline();

    void setTicketPerPerson(double ticketPerPerson);
    double getTicketPerPerson();

    int getPlaneInfoRunwayLength();
    double getPlaneInfoFuelPerKM();
    double getPersonnelCost();
    int getAverageSpeed();
    double getMaxDistance();
    string getManufacturer();
    string getModel();
    int getFuelCapacity();


    /**
    * @brief Generates a list of planes for flight management.
    * @param planeCount The number of planes to manage.
    * @return A vector containing Plane objects.
    */
    vector<Plane> flightManger(int planeCount);

    /**
    * @brief Overloads the insertion (<<) operator to output Plane details.
    *
    * Formats and outputs the details of a Plane object, including its ID, ticket price,
    * and technical specifications (via the PlaneInfo object).
    *
    * @param os The output stream to which the Plane details are written.
    * @param plane The Plane object whose details are to be printed.
    * @return The output stream containing the formatted Plane details.
    */
    friend ostream& operator<<( ostream& os,const Plane& plane)
    {
        os << "Plane Id:" << plane.id << endl;
        os << "Airline:" << plane.airline << endl;
        os << "Price for Ticket Per Person:" << plane.ticketPerPerson << endl;
        cout << plane.planeInfo;

        return os;
    }


};


#endif //PLANE_TICKETS_PLANE_H
