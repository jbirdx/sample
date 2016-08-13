//
//  c++.cpp
//  aaaaaaaa
//
//  Created by 伊藤慶 on 2016/08/13.
//  Copyright © 2016年 伊藤慶. All rights reserved.
//
#include <stdio.h>
#include "c++.hpp"

c++::Sample (void) {
    printf ("Sample::Sample\n");
}

Sample::~Sample () {
    printf ("Sample::~Sample\n");
}

void Sample::hello (void) {
    printf ("Hello!! My Cpp Class\n");
}