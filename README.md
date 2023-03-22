# Computer-Engineering-Case-Study

## 1) Problem Statement and Identification
The objective is to develop a program which accepts a text file's name from the user and processes it. If the file is not found, then it prints an error message, else it proceeds to produce a concordance: an alphabetical listing of unique words and their respective frequencies in the text file. This is stored in an output file and is also displayed on the output screen.

## 2) Gathering Information and Input Output Description
### Relevant Information
Whenever on a search engine we perform search operations, the search engine analyses various web pages and gives us the webpages which matches best with our search. This is done by retrieving the most important information in a text document. A concordance of a text file is an alphabetical list of the unique words in the text file in which all the punctuation and other non-alphabetic symbols are ignored.
Concordance can be used for various purposes:

1) Web Search: A search engine analyzes Web pages to determine whether their content agrees with our search criteria.
2) Analysis of Literary Texts: Concordance programs have been used in literary and mostly religious text analysis for decades. They aim to count and define the frequency and function of a word or word groups in a given text. The aim is to give an inductive understanding of the word/structure and its use in authentic texts (ref: The Use of Concordancing programs in ELT).
3) Use in Classrooms: Another advantage of concordancing is that it aims to bridge the gap between learners’ current language ability and expected ability (Sun, 2007). This is done by giving the authentic texts to students and while analyzing them they will focus on the structures or words which the teacher directs them (ref: The Use of Concordancing programs in ELT).

A crucial step in creating a concordance is tokenizing the string into individual words. String tokenization is the process of separating a string into its constituent pieces. Each component is termed a token (ref: Developer.com). This is accomplished by examining each character of the string for delimiters such as spaces, punctuation, and all non-alphanumeric characters. The alphabetical letters are transformed to lowercase and then joined to make words. When a delimiter character is encountered, the string is divided into words. This is how the string is divided into numerous words and non-alphanumeric characters are eliminated.
Arranging the list of words alphabetically is a crucial step in creating a concordance. This is accomplished by use sorting algorithms such as selection sort, bubble sort, and so on. 
The last stage in generating a concordance is saving the unique terms and their frequencies from the list. This is accomplished by sifting through the collection of strings, selecting unique terms, and keeping track of their frequency (since unique words occur together in an alphabetically sorted list).

### Input Output Description
For input we read data in a text file and store it in a dynamic array. If the file doesn’t exist, an error message is shown, otherwise, it shows After a series of operations, all delimiters are removed and all lowercase unique words are printed alongside with their respective frequencies on the output screen and into another file which is created by the user. 

The following explains how the program executes:\
Enter the name of the input file\
abc.txt\
Enter the name of the output file\
xyz.txt

The following explains how the program executes.\

Enter name of file: Second_test.txt (User enters name of input file)\
_File Found_ (Printing the confirmation message that file is found)\

Contents of file: 
London Bridge is falling down,
Falling down, falling down,
London Bridge is falling down,
My fair Lady.

Build it up with wood and clay,
Wood and clay, wood and clay,
Build it up with wood and clay,
My fair Lady.

Wood and clay will wash away,
Wash away, wash away,
Wood and clay will wash away,
My fair Lady.

Enter the name of output file: Output_2.txt\
