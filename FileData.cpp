#include "FileData.h"

FileData::FileData() {};

FileData::FileData(Plane plane1, Destination destination1, Flight flight1)
{
    this->plane = plane1;
    this->destination = destination1;
    this->flight = flight1;
}

void FileData::Serialize()
{
    FILE.open("FlightData.csv",ios::in);
    fstream outfile;
    string line;

    if(!FILE.is_open())
    {
        cerr << "Error: File is empty or unreadable.\n";
    }

    outfile.open("FlightData.bin",ios::out  | ios::binary );

    if(!outfile.is_open())
    {
        cerr << "Error: outfile is empty.\n";
    }

    // Read header and write to binary file
    if (std::getline(FILE, line)) {
        outfile.write(line.c_str(), line.size());
        outfile.put('\n');  // Ensure the newline character is added after the header
    }

    // Read data lines and write to binary file
    while (std::getline(FILE, line)) {
        outfile.write(line.c_str(), line.size());
        outfile.put('\n');  // Ensure the newline character is added after each line
    }


    FILE.close();
    outfile.close();

}

void FileData::Deserialize()
{
    fstream outfile,binfile;
    string headerText;
    char dataText[256];

    binfile.open("FlightData.bin",ios::in | ios::binary);
    outfile.open("NEWFlightData.csv",ios::app);

    if(!binfile.is_open())
    {
        cerr << "Error: File is empty or unreadable.\n";
    }


    if(!outfile.is_open())
    {
        cerr << "Error: outfile is empty.\n";
    }

    ///represent the number of characters
    streamsize bytesRead;

    // Read the binary data and write to the new CSV file
    while ((bytesRead = binfile.read(dataText, sizeof(dataText)).gcount()) > 0) {
        outfile.write(dataText, bytesRead);  // Write the chunk to the new CSV file
    }

    binfile.close();
    outfile.close();

}

void FileData::WriteHeader()
{
    FILE.open("FlightData.csv", ios::app);

    if(FILE.is_open()) {
        FILE << "Plane ID, Airline, Plane Manufacturer,Plane Model,Plane MINRunwayLength,Plane PersonnelCost, Plane FuelCapacity,"
                "Plane AverageSpeed, Plane MAXDistance,Destination Name, Destination Distance, Flight number" << endl;
        FILE.close();
    }else{
        cerr << "Error: Could not open the file for writing Header.\n";
    }
}

void FileData::WriteData()
{
    FILE.open("FlightData.csv", ios::app);


    if(FILE.is_open()) {

        FILE << this->plane.getId() << "  ,  " <<this->plane.getAirline() << " , "<< this->plane.getManufacturer() << "  ,  " << this->plane.getModel()
             << "   ,  " << this->plane.getPlaneInfoRunwayLength() << "  ,  " << this->plane.getPersonnelCost()
             << "  ,  " << this->plane.getFuelCapacity() << "  ,  " << this->plane.getAverageSpeed()
             << "  ,  " << this->plane.getMaxDistance() << "  ,  " << this->destination.getName() << "  ,  "
             << this->destination.getDistance() << "  ,  " << this->flight.getFlightNumber()
             << endl;

        FILE.close();
    }else{
        cerr << "Error: Could not open the file for writing.\n";
    }

    Serialize();

}

void FileData::ReadHeader()
{
    Deserialize();
    FILE.open("NEWFlightData.csv",ios::in);

    string text;

    if(!FILE.is_open())
    {
        cerr << "Error: Could not open the file for reading.\n";
    }

    if (getline(FILE, text)) { // Read the first line (header)
        cout << text << " , ";
    } else {
        cerr << "Error: File is empty or unreadable.\n";
    }
    cout << endl;

    FILE.close();
}

void FileData::ReadData()
{
    FILE.open("NEWFlightData.csv",ios::in);

    string text;

    if(!FILE.is_open())
    {
        cerr << "Error: Could not open the file for reading.\n";
    }

    if(getline(FILE, text))
    {
        text = " ";
    }else {
        cerr << "Error: File is empty or unreadable.\n";
    }


    while(getline(FILE,text))
    {
        cout<< text << endl;
    }

    FILE.close();

}

