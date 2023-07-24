#include <stdio.h>

// Declare Functions
void scalarMultiply (int[][5], int); // Must declare second array dimension size
void displayMatrix (int[][5]);

int main(void) {

  // Declare and Define matrix
  int sampleMatrix[3][5] = {
  {  7, 16, 55, 13, 12 }, 
  { 12, 10, 52,  0,  7 },
  { -2,  1,  2,  4,  9 }
  };

  // Print original matrix
  printf ("Original matrix:\n");
  displayMatrix(sampleMatrix);

  // Multiply matrix by 2
  scalarMultiply (sampleMatrix, 2);

  // Print new matrix 
  printf ("\nMultiplied by 2:\n");
  displayMatrix (sampleMatrix);

  // Multiply matrix by -1
  scalarMultiply (sampleMatrix, -1);

  // Print new matrix
  printf ("\nMultiplied by -1:\n");
  displayMatrix (sampleMatrix);
  
  return 0;
}

// Define Functions
void scalarMultiply (int matrix [3][5], int scalar) {
  for (int row = 0; row < 3; row++) {
   for (int column = 0; column < 5; column++)
     matrix[row][column] *= scalar;
  }
}

void displayMatrix (int matrix[3][5]) {
  for (int row = 0; row < 3; row++) {
    for (int column = 0; column < 5; column++) {
      printf ("%5i", matrix[row][column]);
    }
    printf ("\n");
  }
  printf ("\n");
}