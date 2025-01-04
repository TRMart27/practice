#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>





int count_freq(char* str, char* target_str)
{
	assert(str);
	assert(target_str);
	

	size_t str_len = strlen(str);
	size_t target_len = strlen(target_str);
	int count = 0;
	
	for(size_t i = 0; i <= (str_len - target_len); ++i)
		if(strncmp(&str[i], target_str, target_len) == 0)
			count++;	
	return count;
}


int main(void)
{
	printf("Enter some String\n");
	
	char word[256];
	scanf("%s", word);
	
	printf("Enter string to count\n");

	char target_str[256];
	scanf("%s", target_str);

	printf("Target string { %s } occurs { %d } times\nin string { %s }\n", target_str, count_freq(word, target_str), word);

	return 0;
}

