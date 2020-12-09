# Monte Carlo

### Authors : 
Akeddar Mehdi 261344

Birch Hugo 

### Description
  This project is an introduction to scientific programming in C ++. It is registered as part of the Programming Concepts in Scientific Computing course(https://edu.epfl.ch/coursebook/fr/programming-concepts-in-scientific-computing-MATH-458).
   
The objective of the project is the creation of a Monte Carlo algorithm in a modular way. To do this, the following objectives have been achieved :
* Implementation of random number generators with a normal & uniform probability distribution.
*   The compute of the expectation value of a user-defined function
* The visualization of the statistical moments
*  The graphical verification of Central Limit Theorem (CTL)
### General Context
T
### How It Works

To run the executable, the following information must be written to the terminal : 
'./project9_exe  name_of_distribution_file name_of_function_file distribution type'

The program returns an output directory containing a 'moments.csv' file with moment results and several 'sample_means.csv' to verify the CTL theorem. 

To plot the results, the 'visualization.py' script should be run. It ouputs 3 graphs : A visualization of the moments, 2 visualizations of the CTL theorem : The normal distribution of the sample means and the value of the sample's standard distribution compared to the theoretical standard distribution.


### Input files
2 input files are needed for code usage : 
* A Distribution file : the file should be structured as follow : 
	* The size of the vector.
	* The mean of the normal distribution or the lower bound of the uniform distribution.
	* The variance of the distribution or the upper bound of the uniform distribution.
* A Function file : the file should be structured as follow : 
	* The type of function : ' P ' for polynomial, 'E' for exponential and 'T' for trigonometric function
	* The first coefficient  : **a**x+b / **a** exp(bx)/**a**cos(bx)
	* The second coefficient : ax+**b**/ a exp(**b**x)/acos(**b**x)
	* The maximum order for the statistical moments.
This code is designed for **uniform** and **normal** distributions.   
However, given the modularity of the code, it is easy to extend this constraint by adding new classes.

### Output files

### Prerequisites
#### C++
* This version was designed for C++ 14 or higher.
* No external libraries are required.
#### Python
* This version was designed for Python 3.
* A directory called 'output' containing the results for the moments and the CTL theorem is needed to run the visualization.


### Google Test

### Doxygen
The documentation was designed for doxygen 1.8.16 or higher.
To generate the documentation, run the command : '' in the terminal.
### Improvements
### References
