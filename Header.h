#pragma once
#include<iostream>
#include "Source.cpp"
using namespace std;

/*!
	*serializeFile is used to Read the contents of the original file and serialize tem ono another file through the use of the boost library and a couple of for loops.
	*@Param vector<string>& data is used to hold the data from the original file and then it gets serialized and written onto the serialized file
*/
void serializeFile(vector<string>& data) {}

/*!
	*dataToVectors is used to separate the clues from the clueValues into each of their own vectorsso the contents are easier to manipulate.
	*@Param int& textInVector holds the line number we are reading out from the file at that moment on the for loop
	*@Param vector<string>& clues holds all the the clues in a vector
	*@Param vector<string>& clueValues holds all the values of the clues in a vector
*/
void dataToVectors(int& textInVector, vector<string>& clues, vector<string>& clueValues) {}

/*!
	*The funcion fourCluesandValues selects four clues and four clue values at random from each of they're respective vectors to be outputted onto the console for the user.
	*@Param int& dataInVector is used to hold the highest number we are gonna get our random number from
	*@Param vector<string>& fourCluesValues holds the four random clueValues for the clues we get randomly
	*@Param vector<string>& clueVector vector that holds all the clues from the file
	*@Param vector<string>& clueValues vector that holds all the values of the clues from the serialized file
	*@Param vector<string>& fourCluesVector vector that holds the four random clues we get from the clue vector
*/
//void fourCluesandValues(int& dataInVector, vector<string>& fourCluesValues, vector<string>& clueVector, vector<string>& clueValues, vector<string>& fourCluesVector) {}

/*!
	*Function correctSumFunction gets two random clueValues from the vector with the four random values of the clues that got outputted to the console in order to add up to the sum that going to be outputted to the user
	*@Param vector<int>& fourCluesValuesVector holds the four values of the four random clues
	*@Param int& valueOneFinal holds the first value from the fourClueValuesvector
	*@Param int& valueTwoFinal holds the second value from the fourClueValuesvector
*/
int correctSumFunction(vector<int>& fourClueValuesVector, int& valueOneFinal, int& valueTwoFinal, int& sum) {}

/*!
	* int main() is used to put all the functions together and output a usable game to the console. 
	*We first start of by declaring "serializeFile" and"dataToVectors" to serialize the file where we are going to write all the data from the original and then populate the vectors with their respective data
	*we then output a couple of "cout" lines to welcome the user to the game and ask them wether they would like to start or not by using "cin << userInput".
	*Then depending on the answer we either end the program or go into the do-while loop.
	*First in the do_while we add one to the tally in the playCount in order to display how many times the user played the game. 
	*Then we use a coupe of "cout" lines to give some information to the user.
	*Then we call the function "fourCluesandValues" to populate two vectors with the four random clues and their values. 
	*Then we run a for loop that turns the clue values from data type "string" to data type "int". 
	*After that, wecall the function "correctSumFunction" to get the two correct values that will lead up to the correct sum.
	*Then we store the correct sum in a value called correctResult to use later on in the program.
	*Then we run a for loop that outputs the four random clues from our vector in a numbered fashion. 
	*We then use a couple of "cout" that tell the user what to do. 
	*After that we store the user's selection in two values "userFirstChoice" and "userSecondChoice". 
	*Then we change the value of "userFirstChoice" and "userSecondChoice" to the actua value of the clue the user selected. 
	*Then we use those two values to collect the "userSum" and compare that with an if statement to the "correctResult". 
	*If the user was correct we add the tally on "correctDimSums" and displays a message letting them Know they were correct.
	*If theyre wrong, we display a message letting them know theyre wrong. 
	*We then ask the user again if they would like to continue playing and based on their answer we kepe the game running or break.

	*@Param int userFirsChoice takes in the user's first choice
	*@Param int userSecondChoice takes in the user's second choice
	*@Param int userSum holds the sum of the two values the user picked
	*@Param int playCount holds the number of times the user played the game
	*@Param int correctDimSums holds the amount of time the user got the right answer
	*@Param string userInput takes in whether the User wants to play or not
	*@Param int correctResult holds the correct sum for the dimSums question
	*@Param int clueNumber is used for the numbering of the clues
	*@Param int numberData is used for the parameter that holds the line number in the file
	*@Param int clueValueOne is used to store the first value for the correct sum
	*@Param int clueValueTwo is used to store the second value
	*@Param vector<string> fourCluesValues  holds the four clue values for the four clues outputted
	*@Param vector<string> data is used for the parameter in serialize file to hold the contents of the original file
	*@Param vector<string> clues is used for the parameter in functions "dataToVectors" and "fourCluesandValues" to store all the clues from the file
	*@Param vector<string> clueValues is used for the parameter in functions  "dataToVectors" and "fourCluesandValues" to store all the values from the fle
	*@Param vector<strings> fourCluesVector is used  for the parameter in function "fourCluesandValues" to store the fur random clues that are going to be outputted in the console.
	*@Param vector<int> fourClueValuesInt is used in the function "correctSumFunction" to store the four clue values in an int data format
*/
int main() {}
