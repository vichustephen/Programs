#include<stdio.h>

int main()
{
    FILE *read;
    FILE *write;
    char *filename = "myfile.txt";
    read = fopen( filename, "r" );
    if( read == NULL )
    {
        //File doesn't exist. Have to write something
        write = fopen( filename, "w" );
        fprintf( write, "%s", "writesomethinghere" );
        fclose( write );
    }
    else
    {
        //File exists. Read data from the file
        char somedata[ 20 ];
        fscanf( read, "%s", somedata );
        printf( "%s\n", somedata );
        fclose( read );
    }
    return 0;
}
