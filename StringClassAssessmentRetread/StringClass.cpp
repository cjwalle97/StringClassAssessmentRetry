#include <iostream>
#include "ClassHeader.h"
My_String::My_String()
{

}
//Name: Length
//Type: int
//Description: to find the length of the String
int My_String::Length()
{

	int i = 0;
	//for loops can be thought of as "do a thing "as long as a condition is true""
	for (; m_name[i] != '\0'; i++)
	{

	}
	return i;
}

//Name: FindIndex
//Type: char
//Description: find the index that was inputed by the user
char My_String::FindIndex(int i)
{
	if (i <= Length() && i >= 0)
		return m_name[i];
}
//Name: Compare
//Type: bool
//Description: to compare one string to another.

bool My_String::Compare(My_String s)
{
	if (Length() != s.Length())
		return false;
	for (int i = 0; s.m_name[i] != '\0'; i++)
	{
		if (s.m_name[i] != m_name[i])
		{
			return false;
		}
	}
	return true;
}
//Name: Append
//Type:void
//Description: to place another string in front of the main string
void My_String::Append(My_String s)
{
	char Array[255];
	for (int i = 0; i < Length(); i++)
	{
		Array[i] = m_name[i];
	}
	int secondCount = 0;
	for (int i = Length(); i < s.Length() + Length(); i++)
	{
		Array[i] = s.m_name[secondCount];
		secondCount++;
	}
	Array[Length() + s.Length()] = '\0';
}
//Name Prepend
//Type: void
//Description: to place another string behind the main string
void My_String::Prepend(My_String s)
{
	char Array[255];
	for (int i = 0; i < s.Length(); i++)
	{
		Array[i] = s.m_name[i];
	}
	int SecondCount = 0;
	for (int i = Length(); i < Length() + s.Length(); i++)
	{
		Array[i] = m_name[SecondCount];
		SecondCount++;
	}
	Array[Length() + s.Length()] = '\0';
}
//Name: Cstyle
//Type: const char
//Description: return the string as a basic constant string Cstyle string
const char* My_String::Cstyle()
{
	const char* CString = m_name;
	return CString;
}
//Name: Uppercase
//Type: String
//Description: to change all the letters in a string to uppercase
My_String My_String::Uppercase()
{
	char UpperString[255];
	for (int i = 0; i < Length(); i++)
	{
		UpperString[i] = m_name[i];
		if (m_name[i] > 90)
			UpperString[i] -= 32;
	}
	UpperString[Length()] = '\0';
	return UpperString;
}
//Name: Lowercase
//Type: String
//Description: to change all the letters in a string to lowercase
My_String My_String::Lowercase()
{
	char LowerString[255];
	for (int i = 0; i < Length(); i++)
	{
		LowerString[i] = m_name[i];
		if (m_name[i] < 97)
			LowerString[i] += 32;
	}
	LowerString[Length()] = '\0';
	return LowerString;
}
//Name: SubString
//Type: bool
//Description: to check if there is a sub string inside the main string
bool My_String::SubString(My_String string)
{
	for (int i = 0; i < Length(); i++)
	{
		if (m_name[i] == string)
		{
			return true;
		}
	}
	return true;
}
//Name: SubStringIndex
//Type: bool
//Description: to check and see if there is a substring in a certain index of the main string
bool My_String::SubStringIndex(My_String string, int s)
{
	if (m_name[s] == string)
	{
		return true;
	}
	return false;
}
//Name: ReplaceSub
//Type: void
//Description: to replace the substring with another string
void My_String::ReplaceSub(My_String SubString, My_String Replacement)
{
	char changer;
	for (int i = 0; i < Length(); i++)
	{
		if (m_name[i] == SubString)
		{
			SubString = Replacement;
			
		}
	}
}