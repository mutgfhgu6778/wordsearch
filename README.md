# Assignment overview
The purpose of this assignment is to provide the student with experience with pointersstructures, and dynamic memory in a C program. It will provide the student with initialexperience with multiple C source les and C header les.
为您提供 CS , DS , 商科 编程作业代写

<img src="design2023866.jpg"  width="200" />

The goal of the exercise is to implement a program to called "inputsearch.c", to processand search input text.
1.Performing any word processing capability requires the program to store an indeterminateamount of data for retrieval and editing.
This assignment will provide an exploration of what it takes to manage the input andstorage of this type of data.
The amount of data is unknown, and the program must be able to handle any volume ofdata. This means the program will have to allow for any amount of text.
The program will allow for any number of lines of text and any number of words in eachline of the text.
Your program must be written using dynamically allocated memory to process anywherefrom one to an unlimited number of lines of text. Each line must be able to processanywhere from one to an unlimited number of words. Therefore. using a set size array ofcharacters or a set size array of lines is not viable. No constant values should be used inthe array declarations.
To keep this assignment easy, the user can declare the input character array of a speci cset size. For example, assuming the input string array is labeled str then the line:char str/1024/;
is allowed.
2.The mechanism we will use to store these words and sentences will be based on speci c2structures. The structures must be de ned using typedef in order to create variable aliasesfor each structure. Each structure can only contain the two elements listed in each. Donot add any other elements to these structures.
The structure for the word construct is:
(a) a pointer to a character
(b) an integer to store the exact number of characters in this WordThe type of word is a pointer to this word structure.
The structure for the line construct is:
(a) a pointer to the word listed above
(b) an integer to store the exact number of words in this LineThe type of line is a pointer to this line structure.
The structure for the para construct (for paragraph) is:
(a) a pointer to the line listed above
(b) an integer to store the exact number of lines in this paraThe type of para is a pointer to this para structure.
3. To make the assignment simple, we provide the type de nitions for the three structuresand their constructor and destructor functions. You are NOT allowed to change thetype de nitions and the constructor and destructor functions. Please note that theseare provided without proper comments. You should add comments and course requirecinformation.
// ===== type definitions should be in a .h file, e.g. definitions.h
```
typedef struct {
char *cp;
int size;
 word struct;
}typedef word_struct* word:

typedef struct {
word *wp;
int size;
] line_struct;
typedef line_struct* line;
typedef struct {line *lp;
int size;
} para_struct;typedef para_struct* para;
```
// ===== end of type definitions

## 服务内容
代写 or 辅导英国、法国、德国、芬兰、瑞典、荷兰、美国，澳大利亚，日本，韩国，新加坡等海外留学生，Essay, Report, assignment, homework, project, lab, final and so on。
只要是计算机(computer science)、数据科学（Data Science）、商科（Business Administration）领域的算法或开发任务都能接，以及基础数学、AI算法数学理论、金融计算机、量化投资模型也都在考虑范围。此外，擅长但不限于以下领域：

    - 各类linux下开发，汇编，gdb。
    - Machine learning，Deep learning ，Reinforcement learning（机器学习、深度学习、强化学习）。
    - Network technology( OSI, TCP/IP, UDP, unix system, windows, mobile, V2X)（网络、通信原理技术）。
    - Cyber security(Owasp top 10, OSI, TCP/IP, UDP, unix system, windows, mobile, V2X)（网络安全）。
    - Website development, extension development, GUI development，APP development。
    - （前后端开发、网站开发、插件开发、桌面应用开发、安卓APP开发）。
    - Mathematics(artificial intelligence, probability theory, stochastic process, linear algebra)。
    - （数学公式推导，特别擅长微积分、概率论、矩阵、机器学习/深度学习/强化学习涉及的数学知识）。
    - Automatic program, cloud service deploy（自动化程序开发、云服务部署）。

## 作业代写价格:
|类型|美元|人民币|
|-----:|-----:|-----:|
|Assignment|$60-$120|¥400-¥800|

### 为了方便快速定价和确定是否代做，麻烦提供私聊的时候提供以下信息：
如果是作业，提供本次作业要求文档；如果是考试，提供考试范围和考试时间
一两句话概括一下作业任务或者考试任务，比如”可以帮忙实现一个决策树算法吗？”、”网络安全选择题考试，范围是内网横向移动知识点”
### 作业定价有两种方式：
    - 根据定价标准进行
    - 通过微信我们一起协商
## 联系方式

微信（WeChat）：design2023866

<img src="design2023866.jpg"  width="200" />

