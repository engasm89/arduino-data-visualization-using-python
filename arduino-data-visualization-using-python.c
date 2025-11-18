/*
 * Course: Arduino Data Visualization Using Python
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Arduino Data Visualization Using Python" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/arduino-data-visualization-using-python/
 * Repository: https://github.com/engasm89/arduino-data-visualization-using-python
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

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

int main(void) { // Program entry point point
  printf("Arduino Data Visualization using Python\n"); // Title
  srand((unsigned)time(NULL)); // Seed random number generator
  for (int i = 1; i <= 50; ++i) { // Emit 50 samples
    emit_sample(i); // Print sample lines
  } // End emission
  return 0; // Exit
} // End of main function
