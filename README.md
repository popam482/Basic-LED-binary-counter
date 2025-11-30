# Basic-LED-binary-counter

A simple binary counter that displays values from 0 to 63 using 6 LEDs connected to an Arduino.

This project implements a binary counter that counts from 0 to 63 and displays the current value in binary format using 6 LEDs. Each LED represents a bit, and the counter automatically increments every 500ms.

## 🔧 Required Components

- 1x Arduino
- 6x LEDs
- 6x 220Ω resistors 
- Breadboard and jumper wires

## 💡 How It Works

1. The counter starts at 0 and automatically increments every 500ms
2.  The current value is displayed in binary format on the 6 LEDs
3. When the counter reaches 63 (111111 in binary), it automatically resets to 0
4. The cycle repeats continuously

## 📷 Tinkercad Simulation
<img width="1536" height="632" alt="LED Binary Counter" src="https://github.com/user-attachments/assets/eb2637ce-b04b-4b39-94e7-ffa81fa59099" />

## 📈 Future Improvements
- Add button-controlled number increment with decimal display on screen.
