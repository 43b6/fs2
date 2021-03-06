inherit ROOM;

#define WADE_HOME "/u/w/wade/workroom"

void create ()
{
  set ("short", "LPC 讲座 -- 阵列");
  set ("long", @LONG
阵列就是一连串相同资料型态的变数连续放在一起, 如字串是一连串的
字元排在一起, 阵列可以使得变数的使用变的简单一些, 例如:
	if (str == "gold" || str == "silver || str == "coin) ....
这种方式可以变成先宣告一个阵列如:
  string *money=({ "gold", "silver", "coin" });
判断时就可以用 if (member_array(str, money) == -1) ................;
注意, 因为阵列是从 0 开始算的, 所以不在该阵列中传回值是 -1,
当然, 忘了早点说, 阵列的宣告是用 *, 如 int *integer, string *money 等
常用的有 object	*obs=users();	// users() 传回所有上线使用者的物件阵列
阵列的加法, 假设宣告如 string str1, str2, *ary1, *ary2, *ary;
那么.....:  ary = ({ str1 }) + ({ str2 }); 跟底下相同意思:
	    ary = ({ str1, str2 });
	阵列加阵列如: ary = ary1 + ary2;
LONG);

  set("exits", ([
	"back"	:	__DIR__"lpc",
  ]) );

  setup();
}
