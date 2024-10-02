#include "event_b.h"
#include <stdlib.h>

float simulate_event_b() {
    return (rand() % 10 < 6) ? 1 : 0; // Simulate an event with 60% chance of success
}

