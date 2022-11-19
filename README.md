The purpose of this project was to demonstrate the usage of bakers algorithm to avoid
deadlock in the action of running processes. Also, it is designed to check if the initial
order of processes are in a safe state, if not it lets the user know that they are not 
in a safe state, and prints what the safe state would be.

Commands to run code:
gcc osproj2.c -o osproj2
./osproj2

Example output:
The sequence is not in a safe state, and the safe sequence is: P1, P3, P4, P0, P2, 
