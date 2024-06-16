# Comprehensive Matrix Class Library in C++: Flexible Initialization, Detailed Operations, and Advanced Transposition
The Matrix class in C++ provides a flexible and easy-to-use interface for creating, managing, and performing operations on matrices of various sizes (2x2, 3x3, and 4x4). It supports matrix creation, copying, transposition, as well as operations like getting row/column totals, matrix sum, and average.

# Features
- Dynamic Matrix Creation: Create matrices of different sizes dynamically.
-  Initialization Constructors: Initialize matrices with specific values for 2x2, 3x3, and 4x4 matrices.
- Copy Constructor: Create a copy of an existing matrix.
- Matrix Operations: Compute the total, average, row total, and column total of matrix elements.
- Matrix Transposition: Generate the transpose of a matrix.
- Memory Management: Properly handles memory allocation and deallocation.
  
# Class Description

## Data Members
- int **matrix: Pointer to a 2D array storing matrix elements.
- int row: Number of rows in the matrix.
- int col: Number of columns in the matrix.
- 
## Member Functions
### Constructors:
- Matrix(int row, int col): Initializes a matrix with given number of rows and columns.
- Matrix(int n1, int n2, int n3, int n4): Initializes a 2x2 matrix with specific values.
- Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9): Initializes a 3x3 matrix.
- Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11, int n12, int n13, int n14, int n15, int n16): Initializes a 4x4 matrix.
- 
### Destructor:
- ~Matrix(): Deallocates matrix memory.
  
### Copy Constructor:
- Matrix(const Matrix &m): Creates a copy of an existing matrix.
  
### Accessors and Mutators:
- int getRow(): Returns the number of rows.
- int getCol(): Returns the number of columns.
- int getValue(int row, int col): Returns the value at specified position.
- void setValue(int row, int col, int value): Sets the value at specified position.
  
### Matrix Operations:
- int Total(): Returns the total sum of matrix elements.
- double Average(): Returns the average of matrix elements.
- int RowTotal(int row): Returns the total of a specific row.
- int ColumnTotal(int col): Returns the total of a specific column.
- Matrix Transpose(): Returns the transposed matrix.
  
# Algorithms
## Matrix Initialization
### Dynamic Memory Allocation:
- Memory for the matrix is allocated dynamically using a double pointer (int **matrix).
- For each row, a new array of integers is allocated to represent the columns.
  
## Matrix Operations
### Total and Average Calculation:
- Uses nested loops to iterate through all elements, summing them up.
- The average is calculated by dividing the total sum by the number of elements.
### Row and Column Totals:
Iterates through specified row/column and sums up the elements.
### Matrix Transposition
- Uses nested loops to swap the row and column indices, creating the transposed matrix.
  
# Usage and Refactoring =
To use the Matrix class in your C++ project:
- Include the Matrix class definition in your source file.
- Create matrix objects using the various constructors.
- Use the provided methods to perform operations on the matrices.
