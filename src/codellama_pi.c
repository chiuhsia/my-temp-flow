#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#test2 - new
int main() {
    // Initialize random seed
    srand(time(NULL));

    // Define constants
    int num_points = 1000000;
    double square_area = 4.0;

    // Initialize variables
    int points_in_circle = 0;
    double x, y;

    // Generate random points and count points in circle
    for (int i = 0; i < num_points; i++) {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        if (x*x + y*y <= 1.0) {
            points_in_circle++;
        }
    }

    // Estimate pi using the results
    double pi_estimate = 4.0 * points_in_circle / num_points;

    // Print the result
    printf("Estimated pi: %f\n", pi_estimate);

    return 0;
}

