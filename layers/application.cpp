/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Implements the Application layer logic
 *  including encapsulation by adding during sending 
 *  and decapsulation during receiving
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#include "application.h"
#include <iostream>

std::string Application::Send(const std::string& data) {
    std::cout << "[Application Layer] Sending: " << data << "\n";
    return "APP_HDR|" + data;
}

std::string Application::Receive(const std::string& data) {
    std::cout << "[Application Layer] Receiving: " << data << "\n";
    size_t pos = data.find('|');
    return (pos != std::string::npos) ? data.substr(pos + 1) : data;
}