#pragma once
class My_String
{
private:
	char *m_name;
public:
	My_String();
	My_String(char *n) {
		m_name = n;
	}
	int Length();
	char FindIndex(int i);
	bool Compare(My_String s);
	void Append(My_String s);
	void Prepend(My_String s);
	const char* Cstyle();
	My_String Uppercase();
	My_String Lowercase();
	bool SubString(char string);
	bool SubStringIndex(char string, int s);
	void ReplaceSub(char SubString, char Replacement);
};