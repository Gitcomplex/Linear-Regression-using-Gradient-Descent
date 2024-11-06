# Linear Regression using Gradient Descent in C++

This project implements a simple linear regression algorithm using gradient descent in C++. This was a first-year college project aimed at understanding the basics of machine learning, specifically how linear regression models work and how they can be optimized using gradient descent.

## Project Overview

Linear regression is a statistical method for modeling the relationship between a dependent variable and one or more independent variables. This project focuses on implementing linear regression for a single feature (simple linear regression) and optimizing it using gradient descent.

### Key Concepts

- **Linear Regression**: A method to predict the dependent variable based on the relationship with an independent variable.
- **Gradient Descent**: An optimization algorithm used to minimize the cost function by iteratively adjusting the model parameters.

## Implementation

The project was implemented in C++ and includes the following main components:

1. **Data Input**: Reads input data from a file or standard input to initialize the features and target values.
2. **Hypothesis Function**: Uses the equation `y = mx + b` where `m` and `b` are the parameters that the gradient descent algorithm will optimize.
3. **Cost Function**: Calculates the mean squared error to measure the accuracy of the predictions.
4. **Gradient Descent**: Updates the parameters `m` and `b` iteratively to minimize the cost function.

## How to Run the Project

### Requirements

- **C++ Compiler**: Any standard C++ compiler (e.g., `g++`) should work for this project.

### Steps to Compile and Run

1. **Compile** the code:
   ```bash
   g++ main.cpp -o linear_regression
   ```
2. **Run the compiled program:**

   ```bash
   ./linear_regression
   ```

### Provide Data

The program will prompt you to enter data points or read from a file (depending on how the code is structured).

### Sample Input Format

If the program reads data from a file, the data should be structured as follows:

```plaintext
x1 y1
x2 y2
...
xn yn
```

Where each line represents a data point with an input `x` and output `y`.

### Learning Outcome

This project provided a hands-on understanding of:

- How linear regression works and how it's used in predictive modeling.
- The role of gradient descent in optimizing machine learning models.
- How to implement machine learning algorithms from scratch using C++.

### Future Improvements

- **Multi-Feature Regression**: Extend the implementation to support multiple features (multiple linear regression).
- **Optimization Techniques**: Implement advanced optimization techniques to improve the efficiency of the gradient descent algorithm.

### References

- [Gradient Descent - Wikipedia](https://en.wikipedia.org/wiki/Gradient_descent)
- [Linear Regression - Wikipedia](https://en.wikipedia.org/wiki/Linear_regression)
