#include <iostream>
#include "ClassHeader.h"
#include <cassert>

int main()
{
	My_String ms = My_String("Chad");
	My_String check = My_String("Bob");
	ms.Length();
	ms.FindIndex(2);
	assert(ms.Compare("Bob") == false);
	ms.Append(check);
	ms.Prepend(check);
	assert(ms.Cstyle());
	ms.Uppercase();
	ms.Lowercase();
	assert(ms.SubString('a') == true);
	assert(ms.SubStringIndex('a', 2) == true);
	ms.ReplaceSub('a', 'e');
	system("pause");
}