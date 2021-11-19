# SE3540_FA2021_A05_G01

Instructions: Yahtzee is a dice game in which a player will be able to roll all 5 dice all at once. After three rolls the user will be asked to select a category in which they will be able to score in. The different categories are:

- Ones: In which all of the dice that rolled a one will be added up.
- Twos: In which all of the dice that rolled a two will be added up.
- Threes: In which all of the dice that rolled a three will be added up.
- Fours: In which all of the dice that rolled a four will be added up.
- Fives: In which all of the dice that rolled a five  will be added up.
- Sixes: In which all of the dice that rolled a six will be added up.
- 3 of a kind: If you get a three of a the same number rolled all of the dice are added up.
- 4 of a kind: If you get four of the same number rolled all of the dice are added up.
- Full House: If you have 3 numbers that are the same, and you have another 2 of the same numbers that are also rolled you will be able to get 25 points.
- Small Straight: If you roll four or more consecutive numbers; for example 2,3,4,5, then you recieve 30 points.
- Large Straight: If you roll five consecutive numbers; for example 1,2,3,4,5 then you recieve 40 points.
- Yahtzee: If all 5 dice you rolled are the same number you can get 50 points. If you get more than 1 Yahtzee you can add 100 points to your next Yahtzee. However if you score a 0 on Yahtzee you cannot score any points.
- Chance: Adds up all of the dices.

If you score a total of 63 points or higher in the section ones, twos, threes, fours,  fives, and sixes you will receive a bonus of 35 points.

However each player can only use each category once. If a player does not meet the criteria needed to score points and chooses the category the player will receive 0 points for that particular category.

In a actual game you can throw the dice three times but in this application you can only throw the dice once. In a actual game of Yahtzee mutiple players can play but in this application only one player can play the game. 



The project that we created simulates a Yahtzee game. The first thing that you will see when you run the program is a menu screen which will allow the player to start a game or to exit the application. If the user types 'start' to start the game the user will come across another screen and will ask the user if they want to roll the dice or exit the application. If the user wants to roll the dice, the dice will roll only once and show the dice. If the user does not want to roll the dice it will exit the game. It will also display the scoring rules, scoreboard, and categories that the user can choose to score in. The application will ask the user which category they would like to score in and if they enter an invalid category they will be asked to put it in another category. After choosing the category it will prompt the user to see if they are ready to roll the dice, show scoring rules, show the updated scoreboard that will show them their current scoring in each of the categories, and will also ask the user which available category they would like to score in. After the user repeats these steps and all categories are filled the game shows the user the final score and exits the game. 

**Building:** CMake with Visual Studios and GitLab.

**Integration:** We tested the test cases outside of gitlab on Visual Studios and then commited the test files to git lab then did the build process on gitlab.

**Testing:** For testing we used CppUnitTestFramework in Visual Studios. The testing operates with each case you have is in a seperate method that you have to directly input the values you want to test in that function that will give the correct output you are expecting. It was not to difficult to learn the only hard parts of learning this new tool was how to use the assert functions to check the value. And also figuring out which function to call to get the values to put placed inside the function. Other than that it was fairly easy to get a understanding on after you got one Test Case to work. It was a like a different way of looking at code and physcially writing it.

**Statement of Contributions:** 

**Roy**:scoretest.cpp, added a new function that scores aces - 6s and modified addScore function to mirror the changes.

**Lucas**: ScoreboardTesting.cpp tested small, and large straight. It also checked yahtzee bonus. 

**Evan Yonut**: Worked on the UpperBonusFullHouseYahtzee.cpp file. This file does the tests for upper bonus, Full house, and Yahtzee. 

**Adrian**: DiceTest.cpp, checkSort was added to Dice.cpp to check whether or not the function was properly sorted. Also did the CMake file and the building on Gitlab

**Michael**: FourandThreeofaKind.cpp, also wrote the second half of the README, and did some changes in Game.cpp.


