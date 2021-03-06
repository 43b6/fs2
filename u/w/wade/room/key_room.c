// Room: /u/w/wade/room/test.c
// 相对应的钥匙放在 /u/w/wade/obj/key.c
// 房间需 #include <room.h>
// 房间需设定 set("need_key/方向", 1)
// create_door() 须放在 set("exits"....) 之后
// 锁的相关命令是 lock/unlock, 请用 help lock/unlock 去得到相关讯息


#include <room.h>
inherit ROOM;

void create()
{
	set("short", "钥匙房");
	set("long", @LONG
	// 想要有门, 只要用 create_door() 函数即可, 如下所示
	// 值得注意的有两项, 一是函式格式问题, 请自行参考
	// 另一件就是门一定要在两边同时定义, 请去此房间的另一边参考
	create_door("east", "红漆大门", "west", DOOR_OPENED);

	// 至于想要有钥匙, 则只需如下所示
	// 钥匙则可以有两种不同的模式, 一是特定的, 一是万用的
	// 目前没有防止人家用万用钥匙的功能, 可以自己用 init() 函数
	// 定义自己的 open 命令来使用, 至于钥匙范例, 请去底下目录寻找
	// ~wade/obj/key.c
	set ("need_key/east", 1);
LONG
	);

	set("exits", ([
	    "east"	:	"/u/w/wade/workroom"
	]));
	set ("need_key/east", 1);
	create_door("east", "红漆大门", "west", DOOR_CLOSED);

	set("light", "1");
	setup();
}
