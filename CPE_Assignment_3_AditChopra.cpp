/*
Author - Adit Chopra
Date created- 8 November, 2021
Assignment 3: Concordance of a Text File
ENGR-UH-1000 Computer Programming for Engineers
Problem:
Our objective is to develop a program which accepts a text file's name from the user and processes it to produce a concordance: an alphabetical listing of unique words and 
their frequency in the text file. This is stored in an output file and is displayed on output screen.
*/

// Including all the important header files
#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>

// Using standard namespace
using namespace std;

// Declaring the function prototypes
int Number_of_Words(string fileuser);
string* Words_Array(string fileuser, int number);
string lowercase(string arr);
void sortAlpha(int number, string*& arr);
void wordCounter(string*& arr, int number);

// Main Function
int main() 
{
	// Declaring double variable "number"
	double number; 
	
	// Declaring filename as string variable
	string fileuser;  
	
	// Opening a file in input stream
	ifstream DataFile; 
	
	// Declare string pointer "arr"
	string* arr; 

	// Taking input the name of file and storing it in fileName
	cout << "Enter name of file: ";
	cin >> fileuser;
	
	// Opening the file
	DataFile.open(fileuser.c_str());
	if (DataFile.fail())
	{
		// Printing the error message
		cerr << "File not found";
		// Exiting the program as file is not found
		exit(1);
	}
	else
	{
		// Printing a confirmation message that the file is found
		cout<<"File Found"<<endl;
	}
	
	// Closing the file
	DataFile.close();	
	
	// Now calling different functions for different purposes
	number=Number_of_Words(fileuser); // For Finding the number of words
	arr=Words_Array(fileuser, number); // For Storing words into dynamic array arr
	
	// Calling our defined function lowercase to lowercase all strings
	for (int j=0; j<number; j++)
	{
		arr[j] = lowercase(arr[j]); 
	}
	
	sortAlpha(number, arr); // For Sorting words alphabetically and converting them to lower case simultaneously
	wordCounter(arr, number); // For finding and printing individual frequencies for each unique word
	return 0;
}

// Defining a function which finds the toal number of words in a text file
int Number_of_Words(string fileuser)
{
	// Opening a file in input stream
	ifstream myFile;
	myFile.open(fileuser.c_str());
	
	// Declaring a string variable and a character variable "temp" and "not_an_alphabet" 
	string temp; 
	char not_an_alphabet;
	
	// Declaring an integer variable "iterator"
	int iterator=0;
	
	// Declaring word as a string variable
	string word;
	
	// Running a while loop until we don't reach our end of input file
	while (!myFile.eof()) 
	{
		not_an_alphabet = myFile.get(); 
		if (isalpha(not_an_alphabet)) 
		{ 
		// Using isalpha function to remove non-alphabetical characters
			while (isalpha(not_an_alphabet)) 
			{ 
				word=word+not_an_alphabet;
				not_an_alphabet=myFile.get();	
			}
			// Storing the words in temp variable
			temp = word;
			// Incrementing the iterator for every word found
			iterator++;
		}
	}
	// Closing the file
	myFile.close();
	
	// returning the iterator, which actually has the number of words
	return iterator;
}

// Defining a function to store words in an array and its parameters
string* Words_Array(string fileuser, int number) 
{
	// Opening a file in input stream
	ifstream myFile; 
	myFile.open(fileuser.c_str()); 
	
	// Declaring string variable temp
	string temp; 
	
	// Declaring character variable not_an_alphabet 
	char not_an_alphabet; 
	
	// Declaring a string type dynamic array arr 
	string* arr=new string[number];
	
	// Declaring pointer arrAddress as string that points to arr  
	string* arrAddress=arr; 
	
	// Running a while loop until end of file is not reached
	while (!myFile.eof())
	{
		// Declare word as string
		string word;
		not_an_alphabet=myFile.get();
		
		// If not_an_alphabet is an alphabet, then it is stored into the dynamic array
		if (isalpha(not_an_alphabet)) 
		{ 
			// Using isalpha function to remove non-alphabetical characters
			while (isalpha(not_an_alphabet)) 
			{
				word=word+not_an_alphabet;
				not_an_alphabet=myFile.get();
			}
			// Storing word in temp
			temp = word;
			// Storing each word into arr
			*arr = word;
			// Incrementing the array size
			arr++; 
		}
	}
	// Closing the file
	myFile.close();
	
	// Returning the address of array
	return arrAddress; 
}

// Defining a function to convert strings into lowercase 
string lowercase (string arr)
{
	// Declare string variable lower_Case
	string lower_Case; 
	for (int i=0; i<arr.length(); i++) 
	{	
		// Using tolower function to lowercase each word in dynamic array arr
		lower_Case+=tolower(arr[i]); 
	} 
	return lower_Case;
}

// Defining a function to sort the array having lower case words, into alphabetical order 
void sortAlpha(int number, string*& arr) 
{ 
	// Declaring a string variable "temp"
	string temp;

	// We use bubble sorting algorithm to sort the words in the string
	for (int i=0; i<number; i++) 
	{
		for (int j=0; j<number-1; j++) 
		{
			if (arr[j]>arr[j+1]) 
			{
				// Exchanging the two values in arr[j] and arr[j+1] using a third variable temp
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			} 
		}
	}
}

// Defining a function which counts the frequency of each unique word
void wordCounter(string*& arr, int number)
{
	// Declaring a string variable "out_file" which stores the name of the file we want to output our data into
	string out_file;
	
	// Taking input the name of the output file from user
	cout<<"Enter the name of output file: ";
	cin>>out_file;
	
	// Opening a file in output stream
	ofstream Datafile; 
	Datafile.open(out_file.c_str());
	
	// Declare an integer variable "frequency" and set it equal to 1
	int frequency=1;
	
	// Declare a string variable "word"
	string word; 
	
	// Declare an integer variable "same_word" and set it to 0
	int same_word=0; 
	
	// Declaring a dynamic array which stores the unique words from the original sorted and lowercase array "arr"
	string* unique_word; 
	unique_word=new string[number];
	
	// Declaring dynamic array frequencies_word to store frequency of unique words
	int* frequencies_word=new int[number];
	
	// Declare an integer variable "index" and set it equal to 0 (This acts the iterator for the unique_word and frequency array
	int index=0; 
	
	// Running a loop until we don't reach the end of array which has the number of elements stored in "number"
	for (int i=0; i<number; i++) 
	{
		// Putting the value of the ith value of array arr in variable word
		word=arr[i];
		
		// Putting the condition if the (i+1)th term is equal to "word", then the frequency increments by 1
		if (word==arr[i+1])
		{
			same_word=1;
			frequency++;
		}
		else 
		{
			same_word=0;
		}
		
		// Code which runs if sameWord is True
		if (same_word==1)
		{
			continue;
		}
		
		// If we reach the end of same unique word, we store the word in a new dynamic array, unique_word and frequencies_word
		else
		{
			unique_word[index]=word;
			frequencies_word[index]=frequency; 
			
			// Resetting the frequency to 1 after assign task is completed
			frequency=1;
			
			// Incrementing the variable "index" by 1
			index++;
		}
	}
	
	// Making the table for Concordance of list in file and output screen
	cout <<"Concordance: "<<endl; 
	
	// Outputting the data in file
	for (int i=0; i<index; i++)
	{
		cout<<unique_word[i]<<"\t"<<frequencies_word[i]<<endl; 
		Datafile<<unique_word[i]<<"\t"<<frequencies_word[i]<<endl;
	}
}