/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Defines the Application layer class interface 
 *  for sending and receiving data.
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>

class Application {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};

#endif