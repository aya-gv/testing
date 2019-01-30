#include "main.h"

/*int main()
{
	char fileName[80];	//character array that holds the input file name
	string myToken;		//string to hold one token at a time
	char x;				//character to hold one input character at a time
	string myString;	//string to convert char x into a string
	string myType;		//string to hold the token type

	cout << "File name: ";
	cin >> fileName;	//get the input file name
	cin.ignore(1, '\n'); //eat the newline after the file name

	ifstream fin(fileName);	//open the file
	if (!fin) {	 //print error message if ifstream could not open file
		cerr << "Error, cannot open file" << endl; //output error message
		return 0; //exit
	}

	ofstream fout("output.txt"); //open a file named Output.txt
	if (!fout) {  //print error message if ofstream could not open file
		cerr << "Error, cannot open file" << endl; //output an error message
		return 0; //exit
	}

	while (fin.get(x)) //read the input one character at a time
	{
		if (x == ' ' || x == '\n' || x == '\t') //check for a whitespace character
		{
			if (!myToken.empty()) //if we have a token,
			{
				myType = tokenType(myToken); //get the token's type
				fout << myToken << "\t" << myType << endl;	//print token and it's type
				myToken.clear(); //clear the token for a new token
			}
		}
		else
		{
			myString = x;
			myToken.append(myString); //build the token
		}
	}

	if (!myToken.empty()) //check the last token
	{
		myType = tokenType(myToken);
		fout << myToken << "\t" << myType << endl;
	}

	fin.close(); //close the input file

	fout.close(); //close the file
	system("pause");
	return 0;
}*/

string tokenType(string token)
{
	string tempType = "";

	if (token == "begin" || token == "end" || token == "if" || token == "then" ||
		token == "for" || token == "while" || token == "print" || token == "int" ||
		token == "float")
		return "reserved word"; //break out of the function, the type is reserved word
	else if (token == "." || token == "+" || token == "-" || token == "*" ||
		token == "/" || token == "=")
		return "math operator"; //break out of the function, the type is math op
	else if (token == ">" || token == "<" || token == ">=" || token == "<=")
		return "comparison operator"; //break out of the function, the type is comparison op
	else if (token == "<<" || token == ">>")
		return "shift operator"; //break out of the function, the type is shift op
	else if (token == "{" || token == "}" || token == "{}" || token == "[" ||
		token == "]" || token == "[]")
		return "grouping operator"; //break out of the function, the type is grouping op
	else
	{
		for (int i = 0; i < token.length(); i++) //let's search the whole string one time through
		{
			//check if there is an invalid character not part of the language alphabet
			if (token[i] != 42 && token[i] != 43 && token[i] != 93 && token[i] != 125 &&			// *, +, ], }
				!(token[i] >= 45 && token[i] <= 57) && !(token[i] >= 60 && token[i] <= 62) &&	// -, ., /, 0-9, <, =, >
				!(token[i] >= 65 && token[i] <= 91) && !(token[i] >= 97 && token[i] <= 123))	// A-Z, [, a-z, {
			{
				return "ERROR CODE 0: Lexical error: invalid character found in token";
			}
		}

		//if there are no INVALID characters, let's check the string again:

		if (token[0] >= 48 && token[0] <= 57) //if the first character is [0-9],
		{
			tempType = "integer"; //let's assume it's an integer

			for (int i = 1; i < token.length(); i++)
			{
				if (!(token[i] >= 48 && token[i] <= 57)) //if we find a character not [0-9]...
				{
					if (token[i] == 46) //if we run into a decimal, it might be a float
					{
						if (tempType == "float") //what if we run into another decimal? error 1
							return "ERROR CODE 1: Lexical error: token not valid in language";
						else
							tempType = "float"; //if we run into only one decimal, it's a float
					}
					else //if we run into any other character, it's an invalid token
					{
						return "ERROR CODE 1: Lexical error: token not valid in language";
					}
				}
			}
		}
		else if (token[0] == 46) //if the first character is a decimal
		{
			tempType = "float"; //let's assume it's a float

			for (int i = 1; i < token.length(); i++) //let's check the rest of the characters
			{
				if (!(token[i] >= 48 && token[i] <= 57)) //if we find a character not [0-9] -> error 1
				{
					return "ERROR CODE 1: Lexical error: token not valid in language";
				}
			}
		}
		else if ((token[0] >= 65 && token[0] <= 90) || (token[0] >= 97 && token[0] <= 122))
		{//if the first charater is [A-Z] or [a-z],
			tempType = "identifier"; //let's assume it's an identifier

			for (int i = 1; i < token.length(); i++) //let's check the rest of the characters
			{
				if (!(token[i] >= 65 && token[i] <= 90) && !(token[i] >= 97 && token[i] <= 122)
					&& !(token[i] >= 48 && token[i] <= 57))
				{//if we find a character not [A-Z], [a-Z], or [0-9] -> error 1
					return "ERROR CODE 1: Lexical error: token not valid in language";
				}
			}
		}
		else //if the first character is not [A-Z], [a-Z], [0-9], or a decimal -> error 1
		{
			return "ERROR CODE 1: Lexical error: token not valid in language";
		}

	}
	return tempType;
}

