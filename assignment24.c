// write a program to create a file name "profile.txt" and write your detail in that file and copy the content of that file into another file "myProfile.txt".

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Create a file named "profile.txt"
    FILE *fp = fopen("profile.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating file\n");
        return 1;
    }

    // Write your details in the file
    fprintf(fp, "Name: Subhajit Chaudhury \n");
    fprintf(fp, "Age: 18\n");
    fprintf(fp, "Occupation: Student\n");
    fprintf(fp, "Relationship status: unfortunately single\n");

    // Close the file
    fclose(fp);

    // Copy the content of "profile.txt" to "myProfile.txt"
    fp = fopen("profile.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    FILE *fp2 = fopen("myProfile.txt", "w");
    if (fp2 == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, fp2);
    }

    // Close the files
    fclose(fp);
    fclose(fp2);

    return 0;
}