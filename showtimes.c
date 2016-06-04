/* A simple use of stat */
/* No error checking! */

#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[])
{
    struct stat sb;         /* The stat buffer */

    stat("foo", &sb);

    printf("last accessed: %s", ctime(&sb.st_atime));
    printf("last modified: %s", ctime(&sb.st_mtime));
    printf("last change: %s", ctime(&sb.st_ctime));
    return 0;
}
