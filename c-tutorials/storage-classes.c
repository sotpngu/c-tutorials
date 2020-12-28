//
//  storage-classes.c
//  c-tutorials
//
//  Created by gmh on 2020/9/2.
//  Copyright © 2020 gmh. All rights reserved.
//

#include "storage-classes.h"


//auto int mounth; // 默认classes
//register int miles; // 储存在寄存器，依赖硬件的寄存器
//static int count; // 程序运行期间永久保存，可以跳出作用域，不再随函数执行而创建和销毁
//extern int all_scopr_count; // 可以在所有文件中访问的变量，声明的时候不能初始化

extern int count;

void write_extern(void) {
    printf("count is %d\n", count);
}
