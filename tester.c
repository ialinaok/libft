#include <stdio.h>
//#include <string.h>

size_t	strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*put_dest;
	const char		*put_src;

	put_dest = dest;
	put_src = src;
	while (n > 0)
	{
		*put_dest++ = *put_src++;
		n--;
	}
	return (dest);
}

size_t	strlcpy(char *dest, const char *src, size_t dst_size)
{
	size_t	counter;

	counter = 0;
	if (dst_size > 0)
	{
		while (src[counter] != '\0')
		{
			if (counter == dst_size)
			{
				counter--;
				break ;
			}
			*(dest + counter) = *(src + counter);
			counter++;
		}
	}
	*(dest + counter) = '\0';
	while (*(src + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}
// size_t	strlcpy(char * dst, const char * src, size_t maxlen) {
//     const size_t srclen = strlen(src);
//     if (srclen + 1 < maxlen) {
//         memcpy(dst, src, srclen + 1);
//     } else if (maxlen != 0) {
//         memcpy(dst, src, maxlen - 1);
//         dst[maxlen-1] = '\0';
//     }
//     return srclen;
// }

int main(void)
{
  char dst[6] = "Alina";
  char src[10] = "Hardfield";
  
  strlcpy(dst, src, 6);
  printf("the new string is: %s", dst);
  return (0);
}