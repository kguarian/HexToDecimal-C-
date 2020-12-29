#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
int main()
{
    char *uInput;
    char *processedInput;
    int numStartIndex;
    char currChar = 0;
    int msdIndex = 0;
    int lsdIndex = -1;
    int inputLengthLimit = 20;
    int i, j;

    uInput = (char *)malloc(inputLengthLimit * sizeof(char));                   //create buffer
    scanf("%s", uInput);                                                        //scan user input into buffer
    processedInput = (char *)calloc(inputLengthLimit * sizeof(char), 1);        //limit user input to predefined buffer size
    for (i = 0; i < inputLengthLimit; i++)
        *(processedInput + i) = *(uInput + i);

    if (*processedInput == '0')                                                 //set msdIndex to 2 if first 2 characters form "0x" or "0X"
    {
        if (*(processedInput + 1) == 'x' || *(processedInput + 1) == 'X')
        {
            msdIndex = 2;
        }
    }

    //find least significant digit: parse from high to low index, find first nonzero value (0-init'd array)
    //if its index is not at least that of the first digit, error message and exit.
    for (i = inputLengthLimit; i >= msdIndex; i--)
    {
        if (*(processedInput + i) != 0)
        {
            lsdIndex = i;
            break;
        }
    }
    for (i = msdIndex; i <= lsdIndex; i++)              //validating character input. Set of accepted characters = all char values in ['0'-'9'] U ['A','F'] U ['a','f'].
    {
        if (!((*(processedInput + i) >= 'a' && *(processedInput + i) <= 'f') || (*(processedInput + i) >= 'A' && *(processedInput + i) <= 'F') || (*(processedInput + i) >= '0' && *(processedInput + i) <= '9')))
        {
            lsdIndex = -1;
            break;
        }
    }
    if (lsdIndex == -1)
    {
        printf("Invalid Input.");
        return EXIT_SUCCESS;
    }

    //remember: hex = sum(16^(digitPosition) * digitValue)
    int sum = 0;
    for (i = msdIndex; i <= lsdIndex; i++)
    {
        switch (*(processedInput + i))
        {
            int currDigit;

            case '0':                                   // if character is 0, do nothing. It does not add to the sum.
                break;
            case '1':                                   //if character is 1
                currDigit = 1;                          //set base digit to 1
                for (j = 0; j < lsdIndex - i; j++)      //multiply it by 16^(LEAST_SIGNIFICANT_DIGIT_INDEX - CURRENT_INDEX) and...
                {
                    currDigit *= 16;
                }
                sum += currDigit;                       //add the resultant product to the sum.
                break;
            case '2':
                currDigit = 2;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case '3':
                currDigit = 3;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case '4':
                currDigit = 4;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case '5':
                currDigit = 5;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case '6':
                currDigit = 6;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case '7':
                currDigit = 7;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case '8':
                currDigit = 8;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case '9':
                currDigit = 9;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'a':
                currDigit = 10;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'b':
                currDigit = 11;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'c':
                currDigit = 12;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'd':
                currDigit = 13;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'e':
                currDigit = 14;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'f':
                currDigit = 15;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'A':
                currDigit = 10;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'B':
                currDigit = 11;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'C':
                currDigit = 12;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'D':
                currDigit = 13;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'E':
                currDigit = 14;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            case 'F':
                currDigit = 15;
                for (j = 0; j < lsdIndex - i; j++)
                {
                    currDigit *= 16;
                }
                sum += currDigit;
                break;
            default:
                fprintf(stderr, "debug: default hit\n");
                break;
        }
    }

    printf("%d\n", sum);
}