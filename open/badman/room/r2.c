// Room: /open/badman/room/r2

#include <room.h>
#include </open/open.h>

inherit ROOM;

string search_bottle();

void create ()
{
  set ("short", "春流诊所");
  set ("long", @LONG
这是一间小小的诊所，里面只有一张破旧的桌子和两个堆满瓶
瓶罐罐的橱柜(cupboard)。一大堆不知名的药材堆放在房间四周的
地板上，不识货的人还以为这里是个柴房呢。你看到桌子上放着厚
厚的一叠笔记(note)，大概万神医又在做什么研究了吧。
    墙上挂着一张营业项目表(list)。
    你注意到西边有一扇木制的门。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r4",
  "north" : __DIR__"r3",
  "south" : __DIR__"b10",
]));

  set("item_desc", ([ /* sizeof() == 2 */
  "note" : "笔记上写了密密麻麻的文字和一堆奇怪的符号，这大概是万神医苦心研究\n的成果吧，只可惜你都看不懂。\n",
  "cupboard" : "在这个旧旧的柜子上放了一些绷带和伤药，另外还有许多大大小小的罐子(bottle)。\n",
  "list" : "\n\t营业项目      收费标准\n\n\t疗伤(外伤)    一两银子/每点气\n\t止血          五两银子/每回合\n\t解毒          五两银子/每回合(蛇毒)\n\t              二两金子/每回合(天冰奇毒)\n\n",
]));

  set("search_desc", ([ /* sizeof() == 1 */
  "bottle" : (: search_bottle :),
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/one" : 1,
]));

  set("light_up", 1);

  create_door("west", "木门", "east", DOOR_CLOSED);
  setup();
}

string search_bottle()
{
	object who = this_player();

	if( who->query_temp("get_pill") )
		return "当你想再偷拿一颗的时候，突然感觉到背后似乎有双眼睛在盯着你，\n于是赶快把手收了回去。\n";
	who->set_temp("get_pill", 1);
	if( random(2) )
		new(BAD_OBJ"s_pill")->move(who);
	else
		new(BAD_OBJ"f_pill")->move(who);
	return "你趁着大家不注意，赶紧偷偷从罐子里摸了颗药丸出来，藏在口袋里。\n";
}
