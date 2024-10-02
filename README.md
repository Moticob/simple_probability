# Simple Probability in C

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2e/C_logo.svg/1200px-C_logo.svg.png" alt="C Logo" width="200"/> <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/3/3f/Markdown-mark.svg/800px-Markdown-mark.svg.png" alt="Markdown Logo" width="200"/>

This project demonstrates basic probability simulations in C by calculating the probabilities of different events (A, B, and C) and their joint probabilities.

## File Structure

- **src/**: Contains all the source files.
  - `event_a.c`
  - `event_b.c`
  - `event_c.c`
  - `probability.c`
  - `main.c`
- **include/**: Contains header files.
  - `event_a.h`
  - `event_b.h`
  - `event_c.h`
  - `probability.h`
- **README.md**: Project overview and instructions.
- **Makefile**: Handles the compilation process.

## Compilation and Execution

### Prerequisites
Make sure you have GCC installed on your system.

### To Compile
```bash
make
```
To Run the Simulation
```bash
./probability_simulation
```
Description of Events
Event A: Simulated with a random 50% chance.
Event B: Simulated with a 60% chance.
Event C: Simulated with a 30% chance.
The program calculates and prints:

Probability of Event A, B, and C.
Joint probability of Event A and B.
To Clean Compiled Files
```bash
make clean
```

Future Extensions
Add more complex events.
Simulate conditional probability.
Commands Summary
To compile the project:
```bash
make
```
To run the program:
```bash
./probability_simulation
```
To clean the project:
```bash
make clean
```
