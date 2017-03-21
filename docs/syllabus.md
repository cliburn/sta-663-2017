# STA 663 Syllabus

## Contacts

- Cliburn Chan (cliburn.chan@duke.edu)
  - Office hours: Mon 5-6 PM at 11078 Hock Suite 1102
- Janice McCarthy (janice.mccarthy@duke.edu)
- Christine Chai (christine.chai@duke.edu)
  - Office hours: Tue 7-9 PM at Gray 228
- Hanyu Song MS (hanyu.song@duke.edu)
  - Office hours: Mon 3:30-4:30 PM & Fri 11:30 AM-12:30 PM at Old Chem 211A

## Computational Statistics and Statistical Computing

In statistics, we apply probability theory to real-world data to make informed guesses. For any practical analysis, the use of computers is necessary. This course is designed for graduate research students who need to analyze complex data sets, and/or implement efficient statistical algorithms from the literature. We focus on the following computational skills necessary for modern data analysis:

- **Exploratory data analysis**: Real-world data may come in many forms, some of which are not directly amenable to statistical modeling (e.g. binary data, images, raw text). After obtaining the data, we need to preprocess it into a form that is convenient for analysis - sometimes numerical arrays suffice, but usually we will want to use more structured data frames. Once the data is in a tractable format, an essential first step is simply to play with the data to get a feel for it (e.g. types, missing information, duplication, outliers, clumps in the distribution). To do so, we peek at samples of the data, generate data summaries and eyeball the data using visualizations.

- **Improving performance**: With real-world data being generated at an ever-increasing clip, we also need to be concerned with computational performance, so that we can complete our calculations in a reasonable time or handle data that is too large to fit into memory. To do so, we need to understand how to evaluate the performance of different data structures and algorithms, language-specific idioms for efficient data processing, native code compilation, and exploit resources for parallel or distributed computing.

- **Statistical Modeling**: Once we have a feel for how the data is distributed, we can construct probabilistic models to try to capture aspects that we are interested in. In addition, and unlike deterministic mathematical models, statistical models need to also characterize the uncertainty in the data, and are thus formulated as a probability distribution or a family of probability distributions. Our models (probability distributions) typically have tunable parameters for location, scale or other more complex properties. We want to find the parameter values so that the model describes the data adequately - this is known as model fitting, and the two main algorithmic approaches for doing so are optimization and simulation. We will explore the conceptual and algorithmic aspects, as well as popular libraries for optimization and simulation.

The course is mostly taught in Python, a dynamic language that is widely used in the data science and computational science communities. Python is a general-purpose language especially suitable for data munging and numerical computation, and integrates well with many other languages used in data science, including SQL, R, Julia, C, C++ and Fortran.

### What you are assumed to know

- Use of `git` for version control
- Basic use of the Unix shell and command line
- Fluent in one programming language (e.g.g R or Matlab)
- Linear algebra
- Single and multi-variable calculus
- Probability and multivariate statistics

### What you should learn from this course

- Able to program fluently in Python
- Able to optimize code to improve performance
- Able to explain the algorithms for statistical model fitting
- Able to implement statistical algorithms from literature
- Able to use Python libraries for practical data analysis tasks

### Grading

Points will come from the following

- Homework (50%)
  - You will be graded on your best 10 homework scores but note that 6 of these are mandatory and always included in the final grade. Homework is always due 4 PM Wednesday the next week. Late homework will not be graded as we review homework solutions in Wednesday's lab session.
      - **01**. Python basics (mandatory)
      - **02**. Working with text (mandatory)
      - **03**. Working with numbers (mandatory)
      - **04**. Data processing (mandatory)
      - **05**. Code optimization
      - **06**. Interacting with C++
      - **07**. Linear algebra and matrix methods (mandatory)
      - **08**. Univariate optimization
      - **09**. Multivariate optimization
      - **10**. Simulations and graphical models
      - **11**. Markov Chain Monte Carlo
      - **12**. Working with out-of-core and big data

- Midterm exams (20%)
  - Closed-book in-class exam
  - Consists of short programing challenges
  - Designed to test basic facility with coding in Python

- Final project (30%)
  - The final project will be done in groups of 2-3 students. Each student must state their individual contributions to the project in the final report. More details will be released after the mid-term examinations.

#### Grade schema

| Grade | Score range |
| ----- | ----------- |
| A+ | 97 - 100 |
| A  | 94 - 96  |
| A- | 90 - 93 |
| B+ | 85 - 89 |
| B | 80 - 84 |
| B- | 75 - 79 |
| C | 60 - 74 |
| D |  0  - 59 |

Grades will be rounded to the nearest integer - i.e. 89.4 will be rounded to 89 and 89.6 will be rounded to 90. There is no grading on a curve - in principle, everyone in the class cam get an A.

### Honor code

Duke University is a community dedicated to scholarship, leadership, and service and to the principles of honesty, fairness, respect, and accountability. Citizens of this community commit to reflect upon and uphold these principles in all academic and nonacademic endeavors, and to protect and promote a culture of integrity.

To uphold the Duke Community Standard:

- I will not lie, cheat, or steal in my academic endeavors;
- I will conduct myself honorably in all my endeavors; and
- I will act if the Standard is compromised.

See full statement of [Duke Community Standard](https://studentaffairs.duke.edu/conduct/about-us/duke-community-standard)

Note 1: You are welcome and expected to use web resources and discuss with fellow students to perform research for homework and the final project, but your final solutions must be your own. In other words, there must be no copy and paste - you should be able to explain what every line of your code does.

Note 2: The midterm examination is **closed book** - you should not access any reference material (including the web) or discuss with other students. The intent is for you to memorize the basics of Python so that your working memory is free to focus on concepts when we move to more challenging topics.

### Week 1: Introduction to Python (11-12 Jan)

1. Programming in Python
2. Functions and classes

### Week 2: Working with text and numbers (17-19 Jan)

1. Working with text
2. Working with numbers

### Week 3: Data processing  (24-26 Jan)

1. Data I/O and munging
2. Building pipelines for data analysis

### Week 4: Graphics and visualization (31 Jan-2 Feb)

1. Basic plotting and grammar of graphics
2. Interactive graphics

### Week 5 Improving performance (7-9 Feb)

1. Just-in-time (JIT) and Ahead-of-time (AIT) compilation
2. Parallel computing

### Week 6: (14-16 Feb)

1. Introduction to C++
2. Wrapping C++ code for use in Python

### Week 7: Linear Algebra for Statistics (21-23 Feb)

1. Linear algebra: The essential parts
2. Matrix decompositions, PCA and SVD

### Week 8 Numerical optimization I (28 Feb-2 Mar)

1. Calculus for optimization
2. Root finding and univariate optimization

### Week 9: Numerical optimization II (7-9 Mar)

1. Multivariate optimization
2. Optimization for generalized linear models

### Week 10: Probabilistic algorithms (21-23 Mar)

1. Statistical simulations
2. PGMs and HMMs

### Week 11: MCMC I (28-30 Mar)

1. Metropolis and Gibbs samplers
2. Hamiltonian Monte Carlo (HMC)

### Week 12: MCMC II (4-6 Apr)

1. Probabilistic programming with [`pymc3`](http://jupyter.org)
2. Probabilistic programming with [`pystan`](https://pystan.readthedocs.io/en/latest/)

### Week 13: Working with Big Data (11-13 Apr)

1. Out-of-core computing
2. Distributed computing

### Week 14 Review (18-19 Apr)
