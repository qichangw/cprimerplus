# C Primer Plus

## C语言概述：

1.一个项目只有一个main函数

2.注释使用/**/和//

3.{}表示begin和end

4.使用变量（variable）{又可以称为标识符（identify）}时要声明（declaration）；注意使用关键字（keyword）；

5.\n为转义序列（escape sequence）表示难以输出或无法输出的字符有换行之意

6.%d转换说明，为变量占一个整数值；

7.variable命名时不要超过63个字符，不可以以数字开头，数字，字母，_（下划线）均表示一个字符；

8.C语言的基本模块：a.#include

​                                     b.int main(){  语句 return 0;}

​                                     c. keyword function（）；具有特定功能的函数

9.程序错误一般可以分为两类：

a.语义错误：这个错误系统无法检测

b.语法错误：一般是忘记分号等问题，编译器可以将问题解决

## 数据与C

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

## 字符串和格式化输入/输出

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

7.精度问题精炼：以%5.3为例
a.如果%5d，编译器会保留最小五位空格宽度输出字符，默认右对齐如果想要左对齐可以使用%-5d

b.如果是%5.3d，编译器认为总共保留最少五个空格宽度输出字符，只有三位输出字符

c.如果是%05d，编译器保留最少五位空格宽度输出字符，其中并不齐全的空格宽度使用0补齐

d.如果是%05.3d，编译器会自动省略前导0，而与b所表示的情况相同

8.本章中讲解了很多的库内置常数，他们都是表示某一类型数的最大值和最小值一般是类型大写_MIN或 _MAX

9.烫烫烫烫对应的是0xcc，在debug的栈中C语言把未初始化变量的数组以0xcc存储

10.scanf不等于初始化，局部变量在定义时应当使用赋值运算符进行初始化

scanf会下跳过一个输入前的空白

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

## 运算符、表达式和语句

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

## C控制语句：循环

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

## C控制语句：分支和跳转

### if/if……else/elseif-分支语句（branching statement）或选择语句（selection statement）

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

10易错点：变量的范围表示方法，切记不要使用数学方法表示函数范围，应使用逻辑运算符的方法表示范围。

