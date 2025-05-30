/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Defines the Network layer class interface. 
 *  This layer is responsible for managing logical addressing 
 *  and simulating the addition and removal of a network header 
 *  during message transmission
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#ifndef NETWORK_H
#define NETWORK_H
 
#include <string>
 
class Network {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};
 
#endif