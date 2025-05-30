/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Defines the Link layer class interface. 
 *  Handles the final layer of encapsulation during sending
 *  and the first layer of decapsulation during receiving
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#ifndef LINK_H
#define LINK_H
 
#include <string>
 
class Link {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};
 
#endif