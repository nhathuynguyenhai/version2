#include <stdio.h>
#include <string.h>
#include <conio.h>

char *str_str (char *s, char *s1, char *s2)
{
	int len = strlen (s);
	int len1 = strlen (s1);
	int len2 = strlen (s2);
	int i = 0, j, luu;
	if (len1 != 0)
		while (i < len)
		{
			if (s[i] == s1[0])
			{
				j = 0;
				luu = i;
				while (s1[++j] == s[++luu] && j < len1);
				if (j == len1)
				{
					memmove (&s[i + len2], &s[i + len1], len - i - len1 + 1);
					memcpy (&s[i], s2, strlen(s2));
					len = len - len1 + len2;
					i += len2;
				}
				else i++;
			} else i++;
		}
		return s;
}

int main()
{
	char s[255], s1[50], s2[50];
	printf ("\nNhap chuoi cha: ");
	gets (s);
	printf ("\nNhap chuoi can tim: ");
	gets (s1);
	printf ("\nNhap chuoi thay the: ");
	gets (s2);
	str_str (s,s1,s2);
	printf ("\nchuoi sau khi thay the la: %s", s);
	getch();
}
