#include<iostream>
using namespace std;

int myStrSearch(char str[], char ss[]);

int main()
{
	char str[80],str2[80], word[10];
	
	int length = 0;

	std::cout << "Enter the string: ";
	cin.get(str, 80,'\n');

	std::cout << "Enter word to delete: ";
	cin.ignore(3, '\n');
	cin.get(word, 10);
    
	
	int result = myStrSearch(str, word);
	if (result == -1)
		std::cout << "Not found" << endl;
	else
		std::cout << "Found at index: " << result;
	std::cout << "\n\n";
	
	for (int i = 0; word[i] != '\0'; i++)
		length++;

	int i = 0, j = 0;
	for (i = 0; i < result; i++,j++)
	{
		str2[j] = str[i];
		str2[j + 1] = '\0';
		if (i == result-1)
			break;
	}
	
	i += length + 1;
	

	if (str[i] == ' ')
	{
		
		for (; str[i] != '\0'; i++, j++)
		{
			str2[j] = str[i];
			str2[j + 1] = '\0';
		}
	}

	
	std::cout << "String after: " << str2 << endl;
	std:: system("pause");
	return 0;
}

int myStrSearch(char str[],char ss[])
{
	int temp = 0;
	int i = 0, j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ss[j])
		{
			temp = i;
			while (str[i] == ss[j])
			{
				i++;
				j++;
				if (ss[j] == '\0')
					return temp;
			}
		}
		j = 0;
	}
	return -1;
}
