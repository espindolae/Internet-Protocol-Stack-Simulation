/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Defines the Transport layer class interface. 
 *  This layer is responsible for handling data transfer logic 
 *  and simulating the addition and removal of a transport 
 *  header during communication
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#ifndef TRANSPORT_H
#define TRANSPORT_H
 
#include <string>
 
class Transport {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};
 
#endif