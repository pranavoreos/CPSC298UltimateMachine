//
//  main.cpp
//  UltimateMachine
//
//  Created by Pranav Saravanan.
//

#include <iostream>

class CUltimateMachine {
public:
  // Constructor
  CUltimateMachine() {
    std::cout << "CUltimateMachine constructed" << std::endl;
  }

  // Destructor
  ~CUltimateMachine() {
    std::cout << "CUltimateMachine destructed" << std::endl;
  }

  // Displays the state of the Ultimate Machine
  void displayState() {
    std::cout << "The Ultimate Machine is currently " << (m_bState ? "On" : "Off") << std::endl;
  }

  // Toggles the On/Off switch of the Ultimate Machine
  void turnOn() {
    m_bState = !m_bState;
  }

private:
  bool m_bState = false; // The state of the Ultimate Machine (On or Off)
};

int main() {
  CUltimateMachine machine; // Create an instance of the CUltimateMachine class
  machine.displayState();   // Display the initial state of the Ultimate Machine (should be Off)
  machine.turnOn();         // Toggle the On/Off switch of the Ultimate Machine
  machine.displayState();   // Display the state of the Ultimate Machine again (should be On)

  return 0;
}
