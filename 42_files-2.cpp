#include <iostream>
#include <string>

constexpr int maxbuffer = 1024;

using namespace std;

int main()
{
    const char *filename = "mythisfile.txt";
    const char *information = "lorem ipsom lorem ipsom lavel lorem ipsum";

    // Insert data into file
    // FILE *fh = fopen(filename, "w");

    // Append data to existing file
    // FILE *fh = fopen(filename, "a");

    // for (int i = 0; i < 10; ++i)
    // {
    //     fputs(information, fh);
    // }

    // fclose(fh);

    // Read from file
    char buf[maxbuffer];

    FILE *fh = fopen(filename, "r");

    while (fgets(buf, maxbuffer, fh))
    {
        // dump buffer data to the console
        fputs(buf, stdout);
    }

    fclose(fh);

    return 0;
}

/*
- The fgets() reads a line from the specified stream and stores it into the string pointed to by str. It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.

Syntax: char *fgets (char *str, int n, FILE *stream);

    Where,
    - str: Pointer to an array of chars where the string read is copied.
    - n: Maximum number of characters to be copied into str (including the terminating null character).
    - *stream: Pointer to a FILE object that identifies an input stream.

- The fputs() function copies string to the output stream at the current position. It does not copy the null character (\0) at the end of the string.

Syntax: fputs(const *char str, FILE *fp);

    where, str is a name of char array that we write in a file and fp is the file pointer.
*/