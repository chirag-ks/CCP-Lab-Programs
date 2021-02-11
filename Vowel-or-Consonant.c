// WAP to check entered character is a vowel or a consonant.

#include<stdio.h>
#include<conio.h>

void check(char);
void main ()
{
  char character;
  printf("\nEnter any alphabet \n");
  scanf("%c", &character);
  check(character);
  getch();
}
void check(char ch)
{
  switch(ch)
  {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    printf("The Alphabet %c is a Vowel.",ch);
    break;
    default:
        printf("The Alphabet %c is a Consonant.",ch);
  }
getch();
}
