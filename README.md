# Monte Carlo

### Authors : 
Akeddar Mehdi 261344

Birch Hugo 261684

### Description
  This project is an introduction to scientific programming in C ++. It is registered as part of the Programming Concepts in Scientific Computing course(https://edu.epfl.ch/coursebook/fr/programming-concepts-in-scientific-computing-MATH-458).
   
The objective of the project is the creation of a Monte Carlo algorithm in a modular way. To do this, the following objectives have been achieved :
* Implementation of random number generators with a normal & uniform probability distribution.
*   The compute of the expectation value of a user-defined function
* The visualization of the statistical moments
*  The graphical verification of Central Limit Theorem (CTL)
### General Context
The code is designed for 
### How It Works

To run the executable, the following information must be written to the terminal : 
'./project9_exe  name_of_distribution_file name_of_function_file distribution type'
The program returns an output directory containing a 'moments.csv' file with moment results and several 
'sample_means.csv' to verify the CTL theorem.

If run in CLion IDE the arguments are saved to run with the default files to allow to be run directly:
* test_function.txt
* test_normal.txt 
* 'N' as distribution type.


To plot the results, the 'visualization.py' script should be run. It ouputs 3 graphs : 
A visualization of the moments, 2 visualizations of the CTL theorem : The normal distribution of the sample means and 
the value of the sample's standard distribution compared to the theoretical standard distribution.


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

### Prerequisites
#### C++
* This version was designed for C++ 14 or higher.
* No external libraries are required.
#### Python
* This version was designed for Python 3.6 or higher.
* A directory called 'output' containing the results for the moments and the CTL theorem is needed to run the visualization.


### Google Test
This project possesses 5 unit test programs:
* Reader_test which tests that if the inputs are incorrect exceptions are thrown.
* NormalDist_test which tests if the mean, the size and the variance given are correctly found in the normal distribution.
* UniformDist_test tests if the mean, the size and the variance given are correctly found in the Uniform distribution.
* MonteCarloExpectation_test tests if the mean of the random sample for a uniform or normal distribution is close to the given mean. 
  It also tests if the expectation is close to the theoritical value for both distributions.
* RunAllTests this runs all the test described above in one go, to make it easier for the user.

All necessary Test files for the test can be found in cmake-build-debug/Test_files. 
These unit tests are all run with the Google test library which is included in the lib directory of the Test project
### Doxygen
The documentation was designed for doxygen 1.8.16 or higher.
To generate the documentation, run the command : '' in the terminal.

### Improvements
1. Numerous exceptions were implemented however not all cases were taken into account, so we could make the program more robust to hazardous inputs.
2. Add other type of distributions such as Poisson or Exponential.
3. Add more classes of function and more parameters to offer more possibilities of user defined functions.
4. 

### References
* [List of probability distributions](https://en.wikipedia.org/wiki/List_of_probability_distributions)
* [Normal distribution](https://en.wikipedia.org/wiki/Normal_distribution)
* [Uniform distribution (continuous)](https://en.wikipedia.org/wiki/Uniform_distribution_(continuous))
* [Expected value](https://en.wikipedia.org/wiki/Expected_value)
* [Central limit theorem](https://en.wikipedia.org/wiki/Central_limit_theorem)
* [Google test library]( https://github.com/google/googletest)