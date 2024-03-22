#include <iostream>
#include <string>

using namespace std;

int main()
{
    static const char *originalfile = "originalFile.txt";

    static const char *editedfile = "editedFile.txt";

    // Open file in Write mode if not exist, then created new one and open it
    // FILE *fh = fopen(originalfile, "w");
    // fclose(fh);

    // rename file
    // rename(originalfile, editedfile);

    // remove file
    // remove(editedfile);

    return 0;
}


