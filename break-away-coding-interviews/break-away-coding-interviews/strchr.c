//
//  strchr.c
//  break-away-coding-interviews
//
//  Created by Vaibhav Chauhan on 3/5/16.
//  Copyright © 2016 Vaibhav Chauhan. All rights reserved.
//

#include <stdio.h>

char * my_strchr( char * str, int c) {

    if (str == NULL)
        return NULL;
    
    
    while (*str != '\0') {
        if (*str == c){
            return str;
        }
    str++;
    }
    return NULL;
    
    
}

int main()
{
	char * found = my_strchr("Hello World", 'o');
	printf("%c\n", *found);
}