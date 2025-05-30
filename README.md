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
```

## File Descriptions

- **main.cpp**: Entry point of the simulation. It coordinates the sending and receiving process through all layers, simulating encapsulation and decapsulation.

- **layers/application.h / application.cpp**: Declares and implements the Application layer. Adds `APP_HDR|` during sending and removes it during receiving.

- **layers/transport.h / transport.cpp**: Declares and implements the Transport layer. Adds `TRANS_HDR|` during sending and removes it during receiving.

- **layers/network.h / network.cpp**: Declares and implements the Network layer. Adds `NET_HDR|` during sending and removes it during receiving.

- **layers/link.h / link.cpp**: Declares and implements the Link layer. Adds `LINK_HDR|` during sending and removes it during receiving.

- **.vscode/tasks.json**: VS Code task configuration file that builds and runs the project automatically using the terminal.

## Run Instructions

1. Open the `Internet-Protocol-Stack-Simulation` folder in **VS Code**.
2. Ensure `.vscode/tasks.json` is present.
3. Press **Ctrl + Shift + B** (or **Cmd + Shift + B** on Mac) to run the build task.
4. The simulation will compile and execute, showing encapsulation and decapsulation in the terminal output.

## Sample Output

```
Message sent: Hello, Network!

==== Sending ====
[Application Layer] Sending: Hello, Network!
[Transport Layer] Sending: TRANS_HDR|APP_HDR|Hello, Network!
[Network Layer] Sending: NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
[Link Layer] Sending: LINK_HDR|NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!

==== Receiving ====
[Link Layer] Receiving: LINK_HDR|NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
[Network Layer] Receiving: NET_HDR|TRANS_HDR|APP_HDR|Hello, Network!
[Transport Layer] Receiving: TRANS_HDR|APP_HDR|Hello, Network!
[Application Layer] Receiving: APP_HDR|Hello, Network!

Final message received: Hello, Network!
```

## Author

CSC4750 Group Project — Eva Espindola, Alex Nguyen, Kendrick Bynum
