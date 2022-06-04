#include <iostream>

using namespace std;

int main()
{
    /*  This is a multi-line comment
        You can use this for multiple lines of text
        to describe a function etc.  */

    // This is a single-line comment for more brief descriptions...


    /*Character for a singular character*/
    char grade = 'A';

    /*String for multiple characters*/
    string phrase = "Giraffe Academy";

    /*Int for integers*/
    int age = 50;

    /*Float for decimals*/
    float pda = 5.5;

    /*Double for MORE decimals*/
    double gpa = 2.3456;

    /*Boolean for TRUE or FALSE*/
    bool isMale = true;

    /*Print a string, can be a constant OR a variable*/
    //cout << grade << endl;

    /*Put \n within a string to start a new line.*/
    //cout << "Testing new lines \nTesting new line 2" << endl;

    /*Print a strings length*/
    //cout << phrase.length();

    /*Print a specific character in a string -> STARTS AT 0 NOT 1*/
    //cout << phrase[2];

    /*Assign a new character in a string*/
    //phrase[0] = 'B';
    //cout << phrase;

    /*Find where a phrase starts within a string
        in "Giraffe Academy", "Academy" starts at
        the 8th index position in the string.*/
    //cout << phrase.find("Academy", 0);

    /*Finding a specific part of a string.
      First variable is where the string print starts
      Second variable is how much of the string
      is to be printed after that point.*/
    //cout << phrase.substr(8, 3);

    /* You can store the substring as a new variable
       and print it somewhere else in the program */
    //string phrasesub;
    //phrasesub = phrase.substr(8, 3);
    //cout << phrasesub;

    return 0;
}
