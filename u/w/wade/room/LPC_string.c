inherit ROOM;

#define WADE_HOME "/u/w/wade/workroom"

void create ()
{
  set ("short", "LPC 讲座 -- 字串");
  set ("long", @LONG
使用字串前记得要先给它"零"值, 例如:
    str = "";		// 字串零值
    for (i=0; i<3; i++) str += "..............";	// 没给初值会错掉
一般来说, 字串也许是空的, 判断的方式可以是：
    if (str == "") ......................;
或者是:
    if (!str) ...................;	// 有时会没初始字串, 跟 str==0 一样
    if (!stringp (str)) ............;	// 判断某一变数是否为字串型态
此外说一个观念三个函数, 字串是字元阵列构成的, 所以可以像下面的用法:
    str = arg[0..3];
    msg += str[10..strlen(str)];	// strlen() 传回字串长度
    值得注意的是, 字串的引用是从 0..strlen(str)-1
另外, 要变成大写是用 capitalize(str);
      要变小写是用   lower_case(str);
      要把字串变成相对的数字可以用 sscanf (str, "%d", i); 这种方式,
          字串可以直接加(+)数字, 也就是把数字当成字串, 如
	  str = "My age is "+age;
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "back"	: __DIR__"lpc",
]));

  setup();
}
