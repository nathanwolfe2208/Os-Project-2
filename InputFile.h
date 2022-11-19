#include <stdio.h>

// Matrix for allocation
int allocation[5][3] = { {0,1,0},
                             {2,0,0},
                             {3,0,2},
                             {2,1,1},
                             {0,0,2} };
    // Matrix for max
int max[5][3] = { {7,5,3},
                      {3,2,2},
                      {9,0,2},
                      {2,2,2},
                      {4,3,3} };
    
    // Array for available work
int available[3] = {3,3,2};