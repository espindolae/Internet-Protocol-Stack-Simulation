/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Implements the Network layer functionality
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#include "network.h"
#include <iostream>
 
std::string Network::Send(const std::string& data) {
    std::string encapsulated = "NET_HDR|" + data;
    std::cout << "[Network Layer] Sending: " << encapsulated << "\n";
    return encapsulated;
}
 
std::string Network::Receive(const std::string& data) {
    std::cout << "[Network Layer] Receiving: " << data << "\n";
 
    // Remove the network header
    size_t pos = data.find('|');
    if (pos != std::string::npos) {
        return data.substr(pos + 1);
    }
    return data;
}