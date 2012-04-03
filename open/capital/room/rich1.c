// by Onion
#include </open/open.h>
inherit ROOM;
string do_boxes();
void create ()
{
  set ("short", "干通天内院");
  set ("long", @LONG
走进这儿, 是干通天住宅的内院, 一片平坦的地方, 而角落还堆放
着几个大箱子(boxes), 不知放着什么东西, 由于是钱通天的地方, 使
你有点想搜查(search)的好奇心。

LONG);

  set("light_up", 1);
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"rich",
]));
	set("item_desc",([
	"boxes"	: "几个大箱子, 里头不知道放了什么东西。\n",
	]));
	set("search_desc",([
	"boxes" : (: do_boxes :),
	]));
	set_temp("有狗",1);

  setup();
}

string do_boxes()
{
	if( query_temp("有狗") ){
		tell_room( this_object(),"[1;33m不知道从哪儿冲出来一只凶猛的獒犬。[0m\n");
		new(CAPITAL_NPC"dog0")->move(this_object());
		delete_temp("有狗");
	}
	return "这几个箱子都上了锁, 你没办法打开。\n";
}		

	