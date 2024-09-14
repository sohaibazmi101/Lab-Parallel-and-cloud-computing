# C Programming Lab with Parallel and Cloud Computing (OpenMP)

Welcome to the **C Programming Lab with Parallel and Cloud Computing**! This repository contains the solutions and implementations of lab exercises for a 14-week course. Each week focuses on different aspects of **parallel computing** using **OpenMP** and **cloud computing techniques**, all implemented in the C programming language.

## Objectives

The main objectives of this lab course are:
- To strengthen C programming concepts and techniques.
- To introduce and implement parallel computing using OpenMP.
- To solve mathematical, logical, and computational problems efficiently using parallelism.
- To understand and practice cloud computing paradigms in a lab environment.

## Repository Structure

The repository is organized into 14 folders representing each week of the lab. Each week contains several C programs designed to solve specific problems, with some using OpenMP for parallelism.


## Week 1: Introduction to C Programming

### Objectives
- To practice basic C programming concepts.
- To solve simple mathematical and logical problems using C.

### Outcomes
After completing this week, the students will be able to:
- Write C programs for checking palindromes, finding roots of quadratic equations, checking leap years, calculating interest, and determining character types.
- Implement basic algorithms for prime number generation, LCM, HCF, and array operations.

### Programs for Week 1
1. **Palindrome Checker**  
   Write a C program to check whether a given number is a palindrome.
   
2. **Quadratic Equation Solver**  
   Write a C program to find the roots of a quadratic equation.
   
3. **Leap Year Checker**  
   Write a C program to check whether a given year is a leap year.
   
4. **Interest Calculator**  
   Write a C program to calculate both simple and compound interest using separate functions.
   
5. **Character Type Checker**  
   Write a C program to determine if a character is a vowel or consonant.
   
6. **Prime Number Generator**  
   Write a C program to generate prime numbers up to a given limit.
   
7. **LCM & HCF Calculator**  
   Write C programs to compute the Least Common Multiple (LCM) and Highest Common Factor (HCF) of two numbers.
   
8. **Array Operations**  
   Write C programs to perform basic array operations such as finding the maximum, minimum, and sum of elements.

### Parallel Programming (OpenMP) Examples for Week 1
- Introduce parallelism in the prime number generator using OpenMP.
- Use OpenMP to parallelize array operations such as sum and maximum element search.

## How to Run the Programs

1. **Clone the Repository**
   ```bash
   git clone https://github.com/sohaibazmi101/Lab-Parallel-and-cloud-computing
   cd Week_1
   gcc -fopenmp Ques1.c -o Ques1
   ./Ques1
   ./Ques2
   ./Ques3
   etc

### Notes:
1. Each week can have a similar structure under the "Programs for Week X" section with objectives and a list of programs.
2. You can include more detailed descriptions in individual files for each question if needed.
3. Ensure you add proper instructions for compiling OpenMP programs in the README.
