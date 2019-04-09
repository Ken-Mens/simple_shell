#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>
#include <unistd.h>

struct dir_s
{
	char *dir;
	struct dir_s *next;
}dir_s;

char *_strncat(char *dest, char *src, int n);
char *search_path(char *str);
char *_getenv(const char *name);
/* size_t **directory(dir_s **head, char **envp, mem_t *some);*/
/* size_t *add_nodedir_end(dir_t **head, const char *dir);*/


#endif /* HOLBERTON_H */

