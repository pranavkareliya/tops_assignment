#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void reverse_string();
void concatenate();
void copy_string();
void palindrome();
void string_length(); 
void character_frequency();
void count_vowels_consonants();
void no_of_blank_space_and_digits();

int main() {
    char input[100], input2[100];
    int choice;
    char continueChoice;

    do {
        printf("Main Menu\n");
        printf("\t1. Reverse a String\n");
        printf("\t2. Concatenation\n");
        printf("\t3. Palindrome\n");
        printf("\t4. Copy a String\n");
        printf("\t5. Length of the String\n");
        printf("\t6. Frequency of Characters\n");
        printf("\t7. Number of Vowels, Consonants\n");
        printf("\t8. Number of Blank Space and Digits\n");
        printf("\nPlease Enter Your Choice : ");
        scanf("%d",&choice);
        getchar(); // Clearing input buffer

        switch (choice) {
            case 1:
                reverse_string();
                break;
            case 2:
                concatenate();
                break;
            case 3:
                palindrome();
                break;
            case 4:
                copy_string();
                break;
            case 5:
                string_length();
                break;
            case 6:
                character_frequency();
                break;
            case 7:
                count_vowels_consonants();
                break;
            case 8:
                no_of_blank_space_and_digits();
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }

        printf("\nDo you want to continue? (Y/N) : ");
        scanf(" %c", &continueChoice);

    } while ((continueChoice) == 'y' || (continueChoice) == 'Y');

    return 0;
}

void reverse_string() { 

    int i,j,len=0;
    char str[100];
  
    printf("Enter Sentence : ");
    gets(str);
  
    len = strlen(str); 
  
    for(i = 0, j = len - 1; i <= j; i++, j--) { 
         
        char c = str[i]; 
        str[i] = str[j]; 
        str[j] = c; 
    } 
  
    printf("Reversed Sentence is : %s",str); 
  
}


// Function to concatenate 
void concatenate() { 
    char s1[100],s2[100];
    int length, j;
  
    printf("Enter First String : ");
    fflush(stdin);
    gets(s1);
    printf("Enter Second String : ");
    fflush(stdin);
    gets(s2);

    length = 0;
    while (s1[length] != '\0') {
        ++length;
    }

    for (j = 0; s2[j] != '\0'; ++j, ++length) {
        s1[length] = s2[j];
    }

    s1[length] = '\0';

    printf("After concatenation : ");
    puts(s1);
}

void palindrome() { 

    char string1[20];
    int i, length;
    int f = 0;

    printf("Enter a string: ");
    scanf("%s", string1);

    length = strlen(string1);

    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            f = 1;
            break;
        }
    }

    if (f) {
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }
}


void copy_string() { 

    char str1[100];
    char str2[100];
    
    printf("Enter Sentence : ");
    gets(str1);
 
    strcpy(str2, str1);
 
    printf("Original String : %s\n", str1);
    printf("Copy String : %s\n", str2);
}


void string_length() { 

    int i,count=0;
    char s[100];

    printf("Enter Sentence : ");
    fflush(stdin);
    gets(s);

    for(i=0;s[i]!='\0';i++){
        count++;
    }

    printf("Length of Sentence is : %d",count);
}

void character_frequency() { 

    char s[1000], ch;
    int count = 0;

    printf("Enter Sentence : ");
    fgets(s, sizeof(s), stdin);

    printf("Enter a character to find its total number : ");
    scanf("%c", &ch);

    for (int i = 0; s[i] != '\0'; ++i) {
        if (ch == s[i])
            ++count;
    }

    printf("Frequency of %c = %d.", ch, count);

}

void count_vowels_consonants() { 

    int vowels = 0, consonants = 0, digits = 0, spaces = 0,i;
    char str[100];
    
    printf("Enter Sentence : ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i]) {

            char ch = tolower(str[i]);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } 
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

void no_of_blank_space_and_digits(){ 

    char str[100];
    int i=0,space=0,digits=0;

    printf("Enter Sentence : ");
    fflush(stdin);
    gets(str);
    while(i<=str[i]){
        if(str[i]==' '){
            space++;
        }else if(str[i] >=48 && str[i] <=57){
            digits++;
        }
    i++;
}
    printf("Total Number of Space is : %d\n",space);    
    printf("Number of digits: %d\n", digits);

}