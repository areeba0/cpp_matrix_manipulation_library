#include <iomanip>
#include <iostream>
using namespace std;
class Matrix
{
private:
// Declare private data members

int **matrix; 
// pointer to a 2D array matrix
int row;
// number of rows in the matrix
int col;
// number of columns in the matrix
public:
	// Declare public member functions
	
	// Constructor 
	Matrix(int row, int col)
	{
		this->row = row;
		this->col = col;
		matrix = new int*[row]; 
		// allocate memory for the rows of the matrix
		for(int i=0; i<row; i++)
			matrix[i] = new int[col]; 
			// allocate memory for the columns of the matrix
	}
	
	// Constructor to initialize a 2x2 matrix with given values
	Matrix(int n1, int n2, int n3, int n4, int row=2, int col=2)
	{
	    	this->row = 2;
	    	this->col = 2;
	      	matrix = new int*[2];
	 	// allocate memory for the rows of the matrix with given value = 2
	    	for(int i=0; i<2; i++)
			     matrix[i] = new int[2]; 
			// allocate memory for the columns of the matrix with given value =2
		
		     // Initialize the values of the matrix
		     // 2x2 = 4
		           matrix[0][0] = n1; matrix[0][1] = n2;
		           matrix[1][0] = n3; matrix[1][1] = n4;
	}
	
