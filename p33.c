//  Design anagram game using array.
// • Allow a user to enter N words and store it in an array.
// • Generate a random number between 0 to N-1.
// • Based on the random number generated display the word stored at that
// index of an array and allow user to enter its anagram.
// • Check whether the word entered by the user is an anagram of displayed
// number or not and display an appropriate message.
// • Given a word A and word B. B is said to be an anagram of A if and only if
// the characters present in B is same as characters present in A,
// irrespective of their sequence. For ex: “LISTEN” == “SILENT”

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
   // using findlength function lenth majourment
    int findlength(char word[])
    {
        int i = 0;
        while (word[i] != '\0')
        {
            i++;
        }
        return i;
    }

void sortString(char str[])
    {
        int i, j, len;
        char temp;
        len = findlength(str);
        for (i = 0; i < len - 1; i++)
        {
            for (j = i + 1; j < len; j++)
            {
                if (str[i] > str[j])
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }

void main()
{
    int n;
    char arr1[100];
    printf("Enter the number of words n:");
    scanf("%d", &n);
    char arr[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("enter the word ");
        scanf("%s", &arr[i]);
    }
    // to find random word from given words
    srand(time(NULL));
    int randomIndex = rand() % n;
    printf("Random word: %s\n", arr[randomIndex]);

    printf("Enter the anagram on this word: ");
    scanf("%s", arr1);

 
    int arr1length = findlength(arr1);
    int randomwordlength = findlength(arr[randomIndex]);

    if ( arr1length != randomwordlength)
    {
        printf("given word in not an anagram");
        return;
    }

    sortString(arr1);     
    sortString(arr[randomIndex]);
    
    
}