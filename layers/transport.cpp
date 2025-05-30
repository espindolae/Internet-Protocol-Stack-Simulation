/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Implements the Transport layer functionality
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#include "transport.h"
#include <iostream>
 
std::string Transport::Send(const std::string& data) {
    std::string encapsulated = "TRANS_HDR|" + data;
    std::cout << "[Transport Layer] Sending: " << encapsulated << "\n";
    return encapsulated;
}
 
std::string Transport::Receive(const std::string& data) {
    std::cout << "[Transport Layer] Receiving: " << data << "\n";
 
    // Remove the transport header
    size_t pos = data.find('|');
    if (pos != std::string::npos) {
        return data.substr(pos + 1);
    }
    return data;
}