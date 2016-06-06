#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *d;
    struct dirent *info;        /* A directory entry */
    struct stat sb;             /* The stat buffer */
    long total = 0;             /* Total of file sizes */

    d = opendir(".");

    while ((info = readdir(d)) != NULL) {
        stat(info->d_name, &sb);
        total += sb.st_size;
    }

    closedir(d);

    printf("total size = %ld\n", total);

    return 0;
}
