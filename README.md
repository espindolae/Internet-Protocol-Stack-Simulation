# Internet-Protocol-Stack-Simulation
C++ simulation of the Internet protocol stack focusing on four core layers

The simulation will demonstrate encapsulation during data transmission and decapsulation during reception, using simple headers at each layer and terminal output to show layer-by-layer data flow.

## Project Structure
```text
network_sim/
├── main.cpp
├── layers/
│   ├── application.h / .cpp
│   ├── transport.h / .cpp
│   ├── network.h / .cpp
│   └── link.h / .cpp
└── .vscode/
    └── tasks.json
