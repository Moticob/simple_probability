#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "event_a.h"
#include "event_b.h"
#include "event_c.h"
#include "probability.h"

int main() {
    srand(time(NULL));
    
    int trials = 1000;
    float event_a_count = 0, event_b_count = 0, event_c_count = 0;

    for (int i = 0; i < trials; i++) {
        event_a_count += simulate_event_a();
        event_b_count += simulate_event_b();
        event_c_count += simulate_event_c();
    }

    float prob_a = calculate_probability(event_a_count, trials);
    float prob_b = calculate_probability(event_b_count, trials);
    float prob_c = calculate_probability(event_c_count, trials);

    printf("Probability of Event A: %f\n", prob_a);
    printf("Probability of Event B: %f\n", prob_b);
    printf("Probability of Event C: %f\n", prob_c);

    float joint_prob_ab = calculate_joint_probability(prob_a, prob_b);
    printf("Joint Probability of Event A and B: %f\n", joint_prob_ab);

    return 0;
}