	// Constructor to initialize a 3x3 matrix 
	Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int row=3, int col=3)
	{
		this->row = 3;
		this->col = 3;
		matrix = new int*[3]; 
		// allocate memory for the rows of the matrix with given value = 3
		for(int i=0; i<3; i++)
			matrix[i] = new int[3]; 
			// allocate memory for the columns of the matrix with given value = 3
		
		// Initialize the values of the matrix 3x3 = 9
		matrix[0][0] = n1; matrix[0][1] = n2; matrix[0][2] = n3;  matrix[1][0] = n4;
		matrix[1][1] = n5; matrix[1][2] = n6; matrix[2][0] = n7;  matrix[2][1] = n8;
		matrix[2][2] = n9;
	}		
	
	// Constructor to initialize a 4x4 matrix with given values
	Matrix(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11, int n12, int n13, int n14, int n15, int n16, int row=4, int col=4)
	{
		this->row = 4;
		this->col = 4;
		matrix = new int*[4]; 
		// allocate memory for the rows of the matrix with the given value 4
		  for(int i=0; i<4; i++)
		    	matrix[i] = new int[4]; 
			// allocate memory for the columns of the matrix with the given value 4
	 matrix[0][0] = n1; matrix[0][1] = n2; 	matrix[0][2] = n3; matrix[0][3] = n4;
			
	matrix[1][0] = n5; matrix[1][1] = n6;	matrix[1][2] = n7; matrix[1][3] = n8;
			
	matrix[2][0] = n9; matrix[2][1] = n10; matrix[2][2] = n11; matrix[2][3] = n12;
			
	matrix[3][0] = n13; matrix[3][1] = n14; matrix[3][2] = n15; matrix[3][3] = n16;
			
	}	
	// copy constructor that takes another Matrix object as a parameter
  Matrix(const Matrix &m)
   {
       int i;
       int j;
    // Assigns the number of rows and columns of the matrix object to be made
 this->row = m.row;
 this->col = m.col;
 // Allocates memory for the matrix object 
  matrix = new int*[row];
  
   for(int i=0; i< row; i++)
       matrix[i] = new int[col];
    // Loops through the matrix object being copied and copies each element to the new object
   for(i=0;i<row;i++)
       for(j=0;j<col;j++)
        matrix[i][j] = m.matrix[i][j];
   }

   //  destructor 
   ~Matrix()
         {
                       // Deallocates the memory used by the matrix object
                 for (int i = 0; i < row; i++)
                 delete[] matrix[i];
                  delete[] matrix;
         }   
         int getRow()
		 {
			return row;
		 }
		
		
		int getCol()
		 {
			return col;
		 }
		 // Function to get the value at the given row and column of a matrix
       int getValue(int row, int col)
          {
        // Check if the given row and column are within the matrix bounds
      if(row <= this->row && col <= this->col)
            { 
                int value;
              return matrix[row-1][col-1] = value;
				cout<<endl;
				cout<<" Value in matrix bound"<<endl;
			}
				
			else
				cout<<"\n Value not , error";
          }
        	void setValue(int row, int col, int value)
		{
			if(row <= this->row && col <= this->col)
			{
				matrix[row-1][col-1] = value;
				cout<<endl;
				cout<<" Value in matrix bound"<<endl;
			}
				
			else
				cout<<"\n Value not , error";
		}
          
          int Total()	//  Total function, which returns an integer value
           {
              int sum = 0;
              int i;
              int j;	// initializes an integer variable named sum to 0, and two integer variables i and j (for looping)
            for (i = 0; i < row; i++)	
            // for loop that iterates through the rows of the matrix, where the row variable 
                 for (j = 0; j < col; j++)	
                 // for loop that iterates through the columns of the matrix, where the col variable 
                   sum = sum + matrix[i][j];	
                   // adds the current element in the matrix to the sum variable
                   return sum;	
                   // returns the final sum value
           }
           
	    double Average() //Average function, which returns a double value
               {
                   // declares two integer variables named sum and size
              int sum;
              int size;	
             float avg = 0.0;	// initializes  avg to 0.0
             sum = Total();	
             // calls the Total() function (which calculates the total sum of elements in the matrix)
             //and stores the result in the sum variable
             // get number of elements in the matrix (size)
             size = row * col;	
             // calculates the size of the matrix by multiplying the number of rows and columns 
    
            avg = (float(sum) / size);	
            // calculates the average by dividing the sum by the size
            return avg;	// returns the average value
              }
              
	    	// This function takes an integer row as parameter of a function and returns the sum of the elements
    int RowTotal(int row)
    {
    // Check if row is less than 1 or greater than the number of rows in the matrix.
     if (row < 1 || row > this->row) 
     {
        // If row is invalid, return -1 
            return -1;
    }

    // Initialize sum to 0.
    int sum = 0;
    // Loop over all columns in the row-th row of the matrix.
    for (int j = 0; j < col; j++) 
    {
        sum = sum + matrix[row - 1][j];
    }
    return sum;
    }

		   int ColumnTotal(int col)
		{
    // Check if col is less than 1 
    // or greater than the number of columns in the matrix.
               if (col < 1 || col > this->col) 
               {
        // If col is invalid, return -1 
                  return -1;
               }

    // Initialize sum to 0.
                   int sum = 0;
    // Loop over all rows in the matrix.
            for (int i = 0; i < row; i++)
            {
                       sum = sum + matrix[i][col - 1];
             }

    // Return the sum of the elements in the col-th column of the matrix.
                return sum;
        }
        
        Matrix Transpose()
{	
    // Create a new Matrix object "swap" with dimensions 
    Matrix swap(row,col);
    
    // Loop through each element in the original matrix and copy it to the transposed matrix
    int i;
    int j;
    
    for(int i=0; i<row ;i++)
        for(int j=0; j<col ;j++)
            swap.matrix[i][j] = matrix[j][i];
            
    // Return the transposed matrix
     return swap;	
}
};
int main()
{
    // Create a 3x3 matrix using constructor with 
    Matrix matrix2(4, 2, 5, 4, 8, 6, 7, 8, 9, 3, 4);

    // Create a 4x4 matrix using constructor 
    Matrix matrix3(2, 4, 6, 8, 7, 3, 2, 1, 12, 10, 13, 11, 13, 12, 15, 1, 8, 4);

    Matrix matrix1(4, 2, 3, 4, 1, 3);
    // Create a copy of m1 using copy constructor
   // Matrix matrix3 = matrix1;

    // Get the number of rows and columns of m1
    cout<<"----------------------ROWS AND COLUMNS IN EACH MATRIX--------------------"<<endl;
    cout << "matrix 1 has " << matrix1.getRow() << " rows and " << matrix1.getCol() << " columns." << endl;
    cout << "matrix 2 has " << matrix2.getRow() << " rows and " << matrix2.getCol() << " columns." << endl;
    cout << "matrix 3 has " << matrix2.getRow() << " rows and " << matrix3.getCol() << " columns." << endl;
    cout<<"---------------------------------------------------------------------------"<<endl;
    // Set a value in m1 and get the value
    cout<<"*******************MATRIX 1 [2X2]***********************************"<<endl;
    matrix1.setValue(2, 2, 0);
    cout << "Value at (2, 2) in 1st matrix (m1): " << matrix1.getValue(2, 2) << endl;

    // Get the total sum and average of matrix 1 2x2
    cout << "Total sum of matrix 1 = " << matrix1.Total() << endl;
    cout << "Toatal average of matrix 1 is = " << matrix1.Average() << endl;

    // Get the row and column totals of matrix 1
    cout << "Row total of row 2 in matrix 1 is : " << matrix1.RowTotal(2) << endl;
    cout << "Column total of column 2 in matrix 1 is : " << matrix1.ColumnTotal(2) << endl;
    
    // Set a value in m1 and get the value
    cout<<"*******************MATRIX 2 [3X3]***********************************"<<endl;
    matrix2.setValue(3, 3, 0);
    cout << "Value at (3, 3) in 2nd matrix (m2): " << matrix2.getValue(3, 3) << endl;

    // Get the total sum and average of matrix 2 3x3
    cout << "Total sum of matrix 2 = " << matrix2.Total() << endl;
    cout << "Toatal average of matrix 2 is = " << matrix2.Average() << endl;

    // Get the row and column totals of matrix 2
    cout << "Row total of row 3 in matrix 2 is : " << matrix2.RowTotal(3) << endl;
    cout << "Column total of column 3 in matrix 2 is : " << matrix2.ColumnTotal(3) << endl;
    
    // Set a value in m1 and get the value
    cout<<"*******************MATRIX 3 [4X4]***********************************"<<endl;
    matrix2.setValue(4, 4, 0);
    cout << "Value at (4, 4) in 3rd matrix (m3): " << matrix3.getValue(4, 4) << endl;

    // Get the total sum and average of matrix 3 4x4
    cout << "Total sum of matrix 3 = " << matrix3.Total() << endl;
    cout << "Toatal average of matrix 3 is = " << matrix3.Average() << endl;

    // Get the row and column totals of matrix 3
    cout << "Row total of row 3 in matrix 3 is : " << matrix3.RowTotal(4) << endl;
    cout << "Column total of column 3 in matrix 3 is : " << matrix3.ColumnTotal(4) << endl;
 
   
    return 0;
}

