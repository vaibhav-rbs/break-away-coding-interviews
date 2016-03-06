//
//  main.c
//  break-away-coding-interviews
//
//  Created by Vaibhav Chauhan on 3/5/16.
//  Copyright © 2016 Vaibhav Chauhan. All rights reserved.
//

#include <stdio.h>

int my_strlen( const char* str) {
    int length = 0;
    if (str == NULL)
        return length;
    
    
    while (*str != '\0') {
        str++;
        length++;
    }
    return length;
        
        
}

int main()
{
    int len;
    len = my_strlen("Hello World");
    printf("%d \n", len);
}
