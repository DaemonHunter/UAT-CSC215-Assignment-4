# UAT-CSC215-Assignment-3

# Background
You, having graduated from UAT, were hired by a U.S. Military defense contractor company called Skynet. You oversee writing an 
A.I. program for the Skynet HK-Aerial drones to hunt down ground enemies using a grid sector.
You know many programming languages from your time at UAT. Since this is for our military, you need to choose the fastest and 
most reliable language you know. You choose C++ since it is closer to the MACHINE (pun intended) level than other programming 
language, it is faster than other languages, it has been around for decades which makes C++ a very mature and stable programming 
language, these are features you want software used in battle. While new features have been added to C++ over the decades, the 
language has always maintained more backward compatibility with its older versions than other programming languages. Knowing a a 
new version of a programming language will work without breaking older code is very desirable in military applications when lives 
are on the line.

You have written the software for the Skynet HK-Aerial. Now the military wants wargames. 

# Requirements

* Create a new solution and project and GitHub for this assignment.
Hint: Open two separate visual studios to do this. One for the old solution project, and one for the new solution project. 
Now copy all the code from the original Skynet HK-Aerial into this new project to save you from having to recode everything from scratch. Test this before you move on to make sure the code works in your new project like it did in your old project. Now close your old project and that instance of visual studio.
* Modify your new C++ program for the Skynet HK-Aerial.
* Add another AI player using the less efficient Linear search pattern.
* Add another AI player using a random number guess between grid locations 1 and 64.
* Add a human player, letting the human input grid numbers from the console.
* The easiest way to code this would be for this program’s user interface to start with the human player and use a while loop 
until the human guesses the location the enemy while keeping track of the number of guesses the human uses. Then the random guess 
AI player should guess using their own while loop until they find the enemy location and keep track of how many guesses it took them. 
Then the linear Search AI player should guess using their own while loop until they find the enemy location, and then finally the 
Binary search AI should run it’s while loop and keep track of the number of guesses it takes to find the enemy location. 
Once all players AI and Human have found the enemy location, then this game is over. Display the stats of each player's number of 
guesses it took. You don't have to physically sort them, just display the number of guesses each drone pilot took to find the enemy.
* Be sure to comment each line of code except cout statements, write very readable code using good coding standards.
* The Grid does not need to be displayed, remember the grid is abstract. Think of this as more of a guess the number game like 
at the end of chapter two.
* When all the players have found the enemies, the game is over, the console should ask the human player if they would like to play 
again. If the human player say's yes, then the game should reset all scores and play again.
* Put this new project into a new GitHub repostiory and take a screenshot of it.
* Your code should be well formatted and with lots of comments explaining your code. 

# PRO TIPS to keep the assignment simple:

* To keep this assignment simple, when adding the linear search AI player, there are no requirements to let the Linear search A.I. 
to be aware if its guess was too high or too low. You only need to make the Linear search A.I. aware if the guess is correct or not.
* To keep this assignment simple, when adding the random number search AI player, there are no requirements to let the Random number 
search A.I. to be aware if its guess was too high or too low. You only need to make the Random number search A.I. aware if the guess 
is correct or not.
* To keep this assignment simple, when adding the Human player, there are no requirements to let the Human player to be aware if the 
guess was too high or too low. You only need to make the the Human player aware if the guess is correct or not.
* You may choose to ignore this advice, it you do your assignment will be more complex. However, you will receive extra credit for 
going above and beyond requirements. 
* There are no arrays needed to code this program. The grid is abstract. 

# My Sample Output Screen:

(Your console output at the end of the game does not have to look exactly like this.)
```
**********************************************
* All drones have now found the enemy.
* The Enemy was hiding at grid location 59
*
* The Human Player using a human Search took 3 guesses to find the enemy location final target prediction was 59
* The AI Player using Linear Search took 59 guesses to find the enemy location final target prediction was 59
* The AI Player using Random Search took 33 guesses to find the enemy location final target prediction was 59
* The AI Player using Binary Search took 6 guesses to find the enemy location final target prediction was 59
**********************************************
Would you like to play again? Y/N
```
 

# Submission

* A screen shot when on player, human or AI wins the Skynet HK-Aerial showing the statistics from the game.
* Your actual .cpp file. Not a screen shot and not the entire project.
* A screen shot of your entire project in GitHub
* Do not zip these three files.
