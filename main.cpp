/** Title: : Internet Protocol Stack Simulation Assignment
 *  Class: CSC475
 *  Purpose: Simulates sending and receiving data 
 *  through the Internet protocol stack
 *  Authors: Eva Espindola, Alex Nguyen, Kendrick Bynum
 *  Date: May 24th, 2025
 */

#include <iostream>
#include <string>
#include "layers/application.h"
#include "layers/transport.h"
#include "layers/network.h"
#include "layers/link.h"

int main() {
    // Instantiate each layer
    Application app;
    Transport trans;
    Network net;
    Link link;
 
    // Original message
    std::string message = "Hello, Network!";
    std::cout << "Message sent: " << message << "\n";
 
    // Encapsulation (Sending)
    std::cout << "\n==== Sending ====\n";
    std::string data = app.Send(message);
    data = trans.Send(data);
    data = net.Send(data);
    data = link.Send(data);
 
    // Decapsulation (Receiving)
    std::cout << "\n==== Receiving ====\n";
    data = link.Receive(data);
    data = net.Receive(data);
    data = trans.Receive(data);
    data = app.Receive(data);
 
    // Final output
    std::cout << "\nFinal message received: " << data << "\n";
 
    return 0;
    
}
