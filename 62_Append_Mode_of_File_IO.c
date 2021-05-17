// Append Mode of File IO
#include <stdio.h>
int main()
{
    char string2[90] = "This_is_second_text_file_of_this_Folder.";
    FILE *pointer = NULL;
    pointer = fopen("B.txt", "a");
    fprintf(pointer, "\n%s", string2);
    fclose(pointer);
    return 0;
}