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

The following explains how the program executes.

Enter name of file: Second_test.txt (User enters name of input file)\
_File Found_ (Printing the confirmation message that file is found)

Contents of file:\
London Bridge is falling down,\
Falling down, falling down,\
London Bridge is falling down,\
My fair Lady.

Build it up with wood and clay,\
Wood and clay, wood and clay,\
Build it up with wood and clay,\
My fair Lady.

Wood and clay will wash away,\
Wash away, wash away,\
Wood and clay will wash away,\
My fair Lady.

Enter the name of output file: Output_2.txt

Contents of Output_2.txt\
and   6\
away  4\
bridge  2\
build	 2\
clay  6\
down	4\
fair	3\
falling	 4\
is	2\
it	2\
lady	3\
london	2\
my	3\
up	2\
wash	4\
will	2\
with	2\
wood	6

## Test Cases
### Test Case 1: Text with Special Characters and lot of unnecessary punctuation
Contents of File:/ 
"ApPle@ baLL Cat dog cAt#Apple.dog.wiN"

Expected Output is:\
apple	2\
ball	1\
cat	2\
dog	2\
win	1

### Test Case 2: Input File Doesn't Exist
Contents of File:\
No File of that name

Expected Output is:\
File not found

### Test Case 3: Text in form of a Paragraph
Contents of File:/ 
"Last week we installed a kitty door so that our cat could come and go as she pleases. Unfortunately, we ran into a problem. Our cat was afraid to use the kitty door. We tried pushing her through, and that caused her to be even more afraid. The kitty door was dark, and she couldn’t see what was on the other side. The first step we took in solving this problem was taping the kitty door open. After a couple of days, she was confidently coming and going through the open door. However, when we removed the tape and closed the door, once again, she would not go through. They say you catch more bees with honey, so we decided to use food as bait. We would sit next to the kitty door with a can of wet food and click the top of the can. When kitty came through the closed door, we would open the can and feed her. It took five days of doing this to make her unafraid of using the kitty door."

Expected Output is:\
a	4\
afraid	2\
after	1\
again	1\
and	7\
as	2\
bait	1\
be	1\
bees	1\
came	1\
can	3\
cat	2\
catch	1\
caused	1\
click	1\
closed	2\
come	1\
coming	1\
confidently	1\
could	1\
couldn	1\
couple	1\
dark	1\
days	2\
decided	1\
doing	1\
door	9\
even	1\
feed	1\
first	1\
five	1\
food	2\
go	2\
going	1\
her	4\
honey	1\
however	1\
in	1\
installed	1\
into	1\
it	1\
kitty	7\
last	1\
make	1\
more	2\
next	1\
not	1\
of	5\
on	1\
once	1\
open	3\
other	1\
our	2\
pleases	1\
problem	2\
pushing	1\
ran	1\
removed	1\
say	1\
see	1\
she	4\
side	1\
sit	1\
so	2\
solving	1\
step	1\
t	1\
tape	1\
taping	1\
that	2\
the	14\
they	1\
this	2\
through	4\
to	5\
took	2\
top	1\
tried	1\
unafraid	1\
unfortunately	1\
use	2\
using	1\
was	5\
we	8\
week	1\
wet	1\
what	1\
when	2\
with	2\
would	3\
you	1

## User Guide
The program helps to find out the one of the most important aspect in a text file, which is it's Concordance. It will also prompt the user to provide the name
of the output file. The program will then print the concordance list in the output file and provide the user with a confirmation of the same.
