# Matrix 1s Analyzer

This program generates a 4-by-4 matrix filled randomly with 0s and 1s, prints the matrix, and identifies the first row and column with the most 1s.

## Description

The Matrix 1s Analyzer is designed to perform the following tasks:

- **Generate a 4x4 Matrix**: Randomly fills the matrix with 0s and 1s.
- **Print the Matrix**: Displays the generated matrix.
- **Find the Row with the Most 1s**: Determines which row contains the highest number of 1s.
- **Find the Column with the Most 1s**: Determines which column contains the highest number of 1s.


## Example Output
Matrix:
|     | Col 1 | Col 2 | Col 3 | Col 4 |
|---|---|---|---|---|
| **Row 1** | 0 | 0 | 1 | 1 |
| **Row 2** | 0 | 0 | 1 | 1 |
| **Row 3** | 1 | 1 | 0 | 1 |
| **Row 4** | 1 | 0 | 1 | 0 |

- The largest row index: 2
- The largest column index: 2



## Notes
- The matrix size is fixed at 4x4.
- The random number generator is seeded with the current time to ensure different outcomes on each run.
- If there are multiple rows or columns with the same maximum number of 1s, the program will return the first one it encounters.

---

This project demonstrates basic C++ programming skills in random number generation, matrix manipulation, and counting occurrences within a matrix.
