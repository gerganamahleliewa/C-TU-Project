#ifndef PLANE_TICKETS_PLANECLASS_H
#define PLANE_TICKETS_PLANECLASS_H
#include <iostream>

using namespace std;

/**
 * @class PlaneInfo
 * @brief Represents detailed specifications of an airplane.
 *
 * The PlaneInfo class stores and manages data related to an airplane's manufacturer,
 * model, seat capacity, fuel consumption, operational requirements, and other details.
 * It provides getter and setter methods for each attribute and supports formatted
 * output through an overloaded insertion (`<<`) operator.
 *
 * @author Gergana Mahlelieva
 * @date 17.11.2024
 */


class PlaneInfo{
private:
    string manufacturer;                  ///< The name of the plane's manufacturer
    string model;                        ///< The model of the plane
    int seatCount;                       ///< The seating capacity of the plane.
    int minRunwayLength;                 ///< The minimum runway length (in meters) for takeoff/landing.
    double personnelCost;                ///< The cost of personnel per flight (in dollars).
    double fuelConsumptionPerKmPerSeat;  ///< The fuel consumption per kilometer per seat (in liters).
    int fuelCapacity;                    ///< The fuel capacity of the plane (in liters).s
    int averageSpeed;                    ///< The average speed of the plane (in km/h).
    int max_distance;                    ///< The maximum flight distance the plane can travel (in km).
public:

    ///< Parametrized Constructor
    PlaneInfo(string manufacturer, string model, int seatCount, int minRunwayLength,  double personnelCost,
              double fuelConsumptionPerKmPerSeat,int fuelCapacity,int averageSpeed, int max_distance);

    ///< Default Constructor
    PlaneInfo();

    ///< Getter and Setter functions
    void setManufacturer(string manufacturer);
    string getManufacturer();

    void setModel(string model);
    string getModel();

    void setMinRunwayLength(int minRunwayLength);
    int getMinRunwayLength();

    void setSeatCount(int seatCount);
    int getSeatCount();

    void setPersonnelCost(double personnelCost);
    double getPersonnelCost();

    void setFuelPerKmPerSeat(double fuelConsumptionPerKmPerSeat);
    double getFuelPerKmPerSeat();

    void setFuelCapacity(int fuelCapacity);
    int getFuelCapacity();

    void setAverageSpeed(int averageSpeed);
    int getAverageSpeed();

    void setMaxDistance(int max_distance);
    int getMaxDistance();



    /**
    * @brief Overloads the insertion (<<) operator for PlaneInfo objects.
    *
    * This function formats and outputs the details of a PlaneInfo object, including
    * its manufacturer, model, seat count, fuel consumption, and other attributes.
    *
    * @param os The output stream to which the data will be written.
    * @param planeInfo The PlaneInfo object whose details are to be printed.
    * @return The output stream containing the formatted PlaneInfo details.
 */
    friend ostream& operator<<(ostream& os, PlaneInfo planeInfo)
    {
        os << "Manufacturer: " << planeInfo.getManufacturer() << endl;
        os << "Model: " << planeInfo.getModel() << endl;
        os << "Count of seats: " << planeInfo.getSeatCount() << endl;
        os << "Runway Length: " << planeInfo.getMinRunwayLength() << endl;
        os << "Personnel Cost: " << planeInfo.getPersonnelCost() << endl;
        os << "Fuel per Km: " << planeInfo.getFuelPerKmPerSeat() << endl;
        os << "Fuel Capacity: " << planeInfo.getFuelCapacity() << endl;
        os << "Average Speed: " << planeInfo.getAverageSpeed() << "km" << endl;

        return os;
    }
};
#endif //PLANE_TICKETS_PLANECLASS_H
