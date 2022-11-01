# C Primer Plus

## 第二章：C语言概述：

1.一个项目只有一个main函数

2.注释使用/**/和//

3.{}表示begin和end

4.使用变量（variable）{又可以称为标识符（identify）}使用时先要声明（declaration）；注意使用关键字（keyword）；

5.\n为转义序列（escape sequence）表示难以输出或无法输出的字符有换行之意

6.%d转换说明，为变量占一个整数值；

7.variable命名时不要超过63个字符，不可以以数字开头，数字，字母，_(下划线）均可用于命名变量；

8.C语言的基本模块：a.#include

​                                     b.int main(){  语句 return 0;}

​                                     c. keyword function（）；具有特定功能的函数

9.程序错误一般可以分为两类：

a.语义错误：这个错误系统无法检测

b.语法错误：一般是忘记分号等问题，编译器可以将问题解决

## 第三章：数据与C

1.浮点型数据类型float 和 double 差别在与包含的小数范围不同

2.浮点数的输出在printf函数中使用%f处理可以以%.2f这种形式来给定输出时保留的小数。

3.键盘输入函数scanf（）；第一个转换说明（Conversion specification）与后一位的变量有关形式为scanf（“Conversion specification”，&variable）

4.位（bit）：他是计算机上最小的存储单位 只可以存储0和1

 字节（byte）：一个字节有八位 可以存储2^8个数据

 字（word）：最初的字只有八位随着发展已经到了64位 他与计算机的访问数量和数据传输速度有关

5.整型：short int   16bit 4byte

​               int    16或32bit  4byte or 8byte

​               long int   32bit   4byte或8byte

​               long long int  64bit  8byte

​               unsigned…………

整型有多个形式，每个形式的存储bit不同从而导致了可以存储的数值大小不同

在进行输出时如果大于最大值就会产生溢出

6.转换说明（Conversion specification）

%d   int等

%u unsigned……等

%f    float double

%o 八进制数字 %#o 将前缀显示出来

%x 十六进制数字   %#x 将前缀显示出来

%c char型

%g或%G float型 可以自动忽略无用的0

7.char  1byte

引例：char grade= 'FATE';系统只读取最后八位

8.非打印字符：ASCⅡ码

9.初始化（initialize):给variable开辟一个与变量类型相应大小的空间

10._Bool型变量：占一个bite 只有1和0分别表示true和false

11.C99中的两个头文件

#include<inttypes.h>

#include<stdint.h>

这两个头文件是为了适配不同的系统并确保功能相同而编写的c99标准

例如：精确宽度整数类型（exact-width integer type) 由计算机不支持的可能性

最小宽度类型（minimum width type）有代表性的 int_least8_t如果计算机最小是16位仍然可以使用但是计算机会实现为16位整数类型

最快最小宽度类型（fastest minimum width type）运算速度最快的int_fast8_t

12.intmax_t和uintmax_t分别表示最大有符号和无符号整数类型他们可以表示的数字比long long int 和unsighed long long int 还要大

13. PRId32字符串宏   由于int可能是16位也可能是32位C99标准确立了该字符串宏以确保32位int和16位int的等效转换

14. float型最多可以保留六位有效数字

    double型可以保留10位以上的有效数字

15.复数的表示

 float_Complex 、double_Complex 、long double_Complex

16. 虚数的表示

float_Imaginary 、double_Imaginary 、long double_Imaginary

17.浮点值常量:e前面不要加空格

18.上溢（overflow）和下溢（underflow）subnormal浮点值

例如：.1234E-10除以10=.0123E-10;就是出现了下溢现象损失了数值

NaN未定义量和inf超出最大范围量

19.\\\表示输出\

\‘表示输出’

\“表示输出”

20.关键概念

例如float型和int型大小都是32位但是存储方式和运算过程有很大的不同

就像256.0f在int中就是113246208但是当我们输出时由于强制类型转换的存在

会看成256；就如同二进制与十进制

21.有趣的转义序列（escape sequence）

```c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float salary;

	printf("\aEnter your desired monthly salary:");//\a响铃bell
	printf("$___\b\b\b");//\b退格符
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary,ng
		salary * 12.0);//\t tab键
	printf("\rGee!\n");//\r回车符
	return 0;
}
```

## 第四章：字符串和格式化输入/输出

1.#define

定义后编译器会自动替换常量称为编译时替换（compile-time substitution）

格式#define NAME value切记不可以加=

以#define定义的变量称为明示常量(mamifest constant)

