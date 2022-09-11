# C Primer Plus

## C语言概述：

1.一个项目只有一个main函数

2.注释使用/**/和//

3.{}表示begin和end

4.使用变量（variable）{又可以称为标识符（identify）}时要声明（declaration）；注意使用关键字（keyword）；

5.\n为转义序列（escape sequence）表示难以输出或无法输出的字符有换行之意

6.%d占位符，为变量占一个整数值；

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

5.整型：short int   16bit

​               int    16或32bit

​               long int   32bit

​               long long int  64bit

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

7.char  1byte

引例：char grade= 'FATE';系统只读取最后八位

8.非打印字符：ASCⅡ码

9.初始化（initialize):给variable开辟一个与变量类型相应大小的空间
