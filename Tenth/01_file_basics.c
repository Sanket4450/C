# include <stdio.h>

int main(){

    FILE *ptr; // if the following file doesn't exist, fopen returns NULL

    ptr = fopen("sample.txt", "r"); // --> open for reading
    // ptr = fopen("sample.txt", "w"); // --> open for writing

    // ptr = fopen("sample.txt", "rb"); // --> open for reading in binary
    // ptr = fopen("sample.txt", "wb"); // --> open for writing in binary

    // ptr = fopen("sample.txt", "a"); // --> open for append, adding some content at the end of the content

    return 0;
}