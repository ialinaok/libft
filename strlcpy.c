#include<stdio.h>
#include<string.h>

// size_t ft_strlcat(char *dst, const char *src, size_t siz)
// {
//     char *d = dst;
//     const char *s = src;
//     size_t n = siz;
//     size_t dlen;
//     /* Find the end of dst and adjust bytes left but don't go past end */
//     while (n-- != 0 && *d != '\0')
//         d++;
//     dlen = d - dst;
//     n = siz - dlen;
//     if (n == 0)
//         return(dlen + strlen(s));
//     while (*s != '\0') {
//         if (n != 1) {
//             *d++ = *s;
//             n--;
//         }
//         s++;
//     }
//     *d = '\0';
//     return(dlen + (s - src));    /* count does not include NUL */
// }

// int main(void)
// {
//   char first[30] = "hello ";
//   char second[15] = "world and more";
//   //int size = 20;
//   //har  pastehere[size];
//   size_t r;
  
//   //strcpy(pastehere, first);
//   printf("the first string is %s\n", first);
//   r = strlcat(first, second, 4);
//   printf("after 1st modification %s; returned size is %zu\n", first, r);
//   r = strlcat(first, second, 5);
//   printf("after scnd modification %s; returned size is %zu\n", first, r);
//   r = strlcat(first, second, 8);
//   printf("after thrd modification %s; returned size is %zu\n", first, r);
//   r = strlcat(first, second, 12);
//   printf("after 1st modification %s; returned size is %zu\n", first, r);
//   r = strlcat(first, second, 15);
//   printf("after scnd modification %s; returned size is %zu\n", first, r);
//   r = strlcat(first, second, 18);
//   printf("after thrd modification %s; returned size is %zu\n", first, r);
//   return (0);
// }
