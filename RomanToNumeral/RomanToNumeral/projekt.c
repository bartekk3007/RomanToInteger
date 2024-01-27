#include <stdio.h>

int wartoscznaku(char litera)
{
	switch (litera)
	{
	case 'I':
		return 1;
		break;
	case 'V':
		return 5;
		break;
	case 'X':
		return 10;
		break;
	case 'L':
		return 50;
		break;
	case 'C':
		return 100;
		break;
	case 'D':
		return 500;
		break;
	case 'M':
		return 1000;
		break;
	default:
		return 0;
		break;
	}
}

int znakspecjalny(char* s, int i)
{
	if (s[i] == 'C' && s[i + 1] == 'M')
	{
		return 900;
	}
	else if (s[i] == 'C' && s[i + 1] == 'D')
	{
		return 400;
	}
	else if (s[i] == 'X' && s[i + 1] == 'C')
	{
		return 90;
	}
	else if (s[i] == 'X' && s[i + 1] == 'L')
	{
		return 40;
	}
	else if (s[i] == 'I' && s[i + 1] == 'X')
	{
		return 9;
	}
	else if (s[i] == 'I' && s[i + 1] == 'V')
	{
		return 4;
	}
	else
	{
		return 0;
	}
}

int romanToInt(char* s)
{
	int suma;
	suma = 0;
	for (int i = 0; s[i] != 0; i++)
	{
		if (znakspecjalny(s, i) > 0)
		{
			suma += znakspecjalny(s, i);
			i++;
		}
		else
		{
			suma += wartoscznaku(s[i]);
		}
	}
	return suma;
}

int main()
{
	char* rzymski = "CMXCIX";
	
	int wynik;
	wynik = romanToInt(rzymski);

	printf("%d", wynik);

	return 0;
}