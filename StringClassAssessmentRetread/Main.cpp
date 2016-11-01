#include <iostream>
#include "ClassHeader.h"
#include <cassert>

int main()
{
	My_String ms = My_String("Chad");
	My_String check = My_String("Bob");
	assert(ms.Length() == 4);
	assert(ms.FindIndex(2) == 'a');
	assert(ms.Compare("Bob") == false);
	ms.Append(check);
	ms.Prepend(check);
	assert(ms.Cstyle());
	ms.Uppercase();
	ms.Lowercase();
	ms.SubString('a');
	ms.SubStringIndex('a', 2);
	ms.ReplaceSub('a', 'e');
	system("pause");
}