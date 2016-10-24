#include <stdio.h>
#include <stdlib.h>

char rot(unsigned n, char c) {
  if ('A' <= c && c <= 'Z')
    return ((c - 'A' + n) % 26) + 'A';
  else if ('a' <= c && c <= 'z')
    return ((c - 'a' + n) % 26) + 'a';
  else
    return c;
}

int main(int argc, char *argv[])
{
  ssize_t ret;
  size_t n = 0;
  char* line = NULL;
  int rotval = atoi(argv[1]);
  unsigned i = 0;
  /* char c; */

  if (argc == 0)
    perror("Please specify the desired rotation amount as the first argument");

  do {
    ret = getline(&line, &n, stdin);

    while (i < ret) {
      printf("%c", rot(rotval, line[i]));
      /* c = line[i];
         printf("char: %c, %d, %c\n", line[i], line[i], rot(rotval, line[i])); */
      i++;
    }

    i = 0;
  } while (ret >= 0);

  free(line);
  return 0;
}
