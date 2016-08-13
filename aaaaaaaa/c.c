//
//  c.c
//  aaaaaaaa
//
//  Created by 伊藤慶 on 2016/08/13.
//  Copyright © 2016年 伊藤慶. All rights reserved.
//

#include "c.h"
void testFunc(int r,int g,int b,int r_a1,int g_a1,int b_a1,int r_a2,int g_a2,int b_a2,int r_a3,int g_a3,int b_a3,int check_answer)
{
}
void c(){
    int r_a1,r_a2,r_a3,g_a1,g_a2,g_a3,b_a1,b_a2,b_a3;
    int r,g,b;
    
    
    
    int abs_r1_2,abs_r2_3,abs_r3_1;
    int abs_r_1 ,abs_r_2 ,abs_r_3 ;
    int abs_g1_2,abs_g2_3 ,abs_g3_1;
    int abs_g_1 ,abs_g_2,abs_g_3;
    int abs_b1_2 ,abs_b2_3,abs_b3_1;
    int abs_b_1,abs_b_2,abs_b_3;
    int abs_ca_1;
    int abs_ca_2;
    int abs_ca_3;
    int abs_1_2 ;
    int abs_1_3 ;
    int abs_2_3;
    int abs_minimum;
    int minlimit, maxlimit;
    _Bool canBreak;
//    _Bool c;
    srand((unsigned int)time(NULL));
    r = arc4random()%256+0;
    g =arc4random()%256+0;
    b =arc4random()%256+0;
    minlimit=30;
    maxlimit=55;
    while (true) {
        r_a1 = arc4random()%256+0;
        r_a2 = arc4random()%256+0;
        r_a3 = arc4random()%256+0;
        
        g_a1 = arc4random()%256+0;
        g_a2 = arc4random()%256+0;
        g_a3 = arc4random()%256+0;
        
        b_a1 = arc4random()%256+0;
        b_a2 = arc4random()%256+0;
        b_a3 = arc4random()%256+0;
        abs_r1_2 =r_a1 - r_a2;
        abs_r2_3 = r_a2 - r_a3;
        abs_r3_1 = r_a3 - r_a1;
        abs_r_1 = r - r_a1;
        abs_r_2 = r - r_a2;
        abs_r_3 = r - r_a3;
        
        abs_g1_2 = g_a1 - g_a2;
        abs_g2_3 = g_a2 - g_a3;
        abs_g3_1 = g_a3 - g_a1;
        abs_g_1 = g - g_a1;
        abs_g_2 = g - g_a2;
        abs_g_3 = g - g_a3;
        
        abs_b1_2 = b_a1 - b_a2;
        abs_b2_3 = b_a2 - b_a3;
        abs_b3_1 =b_a3 - b_a1;
        abs_b_1 = b - b_a1;
        abs_b_2 = b - b_a2;
        abs_b_3 = b - b_a3;
        abs_ca_1 = abs_r_1 + abs_g_1 + abs_b_1;
        abs_ca_2 = abs_r_2 + abs_g_2 + abs_b_2;
        abs_ca_3 = abs_r_3 + abs_g_3 + abs_b_3;
        abs_1_2 = abs_r1_2 + abs_g1_2 + abs_b1_2;
        abs_1_3 = abs_r3_1 + abs_b3_1 + abs_b3_1;
        abs_2_3 = abs_r2_3 + abs_b2_3 + abs_b2_3;
     
        canBreak = false;
        abs_minimum = 0;
        //条件A:ｒ,g,bのいずれかがほかの選択肢及び正解と20以上離れている。
        if ((abs_minimum <= abs_r_1) || (abs_minimum <= abs_g_1) || ((abs_minimum <= abs_b_1))) {
            //            NSLog(@"１番成功");
            if ((abs_minimum <= abs_r_2) || (abs_minimum <= abs_g_2) || (abs_minimum <= abs_b_2)) {
                //                 NSLog(@"２番成功");
                if ((abs_minimum <= abs_r_3) || (abs_minimum <= abs_g_3) || (abs_minimum <= abs_b_3)) {
                    //                     NSLog(@"３番成功");
                    if ((abs_minimum <= abs_r1_2) || (abs_minimum <= abs_g1_2) || (abs_minimum <= abs_b1_2)) {
                        //                         NSLog(@"４番成功");
                        if ((abs_minimum <= abs_r2_3) || (abs_minimum <= abs_g2_3) || (abs_minimum <= abs_b2_3)) {
                            //                             NSLog(@"５番成功");
                            if ((abs_minimum <= abs_r3_1) || (abs_minimum <= abs_g3_1) || (abs_minimum <= abs_b3_1)) {
                                //                                 NSLog(@"６番成功");
                                canBreak = true;
                            }
                        }
                    }
                }
            }
        }
        
        // 条件B：r,g,bのそれぞれの差を選択肢ごとに加えたものがそのレベルの範囲内になっている。
        if (canBreak == true){
            if ((abs_ca_1 >= minlimit) && (abs_ca_1 <= maxlimit)) {
//                NSLog(@"%hhu",canBreak);
                if ((abs_ca_2 >= minlimit) && (abs_ca_2 <= maxlimit)) {
                    //                 NSLog(@"８番成功");
                    if ((abs_ca_3 >= minlimit) && (abs_ca_3 <= maxlimit)) {
                        //                     NSLog(@"９番成功");
                        if ((abs_1_2 >= minlimit) && (abs_1_2 <= maxlimit)) {
                            //                         NSLog(@"１０番成功");
                            if ((abs_1_3 >= minlimit) && (abs_1_3 <= maxlimit)) {
                                //                             NSLog(@"１１番成功");
                                if ((abs_2_3 >= minlimit) && (abs_2_3 <= maxlimit)) {
                                    //                                 NSLog(@"１２番成功");
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            
        }
    }
    printf("できた");
    // setChoicesColor
//    switch (check_answer) {
//        case 1:
//            label1.backgroundColor=RGB(r, g, b);
//            label2.backgroundColor=RGB(r_a1, g_a1, b_a1);
//            label3.backgroundColor=RGB(r_a2, g_a2, b_a2);
//            label4.backgroundColor=RGB(r_a3, g_a3, b_a3);
//            NSLog(@"答えはR%d,G%d,B%d",r,g,b);
//            NSLog(@"例第一R%d,G%d,B%d",r_a1, g_a1, b_a1);
//            NSLog(@"例第一R%d,G%d,B%d",r_a2, g_a2, b_a2);
//            //            NSLog(@"正解は１");
//            break;
//        case 2:
//            label1.backgroundColor=RGB(r, g, b);
//            label2.backgroundColor=RGB(r_a1, g_a1, b_a1);
//            label3.backgroundColor=RGB(r_a2, g_a2, b_a2);
//            label4.backgroundColor=RGB(r_a3, g_a3, b_a3);
//            
//            NSLog(@"正解は２");
//            break;
//        case 3:
//            label1.backgroundColor=RGB(r, g, b);
//            label2.backgroundColor=RGB(r_a1, g_a1, b_a1);
//            label3.backgroundColor=RGB(r_a2, g_a2, b_a2);
//            label4.backgroundColor=RGB(r_a3, g_a3, b_a3);
//            NSLog(@"正解は3");
//            break;
//        case 4:
//            label1.backgroundColor=RGB(r, g, b);
//            label2.backgroundColor=RGB(r_a1, g_a1, b_a1);
//            label3.backgroundColor=RGB(r_a2, g_a2, b_a2);
//            label4.backgroundColor=RGB(r_a3, g_a3, b_a3);
//            
//            NSLog(@"正解は4");
//            break;
//    }
    

}
