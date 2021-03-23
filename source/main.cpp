//
// Created by karl on 23.03.21.
//

#include <stdio.h>

#include "assert.h"

int main()
{
	assert(true, "Should not show!");
	assert(false, "Should break!");
    return 0;
}