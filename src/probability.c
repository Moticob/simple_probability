#include "probability.h"

float calculate_probability(float event_count, float total_trials) {
    return event_count / total_trials;
}

float calculate_joint_probability(float prob_a, float prob_b) {
    return prob_a * prob_b;
}

