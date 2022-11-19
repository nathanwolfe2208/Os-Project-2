#include <stdio.h>
#include "InputFile.h"

int main() {

    // Matrix array for storing the needed amount of work
    int ReqWork[5][3];

    // For loop for calculating the needed work
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            ReqWork[i][j] = max[i][j] - allocation[i][j];
            //printf("%d",ReqWork[i][j]);
        }
    }

    // Condition variable for the while loop to run
    int Cond = 1;
    // Array for storing the sequence of procceses
    int sequence[5];
    // Counter variable for which slot in the sequence is open
    int counter = 0;

    while(Cond) {
        for(int i = 0; i < 5; i++) {
            //printf("in");
            int j = 0;
            // Check if the required work is less than the available work
            if(ReqWork[i][j] <= available[j] && ReqWork[i][j+1] <= available[j+1] && ReqWork[i][j+2] <= available[j+2]){
                // Process is allowed into the sequence, and is added to the sequence array
                sequence[counter] = i;
                // available is updated with the the required work of the process
                available[j] = available[j] + ReqWork[i][j];
                available[j+1] = available[j+1] + ReqWork[i][j+1];
                available[j+2] = available[j+2] + ReqWork[i][j+2];
                // counter is updated so the next process that goes through will get added in the next slot of the sequence
                counter++;
                // For loop to set the values of the process high enough that they wont trigger the if statement, showing that it has been put in the sequence
                for(int y = 0; y < 3; y++){
                    ReqWork[i][j] = 99;
                }

            }
        }
        // If statement to check if the sequence is full, to show that a safe sequence has been found
        if(counter == 5) {
            Cond = 0;
        }
    }

    // If statement to check if the original sequence was in a safe state
    int safeSeq[5] = {0,1,2,3,4};
    if(sequence == safeSeq){
        printf("The sequence is in a safe state, and the sequence is: ");
        for(int i = 0; i < 5; i++) {
        printf("P%d, ", sequence[i]);
    }
    } else{
        printf("The sequence is not in a safe state, and the safe sequence is: ");
        for(int i = 0; i < 5; i++) {
            printf("P%d, ", sequence[i]);
        }
    }

}