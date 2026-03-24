#include <stdio.h>
#include <stdbool.h>  // <cstdbool> en C++
#include <stdlib.h>
#include <string.h>

int main()
{
	char buffer[128];
	char *input;
	char *auth;
	// char *pcVar2;
	// char *pcVar3;
	char *buffer_ptr;
	// char local_8b[2];
	char *str;
	char *str_auth;
	int i;
	int uVar10;
	int uVar6;
	int uVar14;
	char cVar1;
	do {
		printf("%p \n",auth);
		input = fgets(buffer, 128, stdin);
		if (!input)
			return 0;
		buffer_ptr = buffer;
		str_auth = "auth ";
		bool cmp_buffer_auth_inf;
		cmp_buffer_auth_inf = false;
		bool cmp_buffer_auth_equal;
		cmp_buffer_auth_equal = false;
		i = 5;
		do {
			if (i == 0) break;
			i = i + -1;
			cmp_buffer_auth_inf = *buffer_ptr < *str_auth;
			if (cmp_buffer_auth_inf)
				printf("%d if_inf_addr_buffer true\n", i);
			cmp_buffer_auth_equal = *buffer_ptr == *str_auth;
			if (cmp_buffer_auth_equal)
				printf("%d if_equl_addr_buffer true\n", i);
			printf("before incr: %c %c\n", *buffer_ptr, *str_auth);
			buffer_ptr = buffer_ptr + 1;
			str_auth = str_auth + 1;
			printf("after incr: %c %c\n", *buffer_ptr, *str_auth);
			} while (cmp_buffer_auth_equal);
		if ((!cmp_buffer_auth_inf && !cmp_buffer_auth_equal) == cmp_buffer_auth_inf)
		{
			auth = malloc(4);
			auth[0] = '\0';
			auth[1] = '\0';
			auth[2] = '\0';
			auth[3] = '\0';
			uVar6 = -1;
			str = buffer + 5;
			input = str;
			do {
				if (uVar6 == 0) break;
				uVar6 = uVar6 - 1;
				cVar1 = *input;
				input = input + 1;
			} while (cVar1 != '\0');
			uVar6 = ~uVar6 - 1;
			uVar10 = uVar6 < 0x1e;
			uVar14 = uVar6 == 0x1e;
			if (uVar6 < 0x1f) {
				printf("uvar6: %d\n", uVar6);
				strcpy(auth,str);
				printf("%s\n", auth);
			}
		}
	}while (true);
	return 0;
}