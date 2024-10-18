#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <bitset>

using namespace std;


unsigned char calculateChecksum(const string& data) {
    unsigned int sum = 0;


    for (size_t i = 0; i < data.length(); i += 8) {

        bitset<8> bits(data.substr(i, 8));
        sum += bits.to_ulong();
    }


    while (sum >> 8) {
        sum = (sum & 0xFF) + (sum >> 8);
    }


    return static_cast<unsigned char>(~sum);
}


void introduceError(string& data) {
    int randomIndex = rand() % data.length();
    data[randomIndex] = (data[randomIndex] == '0') ? '1' : '0';
    cout << "Error introduced at index " << randomIndex << ": " << data << endl;
}


bool validateData(const string& data, unsigned char checksum) {
    unsigned char calculatedChecksum = calculateChecksum(data);
    return calculatedChecksum == checksum;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));


    string data;

    cout << "Enter binary data (only 0s and 1s, multiple of 8 bits): ";
    cin >> data;

    // Validate the input data
    if (data.find_first_not_of("01") != string::npos || data.length() % 8 != 0) {
        cout << "Invalid input. Please enter only binary data in multiples of 8 bits." << endl;
        return 1;
    }


    unsigned char checksum = calculateChecksum(data);
    cout << "Original Data: " << data << endl;
    cout << "Checksum: " << bitset<8>(checksum) << endl;


    introduceError(data);
    cout << "Data after introducing an error: " << data << endl;


    if (validateData(data, checksum)) {
        cout << "No errors detected in the received data." << endl;
    } else {
        cout << "Error detected in the received data!" << endl;
    }

    return 0;
}
