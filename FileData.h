#ifndef PLANE_TICKETS_FILEDATA_H
#define PLANE_TICKETS_FILEDATA_H
#include <iostream>
#include <fstream>
#include <cstring>
#include "PlaneClass.h"
#include "Plane.h"
#include "Destination.h"
#include "Flight.h"
#include "SearchFlight.h"

using namespace std;

/**
 * @class FileData
 * @brief This class is responsible for handling file operations related to plane ticket data, including
 *        reading and writing data to/from files, and serializing/deserializing objects.
 *
 * It manages data associated with a plane, destination, and flight. The class provides functionality to
 * write and read data from a file, as well as serialize and deserialize these objects for storage.
 *
 * @author Gergana Mahlelieva
 * @date 18.11.2024
 */

class FileData {
private:
    Plane plane;                 ///< Plane object that holds plane-related data
    Destination destination;     ///< Destination object that holds destination-related data
    Flight flight;               ///< Flight object that holds flight-related data
    fstream FILE;                ///< File stream object used to read/write data to/from a file
public:
    ///< Default Constructor
    FileData();

    ///< Parametrized Constructor
    FileData(Plane plane1, Destination destination1, Flight flight1);


    /**
    * @brief Writes the header to the csv file.
    */
    void WriteHeader();

    /**
    * @brief Writes the data of Plane, Destination, and Flight objects to the csv file.
    */
    void WriteData();

    /**
    * @brief Reads the header from the file.
    */
    void ReadHeader();


    /**
    * @brief Reads the data from the file and loads it into the Plane, Destination, and Flight objects.
    */
    void ReadData();

    /**
    * @brief Serializes the Plane, Destination, and Flight objects into a format suitable for storage.
    */
    void Serialize();

    /**
    * @brief Deserializes the stored data and populates the Plane, Destination, and Flight objects.
    */
    void Deserialize();
};


#endif //PLANE_TICKETS_FILEDATA_H
