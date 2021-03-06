// Project1-Test.cpp: This file contains the 'main' function. Program execution begins and ends there.
//

#include "gtest/gtest.h"
#include "../main.h"
#include <string>

using namespace std;


TEST(begin_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "begin";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(end_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "end";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(if_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "if";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(then_rw_type_test_case, token_type_test)
{
	string test_Token;	//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "then";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(for_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "for";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(while_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "while";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(print_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "print";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(int_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "int";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(float_rw_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "float";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "reserved word");
}

TEST(dot_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = ".";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "math operator");
}

TEST(add_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "+";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "math operator");
}

TEST(subtract_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "-";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "math operator");
}

TEST(multiply_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "*";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "math operator");
}

TEST(divide_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "/";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "math operator");
}

TEST(equal_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "=";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "math operator");
}

TEST(greaterthan_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = ">";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "comparison operator");
}

TEST(lessthan_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "<";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "comparison operator");
}

TEST(greaterthaneq_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = ">=";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "comparison operator");
}

TEST(lessthaneq_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "<=";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "comparison operator");
}

TEST(leftshift_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "<<";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "shift operator");
}

TEST(rightshift_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = ">>";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "shift operator");
}

TEST(lcurly_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "{";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "grouping operator");
}

TEST(rcurly_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "}";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "grouping operator");
}

TEST(curly_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "{}";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "grouping operator");
}

TEST(lbracket_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "[";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "grouping operator");
}

TEST(rbracket_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "]";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "grouping operator");
}

TEST(bracket_type_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "[]";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "grouping operator");
}

TEST(identifier_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "result";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "identifier");
}

TEST(integer_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "7516";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "integer");
}

TEST(float_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "9798.178";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "float");
}

TEST(ERROR0_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "hello!world";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "ERROR CODE 0: Lexical error: invalid character found in token");
}

TEST(ERROR1_test_case, token_type_test)
{
	string test_Token;		//string to hold one token at a time
	string test_Type;		//string to hold the token type
	test_Token = "9798.1.78";
	test_Type = tokenType(test_Token);
	EXPECT_EQ(test_Type, "ERROR CODE 1: Lexical error: token not valid in language");
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
