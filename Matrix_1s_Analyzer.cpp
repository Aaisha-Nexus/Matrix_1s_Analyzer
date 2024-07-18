#include <iostream>
#include <cstdlib> // For random number generation
#include <ctime>   // For seeding the random number generator

using namespace std;

int main() {
    // Seed the random number generator (improves randomness)
    srand(time(0));

    // Define the matrix size
    const int rows = 4;
    const int cols = 4;

    // Declare the matrix
    int matrix[rows][cols];

    // Fill the matrix with random 0s and 1s
    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 2;  // Generate 0 or 1 randomly
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Find the row with the most 1s
    int maxRowOnes = 0, maxRowIndex = 0;
    for (int i = 0; i < rows; i++) {
        int rowOnes = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                rowOnes++;
            }
        }
        if (rowOnes > maxRowOnes) {
            maxRowOnes = rowOnes;
            maxRowIndex = i;
        }
    }

    // Find the column with the most 1s
    int maxColOnes = 0, maxColIndex = 0;
    for (int j = 0; j < cols; j++) {
        int colOnes = 0;
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] == 1) {
                colOnes++;
            }
        }
        if (colOnes > maxColOnes) {
            maxColOnes = colOnes;
            maxColIndex = j;
        }
    }

    // Print the results
    cout << "The largest row index: " << maxRowIndex << endl;
    cout << "The largest column index: " << maxColIndex << endl;

    return 0;
}

