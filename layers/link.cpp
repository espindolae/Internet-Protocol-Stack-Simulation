#include "link.h"
#include <iostream>
 
std::string Link::Send(const std::string& data) {
    std::string encapsulated = "LINK_HDR|" + data;
    std::cout << "[Link Layer] Sending: " << encapsulated << "\n";
    return encapsulated;
}
 
std::string Link::Receive(const std::string& data) {
    std::cout << "[Link Layer] Receiving: " << data << "\n";
 
    // Find and remove "LINK_HDR|"
    size_t pos = data.find('|');
    if (pos != std::string::npos) {
        return data.substr(pos + 1);
    }
    return data; // Fallback in case no header found
}