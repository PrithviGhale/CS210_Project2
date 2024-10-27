# Project 2: Investment Calculator

## Project Summary
In this project, I made an investment calculator written in C++. This project was done as my online class project. The code calculates how an investment grows over a certain number of years. The code can also output or show the growth with and without adding extra money every month. How it works is the user first inputs the starting investment, monthly deposit, yearly interest rate, and also how many years they want to invest, and the code solves the problem of showing how much the user will have at the end of each year. 

## What I Did Well
I feel like while working on the code I did a good job organizing the code pretty well, and for this, I used a class for the investment calculations, which helped me keep things very clear. I used class for the investment calculations, which allowed me to group related functions and variables.  Also, another thing is that in the code I kept different parts, each of which has its job, and this helped to make the code easier to understand. 

Another thing I did for my code was divide the logic into separate functions. For example, I separated the calculations for the investment growth with and without the monthly deposits into two different ways. Doing this not only made the code more readable but also easier to maintain. In the code, each function was responsible for a specific task, and doing this allowed me to have less complexity of the main functions. 

I also took care of the input validation and made sure that it was handled properly, and I was also able to avoid redundancy and handle incorrect inputs effectively by using dedicated functions for gathering the user input. 

Lastly, I also added comments throughout the code and explained what each code is for and what it does. This will make it easier for me and others to understand the logic of the code. 

## Areas for Improvement
There are many areas I feel like I could improve the project, and some of them are: I could improve the code by making it more efficient, especially in how I calculated the interest each year. Right now in the code, I calculate the interest using a loop for each month or year. This is a fine approach, but I feel like I could also use more direct formulas for compound interest. By doing this, I feel like it could potentially run the code faster. 

Another area I could've improved would be the input validation. The code I have right now does check for negative values but I feel like it could be better to add a check for more unusual inputs. For example, very large numbers or non-numeric characters. Also, adding an upper bonus for certain inputs would prevent potential errors or unintended behavior.

Lastly, I feel like I could’ve improved the way I handled the edge cases. For example, let's say a user enters a zero for both the initial investment and the monthly deposit. The program could provide a warning message or handle this case more nicely by explaining to the user that the investment wouldn't grow without an initial amount or deposits. 

## Challenges and How I Solved Them
Some challenge I came across while doing the project was to make sure that the user input was valid. For this, I had to make sure that the user only input positive numbers for the initial investment, monthly deposit, and annual interest rate. To solve this problem, I used a loop and conditions to repeatedly tell the user for valid input if they entered something incorrectly.I also had to account for different kinds of invalid input, such as negative numbers or non-numeric characters. Doing this was kind of hard and tricky because I needed to clear the input by using a combination of cin.clear() and cin.ignore() to reset the input when invalid data was entered, which made sure that the program continued running smoothly. 

Another challenge was to figure out how I could calculate the interest correctly, especially when compounding monthly. The math behind compounding can get complicated, so I broke it down into smaller, manageable steps. The first thing I did for this was calculate without monthly deposits, which was more straightforward since it involved only yearly compounding. After doing that, I did the more complex scenario with monthly deposits. I had to account for both the monthly contributions and the monthly compounding of interest, which required careful tracking of the balance throughout each year.

## Transferable Skills
From doing this project, I learned many different things that I can use for my future projects. One of the things I learned was using classes and methods in C++. By putting the investment calculations inside a class, I learned how to organize my code so that it’s more flexible and easier to manage. Using a class helped me keep the different parts of the program separate, like the calculations, storing data, and displaying results. This made it easier to make changes later without affecting other parts of the program. 

Another key thing I learned was to handle user input more effectively. By making sure that the program accepts correct data and deals with wrong input smoothly is important for any software project. I learned how to check if the input is valid and how to manage errors, like clearing and ignoring bad input. This will help me create programs that are more reliable and easier for users to interact with

Lastly, I also improved my debugging and testing skills. By writing test cases and checking the program’s behavior under different scenarios, I learned how to identify and fix errors efficiently. These debugging techniques will be very helpful for me for any future projects that are more advanced. 

## How I Made the Code Easy to Read and Maintain
For my project, I made the code easy to understand for everyone by organizing it with a class and also splitting the tasks into smaller functions. Doing this helped keep each part of the program focused on one job and made sure it was easy to find and fix any bugs in the code or also add any new features to it. For example, in my code, I made separate functions for calculating interest with and without monthly deposits, which made the code more organized and clear.

Another thing I did was add comments throughout the code to explain what each part of the code does. This is helpful for anyone trying to understand how the code works. The comments act like a guide that makes sure it is easier to understand how everything works without having to figure it out from scratch. I also used clear and descriptive variable names, so it’s obvious what each variable is used for.

I also made sure to follow a consistent structure and format that helped maintain a clean code. This way, when someone or I needs to make changes, it will be easier to understand the flow of the program and what each part is responsible for. 




