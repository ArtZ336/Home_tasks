void Stack::Check_Bracket()             
{
	unsigned char c;
	br_o = 0;
	for (int i = 0; i < top; i++)
	{
		c = st[i];
		if (c == '(' || c == '{' || c == '[') 
		{
			std::cout << c;
			bracket_open[br_o++] = c;
		}
		else if (c == ')') 
		{
			if (bracket_open[br_o - 1] != '(') 
			{
				while (bracket_open[br_o - 1] != '(')
					--br_o;
				if (br_o < 0)
				{
					std::cout << "\nОшибка! Скобка закрыта неправильно\n";
					break; 
				}
			}
			if (br_o >= 0) 
			{
				--br_o;
				std::cout << c;
			}
			else break;
		}
		else if (c == '}') 
		{
			if (bracket_open[br_o - 1] != '{') 
			{
				while (bracket_open[br_o - 1] != '{')
					--br_o;
				if (br_o < 0) 
				{ 
					std::cout << "\nОшибка! Скобка закрыта неправильно\n";
					break; 
				}
			}
			if (br_o >= 0) 
			{
				--br_o;
				std::cout << c;
			}
			else break;
		}
		else if (c == ']') 
		{
			if (bracket_open[br_o - 1] != '[') 
			{
				while (bracket_open[br_o - 1] != '[')
					--br_o;
				if (br_o < 0) 
				{
					std::cout << "\nОшибка! Скобка закрыта неправильно\n";
					break;
				}
			}
			if (br_o >= 0)
			{
				--br_o;
				std::cout << c;
			}
			else break;
		}
}
