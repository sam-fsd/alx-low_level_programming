#include "main.h"
#include <string.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw, len;

	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
		len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_APPEND);
	fw = write(fd, text_content, len);

	if (fd == -1 || fw == -1)
		return (-1);

	close(fd);

	return (1);
}