#define既可以定义字符也可以定义字符串

2.c语言通常使用大写字母和c _和k _来表示常量

3.字符串数组

形式char name[c_n];

或char* name=“zifuchuan”

4.sizeof（）或sizeof variable 

转换说明(Conversion specification）%zd;

计算字符串的大小时，计入\0，

5.strlen()

Conversion specification:%zd;计算字符串大小时不计入\0

6.由于sizeof和strlen()的特性在对字符串处理过程中应用广泛

7.精度问题精炼：以%5.3d为例
a.如果%5d，编译器会保留最小五位空格宽度输出字符，默认右对齐如果想要左对齐可以使用%-5d

b.如果是%5.3d，编译器认为总共保留最少五个空格宽度输出字符，只有三位输出字符

c.如果是%05d，编译器保留最少五位空格宽度输出字符，其中并不齐全的空格宽度使用0补齐

d.如果是%05.3d，编译器会自动省略前导0，而与b所表示的情况相同

8.本章中讲解了很多的库内置常数，他们都是表示某一类型数的最大值和最小值一般是类型大写_MIN或 _MAX

9.烫烫烫烫对应的是0xcc，在debug的栈中C语言把未初始化变量的数组以0xcc存储

10.scanf不等于初始化，局部变量在定义时应当使用赋值运算符进行初始化

scanf会下跳过一个输入前的空白。注意在输出时空格是终止符。

11.%*d可以理解为% *%d就是以% *来代替字符宽度以达到动态指定字符宽度的目的

如果还要有精度要求则为% *. *d

12.%*d还可以跳过输入项例如程序清单4.17中后面的输出只有最后一个数字输出了

```c
int n；
printf("Please enter three integers:\n");
scanf("%*d %*d %d", &n);//could input three intergers by every way
printf("The last interger was %d\n", n);
```

13.可以通过控制字符宽度的方法来使输出的数字整齐

## 第五章：运算符、表达式和语句

1.赋值运算符“=”将将右值赋值给可以修改的左值，不等同于左值等于右值

2.*运算符 将两个变量、常量、算式相乘

3./运算符

​	a.整型的/：3/2=1；

​	b.浮点型的/：4.0/2.0=2.0；

4.+、-运算符：将两值相加或相减

​	-有时也为负号

5.运算符类型：

​	a.一元运算符：例如-（负号）只对一个值做运算

​	b.二元运算符：对两个值做运算

​	c.多元运算符：对多个值做运算

6.++运算符：前缀和后缀既有区别又有相同的

区别：自增时间不同

相似：都可以解释为i=i+1；

7.while循环：

```c
while (count < SQUARES);
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
			total, total / CROP);
	}
```

8.pow（a，b）：进行幂运算
$$
a^b
$$

9.自增和自减的优先级仅低于圆括号。

10.使用typeof可以为关键字起别名。

11.expression表达式与subexpression子表达式：

​	a.子表达式包含于表达式中---例如：表达式a=2*（1+c/d）中的c/d就是一个子表达式

12.语句（statement）：凭借；与表达式区别，每一个；表示一个statement结束。值得注意的是声明不等于语句。

13.block块和复合语句（compound statement）：使用{}符号将多条语句聚合在一起构成一个block或compound statement

14.每一个语句的作用是保证分号内运算在分号结束前完成，至于完成顺序无法确定

15.升级（promtion）和降级（demotion）：升级一般无需考虑，数据等在低级数据类型内存储就能够在高级数据类型内存储。

16.降级：例如char ch =1111；但是char 类型只能存储-256—255之间的数所以打印出来的值是待赋的值就如同时钟一样进行12—1这种类型的循环转换。

17自动类型转换和强制类型转换（cast）：例如:

```C
pound(ch);//pound((int)ch);
pound(f);//pound((int)f);
```

以上即为强制类型转换的示例。

## 第六章：C控制语句：循环

### while循环

1.样式：

while（entry condition）

{循环体}//循环体内应当存在使测试变量发生改变的statement。

2.true和false：只有0是假其他值全为真。//0假非0真

3.空语句（null statement）：可以用来跳过某类型数的输入条件：只有不是该类型的数据下面的statement才会执行。

```c
//例如
while（scanf（%d,&num)==1)
    ;
//该语句表示如果输入了整数一直循环，只有不在输入整数时循环才会继续进行下去
```

4.循环的本质就是迭代（iteration），P119

![循环迭代图解 的图像结果](https://tse3-mm.cn.bing.net/th/id/OIP-C.Xe_d6v5vbUYfVXj4FEXjKAAAAA?w=115&h=180&c=7&r=0&o=5&dpr=1.5&pid=1.7)

5.伪代码（pseudocode）：使用简单的语句表示程序思路。有助于理解代码。

6.relational operator（关系运算符）：<,==,!=,>,<=,>=,==。

7.scanf（）函数的返回值为输入与转换说明的匹配次数。

8.下面是对scanf()错误使用的示例：

```c
#include<stdio.h>
int main() {
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &sum);
	while (status = 1)//a false the entry condition always is true
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);
	
	getchar();
	return 0;

}
```

但该程序输入q等字母时:循环将一直进行下去出现无限循环。原因是：当scanf（）读取到q时，他的读取位置不会发生改变下次读取仍然是原位置开始读取，仍然读取q仍然会错误所以循环就一直进行下去了。

9._Bool变量只有0和1.

10.优先级问题：通过所写代码推测应该和正常的数学优先级是相同的。

11.两种循环：不确定循环（indefinite loop）在测试表达式为假前不知道要进行几次循环。上面的示例就是一个有点瑕疵的indefinite loop。

计数循环（counting loop），可以通过数学运算得出循环次数的loop。

### for循环

12.最灵活的循环for循环。p130给出了许多例子

for(initialize;test;update)

​		statement.

13.逗号运算符：逗号运算符的左侧都会在执行逗号运算符的右侧之前进行。也就是说如果你写在逗号运算符左侧的变式可能并不像你想的那样运行。

​	同样使用，的叫做分隔符。要与逗号运算符区分开。

### do  while循环

14.最后的循环-唯一的出口条件循环（exit-condition loop）

do

​	statement

while（expression）；

15.数组（array），存储相同类型变量的集合，我们可以通过下标访问数组元素（element）。

三个用于识别数组元素的名称：下标（subscript），索引（indice），偏移量（offset）。

16.函数。C语言的特点是先声明一个函数被称为前置声明（forward declaration）只有声明后main函数才能调用它。

## 第七章：C控制语句：分支和跳转

1.if{

statement

}

2.if{

statement

}else

3.需要注意的是else与if之间中间只能有一个语句（复合语句和简单语句）。

4.c编译器要求至少支持127层嵌套if语句。

5.putchar();-printf("%c",ch);

ch=getchar();-scanf("%c",&ch);

6.#include<ctype.h>

头文件中包含着大量函数**p156**有详细介绍

7.#include<stdbool.h>

内部包含着true和false以及bool的函数原型。

8.#include<iso646.h>

逻辑运算符备选。

9.逻辑运算符：

&&-逻辑且。

||-逻辑或。

！-逻辑非

10.易错点：变量的范围表示方法，切记不要使用数学方法表示函数范围，应使用逻辑运算符的方法表示范围。

12.条件运算符：？：——例如x=(y<0)?-y:y;该语句的作用是当y小于0是x=-y;y不下于0x=y;

通用形式——expression1？expression2：expression3

13.continue和break语句——分支和跳转语句均可以使用

continue——是程序跳过处理有效输入部分的代码。程序开始下一轮循环，并开始读取下一个输入值。

break——终止包含他的循环以及跳出switch语句

14.switch语句：多重选择语句-重点：标签（label）-读取每行的首字母；

多重case-可以避免使用大部分包含在ctype.h文件夹里。

15.if else 语句多重选择时可以选择使用switch

16.goto语句尽量避免使用因为他会破坏程序的可读性——会胡乱调转至程序的任一部分

goto part1;

part1:statement;

# 第八章：字符输入/输出和输入验证

1.input和output--I/O函数。

2.典型的I/O函数（scanf()、printf()、getchar()、putchar()）。

3.输入 输出中的缓冲区

无缓冲输入-用户输入字符后立即打印对应字符。

缓冲输入-在用户按下Enter键之前系统不会重复打印输入字符。

4.完全缓冲I/O-当缓冲区被完全填满是才会刷新缓冲区。

刷新缓冲区-刷新缓冲区指的是输出时将输出缓冲区里面的内容传给屏幕，显示出来；将输入缓冲区里面的内容传给变量。达到 清空缓冲区的效果。

行缓冲I/O-按下Enter键立刻刷新缓冲区。

5.文件（file）存储器存储信息的区域。

6.底层I/O-可以直接调用操作系统的函数（用于处理文件）。

7.标准I/O包(standard I/O package)-同底层I/O一样处理文件。

8.文件结尾符Ctrl+z-编译器中显示为^。

9.由于\n字符的存在输入n时系统会把\n中的n也作为n进行了输入也就是说本想输入一个n字符结果系统认为输入了两个n字符

解决方法：

```c
while(getchar()!='\n'
      continue;
```

这一语句虽然解决了\n的问题，但是仍然存在其他字符的干扰，毕竟我们真正想要输入的字符只有n和y，但是其他字符也可以输入，因此程序并没有达到想要的功能

解决方法：

```c
char response;

while((response=getchar())!='y')
{
    if(response == 'n')
        printf("Well,then,is it %d?\n",++guess);
    else
        printf("Sorry, I understand only y or n.\n");
    while(getchar()!='\n')
        continue;
}
```

10.getchar()和scanf()的区别：也是上面程序出现问题的原因。

getchar()-读取输入的每一个字符包括空格、tab和换行符'\n';

scanf()-读取数字会跳过空格、tab和换行符'\n'；

11.程序8.5中出现问题的原因scanf()不会跳过换行符，而是把\n留在了缓冲区中，紧接着getchar()读取'\n'程序结束。

12.模块化编程--程序越大模块化编程就更加重要

13.菜单浏览-对用户友好的编程程序。

14.使用菜单浏览时可以把getchar()函数换为get_first()函数。

get_first()只读取输入的第一个字符可以避免换行符的影响。

例如我们输入act-get_first()只是读取a这一个字符。

```c
char get_first()
{
    int ch;
    ch = getchar();
    while(getchar()!='\n')
        continue;
    return ch;
}
```

# 第九章：函数

## 函数

1.函数（function）-黑盒-使用函数时只需了解函数的功能和return值，其他的细节都在函数内部。

2.函数（function）包括三处函数标识符-*函数原型*（function prototype）-告诉编译器函数类型如void int……

*函数调用*（function call）-函数执行的开始。

*函数定义*（function definition）-函数可以做什么。

3.*函数原型* 中告诉了函数的返回值类型又称签名（signature）。

4.主调函数main（calling function）-程序运行的主体。

5.函数内部的变量-局部变量（local variable)变量的声明只是在该函数内部有效。

6.形式参数(formal arguement\formal parameter)-简称形参。//存在于被调函数中

7.ANSI C 接受所有版本的C函数定义形式，但是不建议使用。

8.函数在定义时有两种可以使用的形式（最新标准）-void show(char);或viod show (char a);

9.实参（传给函数的值）-(actual argument)。//存在于主调函数中

10.函数的黑盒效应-我们不需要知道函数内部是什么，我们只需要告诉用户这个函数的如何调用，调用后发生什么就可以了

11.注意函数的结束我们自己认为是调用一次return后

12.原来的标准会默认函数的类型为int但是现在不可以。

13.调用函数时注意要让实参和形参相互对应。

14.函数最重要的应用递归调用-一般不用因为它会产生大量的变量占用太多的空间。

15.最常见的递归方式尾递归。

16.递归最适合的处理是倒序问题。递归不只是但递归还可以双递归等。

17.头文件-保存所有的函数原型的声明，包括define等全局变量。

18.main函数占一个.c文件，其他函数占一个.c文件。但是不管是main还是其他函数都有包含头文件。

## 指针（pointer）

1.指针是c语言最复杂的概念。

2.%p转换说明-地址ANSI C 专门为指针提供的。

3.指针指向一个变量，可以通过指针直接修改变量，指针和变量是一体的。根据这一个特性，指针就比较适合在函数使用。

4.如果函数形参只是普通的变量，那么函数如果要对主函数中的值改变，就无法做到，但如果形参是指针变量那么就可以完成对主函数中变量赋值改变。因为指针指向该变量的地址，对指针进行改变就是直接原变量改变。

5.pointer是一个被赋值为地址的变量。-原文为：一个值为内存地址的变量。

6.c没有引用变量。

### 变量地址和值

1.编程时变量有-名称和值

2.编译和加载程序时变量有-地址和值

地址时变量在计算机内部的名称。

## *间接运算符

1.间接运算符*(indirection operator)又称解引用运算符(dereferencing operator)

```c
int nurse = 22;
int *ptr;
ptr = &nurse;//*ptr表示存放在&nurse地址上的值。
int val=*ptr//val=nurse=22;
```



## &地址运算符

1.

```c
int variable;
int x=&variable;//x存储的是variable的地址
```

# 第十章：数组和指针

## 数组：

1.一般用来统计大规模的数据。

2.数组(array)-由数据类型相同的一系列元素组成。

3.[]内部表示表示元素个数。-均为同类型元素。

4.调用数组中的元素需要使用地址或索引调用。

5.数组可以理解为多个变量-只能存储一个值的变量有时候又称为标量变量。

6.推荐使用宏定义为数组[]内数字。

7.如果需要把数组设置为只读（保护数组内部数据）。程序只能从数组中检索值而不能将新值存入数组也不能改变数组内部值。

8.要使用数组就要先初始化数组-其他的变量也相同要想使用必先初始化。

9.所有的变量都有两个存储类别

​									     a.自动存储类别。

​										 b.静态存储类别。- 需要在声明变量时加上static

10.数组初始化前后的区别：

​			a.初始化前：存储的均为垃圾值。

​			b.存储后：未初始化部分变为0

11.数组大小的计算可以使用sizeof()函数来计算数组大小。例如：

```c
int days[]={……}；
int num=sizeof days/sizeof days[0];//num的值即为days的数组存储的数据数量
```

12.初始化器(designated initializer).例如：

```c
int arr[6]={0,0,0,0,0,212};//传统的初始化方式
int arr[]={{5}=212}l//使用初始化容器的初始化方式
//两种方式是等效的
```

13.使用初始化容器后会自动跳过中间未初始化的部分（自动赋值为0）而从容器之后依次赋值。

14.c语言不允许将数组赋值给另一个数组，只有声明数组时才可以使用{}来赋值。

15.数组边界越界问题-使用越界数组的下标会导致程序改变其他变量的值。

16.多维数组

理解

```c
float rain[5][12];
/*对该二维数组进行解释-首先建议一个rain[5]的一元数组--称为主数组(master array)，数组内有5个元素，以rain[0]为例：rain[0]是包含12个元素的一维数组。*/
//另一种理解方式就是把主数组看作最大的盒子，其他的数组则是套在盒子内部的小盒子，依次套娃。指针增加一就是最大的盒子换成下一个。
*(*rain+1)==rain[1][0];
/*由于rain[0]和rain[0][0]公用同一个地址rain所有可以使用**rain来表示rain[0][0];但是如果我们给*rain先递增然后再显示指向的值-显示的值为rain[1][0]对应的值，因为*rain的递增只是对于master array而言。*/
//初始化过程可能会出现的问题
int sq[2][3]={{5,6},{7,8}};
int sq[2][3]={5,6,7,8};
//两者不等价第一种sq[0]={5，6}；
//第二种sq[0]={5,6,7};
//注意这种问题但是如果保证初始化数值足够就不会产生错误。
```

17.变长数组(variable-length array)-简称VAL-使用变量来指定数组的大小。

18.保护数组内部数据可以将数组声明为const关键字声明。

19.在C中，指针加1的是增加一个存储单元。数组增加的是下一个元素的地址。

20.指针加一，指针的值递增它所指向类型的大小。

21.

```c
//辨析
int date[]={……}；
*date+2;//表示第一个值加二；
*(data+2);//表示指向第三个值。
```

## 数组和指针

1.

```c
int sum(int * ar);//获得该数组首元素的地址。及实参为地址变量。
```

2.指针形参的使用：

如果我们要对数组的所有数据进行遍历，那么我们可以使用两个指针形参其中一个指向数组首地址，另一个指向尾地址（首地址加数组数据大小），通过判断指向位置是否相同，来遍历所有数组元素。

3.为什么要用指针形参-因为指针是最接近机器语言的，地址才是计算机的本质。

4.指针类型应当与对应的地址类型相同。

5.如果指针指向超过了数组大小，只有一种可能是可行的-正好超过了数组末尾的第一个位置（包括前部尾端和后尾端），c保证该指针有效。

6.指针求差-计算同一数组两个数的距离。例如：

```c
int *ptr1;
int *ptr2;
int n=0;
int arr[]={……}；
ptr1=arr[4];
ptr2=arr[1];
n=ptr1-ptr2;//计算值为3，并不是三字节二十3个int
```

7.指针使用是程序只是分配了存储指针本身的内存，但是未分配存储数据的内存，因此在使用之前需要初始化这一点同变量是一样的。

8.保护数组内部数据-方法在形参中使用const 声明指针-如果我们这样声明了那么如果对数组内部数据进行更改就会产生错误。

9.双重间接(double indirection)

```c
//二维数组中出现
int zippo[4][2];={……}；
**zippo==*&zippo==zippo[0][0];
*zippo==zippo[0]==&zippo[0][0];//printf后均显示为首地址。
*(*(zippo+2)+1)=zippo[2][1];
```



10.指向多维数组的指针：

```c
int zippo[4][2]={……};
int (*pz)[2]=zippo;//pz表示指向zippo[0][0]、zippo[0][1]两个元素的指针。
int *pax[2];//表示声明了指针数组。
```

11.指针的赋值要比普通变量严格的多：例如：

```c
int n=5;
double x;
int *p=&n;
double *pd=&x;
x=n;//合法
pd=p;//不合法
```

12.多维数组以及指向多维数组指针的严格性。

```c
int *pt;
int (*pa)[3];
int ar1[2][3];
int ar2[3][2];
int **p2;
pt=&ar1[0][0];
pt=ar1[0];//ar1[0]表示的是ar1[0][0]的地址这是有效的原因。
pt=ar1;//无效,pt应该是指向一维数组的指针，不可以指向二维数组。
pa=ar1;pa=ar2;//均有效。
p2=&pt;//p2是指向int *类型的指针。而pt是int*类型所以有效。
*p2=ar1[0];//p2=&pt表面*p2=*pt;
p2=ar2;//无效p2表示指向指针的指针，而ar2表示指向数组首元素ar2指向的是int类型的变量；故无效。
```

## const使用指南

1.

```c
//第一种情况-与#define相同。
const PI=3.141593;
#define PI 3.141593;
//以上两种情况完全等效。
//其他情况const指针，const数组，指向const的指针。
```

只要使用const，那么他就不可能被改变。

2.const指针可以指向普通数组也可以指向const数组。

3.非const指针只能指向非const数组。因为非const指针指向const指针不安全-程序可以通过非const指针改变const指针指向的数据。

4.const指针的两种定义

```c
//第一种
const double *ptr；//可以改变指向的地址，但不能修改地址所对应的值
//第二种较为严格-既不能改变指向的地址，也不能修改地址所对应的值
const double const*ptr；
```

5.c++运行将const型常量作为数组大小，但是c不允许。c运行将const指针赋给非const但是c++不允许。

## 函数和多维数组

1.函数形参形式：

```c
//接收的实参为二维数组，其他多维数组类型相同。
void somefunction(int (*pt)[4]);
void somefunction(int pt[][4]);
void somefunction(int pt[][]);//错误的声明。
void somefunction(int pt[3][4]);//虽然有效但是3会被省略
```

## VAL-变长数组

1.c99标准之前c规定，数组的维数必须是常量，不能能用变量。

2.c99之后增加了变长数组，运行使用变量。

3.变长数组只能是自动存储类型。

4.c99/c11标准运行省略函数原型中的维度形参名而用*替代。

## 复合字面量

1.复合字面量(compound literal)

```c
int diva[2]={10,20};
(int [2]){10,20};//与diva等价但是匿名使用只能在声明时初始化。
int *pt1;
pt1=(int [2]){10,20};//直接通过指针操作匿名数组。
//多维类似
```

# 第十一章：字符串和字符串函数

1.\0是字符串的结束符。

2.puts函数：输出字符串并自动给字符串的末尾增加换行符\n。

3.字符串字面量（string literal)-字符串常量(string constant)-使用""括起来的内容。

4.在声明字符串是如果两个字符串之间没有间隔。

5.字符串属于静态存储类别(static storage class)-只会被存储一次，存在与整个程序的生命周期。

6.

```c
//字符串的内容被视为指向该字符串存储位置的指针。
printf("%s ,%p, %c\n","We","are",*"space farers");
//分别打印字符串We "are"的首地址 s-字符串前解引用所以显示首字母。
```

7.字符数组和字符串的区别在于是否有空字符。

8.声明字符串的三种方式。

```c
char car[10]="Tata";//不推荐
const char *pt1="Tata";
const char ar1[]="Tata";
/*字符串在程序未开始执行时存储在静态存储区，执行后程序为数组分配内存，然后再把字符串拷贝给数组，所有字符串首元素的地址不等于数组首元素的地址，数组中的字符串是一个备份，数组的首地址是备份的首地址。ar1是地址常量不可以更改ar1(存储位置不可能改变)，可以进行ar1+1这种操作但不能进行++ar1这种操作。*/
/*指针形式是在等于指针是编译器会为指针预留存储位置程序一旦开始执行-就会给指针变量留出位置并将字符串的地址存储到为指针预留的位置中。*/
```

9.
