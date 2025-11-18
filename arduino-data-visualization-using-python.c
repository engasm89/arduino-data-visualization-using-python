// Include IO to simulate serial sensor stream for Python visualization
#include <stdio.h> // Stream output
#include <stdlib.h> // Random values
#include <time.h> // Seed RNG

// Generate a simulated sensor sample and print in CSV and JSON formats
static void emit_sample(int n) { // Emit sample number n
  int temp = 20 + rand() % 10; // Random temperature 20..29
  int hum = 40 + rand() % 30; // Random humidity 40..69
  int light = rand() % 1024; // Random light 0..1023
  printf("%d,%d,%d\n", temp, hum, light); // CSV line for simple plotting
  printf("{\"n\":%d,\"temp\":%d,\"hum\":%d,\"light\":%d}\n", n, temp, hum, light); // JSON line
}

int main(void) { // Entry point
  printf("Arduino Data Visualization using Python\n"); // Title
  srand((unsigned)time(NULL)); // Seed random number generator
  for (int i = 1; i <= 50; ++i) { // Emit 50 samples
    emit_sample(i); // Print sample lines
  } // End emission
  return 0; // Exit
} // End main
