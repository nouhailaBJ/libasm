#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

size_t ft_strlen(char *s);
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(char *s1, char *s2);
ssize_t  ft_write (int fd , char *s , int len);
char *ft_strdup(const char *s1);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);

void	test_strlen(void)
{
	printf("/***** ft_strlen ******/ \n");
    printf("[ft_strlen]  : %zu\n", ft_strlen(""));
    printf("[strlen]  : %lu\n", strlen(""));
    printf("[ft_strlen]   : %zu\n", ft_strlen("hello world"));
    printf("[strlen]   : %lu\n", strlen("hello world"));
    printf("[ft_strlen]  long  : %zu\n", ft_strlen("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
    printf("[strlen]  long  : %lu\n", strlen("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
}
void	test_strcpy(void)
{
    char dst[1200];
	printf("/***** ft_strcpy ******/ \n");
    printf("[ft_strcpy] : %s\n", ft_strcpy(dst, ""));
    printf("[strcpy]: %s\n", strcpy(dst, ""));
    printf("[ft_strcpy]   : %s\n", ft_strcpy(dst, "hello world"));
    printf("[strcpy]   : %s\n", strcpy(dst, "hello world"));
    printf("[ft_strcpy]  long  : %s\n", ft_strcpy(dst, "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
    printf("[strcpy]  long  : %s\n", strcpy(dst, "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
}
void	test_strcmp(void)
{
	printf("/***** ft_strcmp ******/ \n");
    printf("[ft_strcmp] : %d\n", ft_strcmp("", ""));
    printf("[strcmp] : %d\n", strcmp("", ""));
    printf("[ft_strcmp] : %d\n", ft_strcmp("", "nouhaila"));
    printf("[strcmp]  : %d\n", strcmp("", "nouhaila"));
    printf("[ft_strcmp]  : %d\n", ft_strcmp("nouhaila", ""));
    printf("[strcmp]: %d\n", strcmp("nouhaila", ""));
    printf("[ft_strcmp]  : %d\n", ft_strcmp("nouhaila", "hello world"));
    printf("[strcmp]   : %d\n", strcmp("nouhaila", "hello world"));
    printf("[ft_strcmp]   : %d\n", ft_strcmp("a", "b"));
    printf("[strcmp]   : %d\n", strcmp("a", "b"));
    printf("[ft_strcmp]   : %d\n", ft_strcmp("b", "a"));
    printf("[strcmp]   : %d\n", strcmp("b", "a"));
    printf("[ft_strcmp]   : %d\n", ft_strcmp("b", "b"));
    printf("[strcmp]   : %d\n", strcmp("b", "b"));
}

void	test_strdup(void)
{
	printf("/***** ft_strdup ******/ \n");
	char *sdup = "There are many variations of passages of Lorem Ipsum available";
	printf("strdup : |%s| \n", strdup(sdup));
	printf("ft_strdup : |%s| \n\n", ft_strdup(sdup));
	printf("strdup : |%s| \n", strdup(""));
	printf("ft_strdup : |%s| \n\n", ft_strdup(""));
	printf("strdup : |%s| \n", strdup("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
	printf("ft_strdup : |%s| \n\n", ft_strdup("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
}
void	test_write(void)
{
	printf("/***** ft_write ******/ \n");
	int fd = open("file.txt",  O_WRONLY | O_CREAT | O_TRUNC, 0644);
	write(1, "write : hello\n", 14);
	ft_write(1, "ft_write : hello\n\n", 18);
	write(0, "write : hello\n", 14);
	ft_write(0, "ft_write : hello\n\n", 18);
	write(fd, "write : hello\n", 14);
	ft_write(fd, "asdas : hello\n\n", 18);
	if ((write(-4, "buf", 6) == -1))
		printf("write error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
	if ((ft_write(-4, "buf", 6) == -1))
		printf("ft_write error : \033[1;31mERROR: %s\033[0m\n\n", strerror(errno));
	if ((write(0, NULL, 6) == -1))
		printf("write error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
	if ((ft_write(0, NULL, 6) == -1))
		printf("ft_write error : \033[1;31mERROR: %s\033[0m\n\n", strerror(errno));
}
void	test_read(void)
{
	printf("/***** ft_read ******/ \n");
	char buf[20];
	bzero(buf, 20);
	char buf2[20];
	bzero(buf2, 20);
	printf("read : %zd \n", read(0, buf, 20));
	printf("ft_read : %zd \n\n", ft_read(0, buf2, 20));
	if ((read(-4, buf, 6) == -1))
		printf("read error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
	if ((ft_read(-4, buf2, 6) == -1))
		printf("ft_read error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
}
int main()
{
    test_strlen();
    test_strcpy();
    test_strcmp();
    test_strdup();
    test_write();
    test_read();
}