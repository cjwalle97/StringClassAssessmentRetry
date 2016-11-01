#include <iostream>
#include "ClassHeader.h"
#include <cassert>

int main()
{
	My_String ms = My_String("Chad");
	My_String check = My_String("Bob");
	My_String Sub = My_String("a");
	My_String Replace = My_String("E");
	ms.Length();
	ms.FindIndex(2);
	assert(ms.Compare("Bob") == false);
	ms.Append(check);
	ms.Prepend(check);
	assert(ms.Cstyle());
	ms.Uppercase();
	ms.Lowercase();
	assert(ms.SubString(Sub) == true);
	assert(ms.SubStringIndex(Sub, 2) == true);
	ms.ReplaceSub(Sub, Replace);
	system("pause");
}