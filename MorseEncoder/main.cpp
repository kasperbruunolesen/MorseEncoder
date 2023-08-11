// Morse encoder
// Written by Kasper Bruun Olesen

#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>

using namespace std;

/**
 * Linked list containing an encoded letter (and address to the next letter).
 */
typedef struct LetterStruct* Letter;
struct LetterStruct
{
    char *letter;
    Letter next {};
};

/**
 * Encode chars to their quivalent morse code.
 *
 * @param ULetter One ASCII char.
 * @return pointer to a null-terminated char array containing the morse code.
 */
char* encode(char ULetter)
{
    char* encodedLetter;
    switch(ULetter)
    {
        case 'a': {
            char temp[] = ".-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'b': {
            char temp[] = "-...";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'c': {
            char temp[] = "-.-.";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'd': {
            char temp[] = "-..";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'e': {
            char temp[] = ".";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'f': {
            char temp[] = "..-.";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'g': {
            char temp[] = "--.";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'h': {
            char temp[] = "....";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'i': {
            char temp[] = "..";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'j': {
            char temp[] = ".---";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'k': {
            char temp[] = "-.-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'l': {
            char temp[] = ".-..";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'm': {
            char temp[] = "--";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'n': {
            char temp[] = "-.";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'o': {
            char temp[] = "---";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'p': {
            char temp[] = ".--.";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'q': {
            char temp[] = "--.-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'r': {
            char temp[] = ".-.";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 's': {
            char temp[] = "...";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 't': {
            char temp[] = "-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'u': {
            char temp[] = "..-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'v': {
            char temp[] = "...-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'w': {
            char temp[] = ".--";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'x': {
            char temp[] = "-..-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'y': {
            char temp[] = "-.--";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case 'z': {
            char temp[] = "--..";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '1': {
            char temp[] = ".----";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '2': {
            char temp[] = "..---";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '3': {
            char temp[] = "...--";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '4': {
            char temp[] = "....-";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '5': {
            char temp[] = ".....";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '6': {
            char temp[] = "-....";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '7': {
            char temp[] = "--...";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '8': {
            char temp[] = "---..";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '9': {
            char temp[] = "----.";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case '0': {
            char temp[] = "-----";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        case ' ': {
            char temp[] = "   ";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        break;
        }
        default: {
            char temp[] = "N/A";
            encodedLetter = (char*) malloc(sizeof(temp));
            strcpy(encodedLetter, temp);
        }
    }
    return encodedLetter;
}

/**
 * Add letter to linked list.
 *
 * @param ULetter Char to be added
 * @param previousLetter pointer to the previously added letter (defaults to NULL pointer, i.e. can be used to initialize linked list)
 * @return A pointer to a the added letter
 */
Letter addLetter(char ULetter, Letter previousLetter = {}) // ULetter = unencoded letter, ascii
{
    Letter newLetter = (Letter) malloc(sizeof(Letter));
    newLetter->letter = encode(ULetter);
    newLetter->next = previousLetter;
    return newLetter;
}

/**
 * Print out the full linked list.
 *
 * @param myLetter Pointer to the linked list to be read.
 */
void printSentence(Letter myLetter)
{
    Letter tmp;
    bool running = 1;
    while(running)
    {
        if(myLetter)
        {
            tmp = myLetter->next;
            printf("%s ", myLetter->letter);
            if(myLetter->next == NULL)
            {
                running = 0;
                printf("\n");
            }
            myLetter = tmp;
        }
    }
}

/**
 * Delete linked list
 *
 * @param myLetter Pointer to the linked list to be deleted.
 * @return A void pointer such that a new linked list can be created.
 */
Letter deleteAll (Letter myLetter)
{
    Letter tmpNext = myLetter->next;
        while(myLetter)
        {
            free(myLetter);
            myLetter = tmpNext;
            if(tmpNext) // If tmpNext is already null, we are done
            tmpNext = myLetter->next;
        }
    return {};
}
    
int main(void)
{
    Letter myLetter {};
    while(1)
    {
        std::string s; //Borrowed from C++
        std::getline(std::cin >> std::ws, s); //Borrowed from C++
            for(int i=(int)s.length()-1; i>=0; i--)
            {
                switch (s[i]) {
                    case 'X':
                        return 0;
                        break;
                    case 'O':
                        printSentence(myLetter);
                        break;
                    case 'D':
                        myLetter = deleteAll(myLetter);
                        break;
                    default:
                        myLetter = addLetter(tolower(s[i]), myLetter);
                }
            }
    }
    
}
