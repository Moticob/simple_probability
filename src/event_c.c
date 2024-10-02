#include "event_c.h"
#include <stdlib.h>

float simulate_event_c() {
    return (rand() % 100 < 30) ? 1 : 0; // Simulate an event with 30% probability
}

