 // Room: /open/poison/room/room19
#include <ansi.h>
#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
  set ("short", "牢房");
  set ("long", @LONG
这里四处都是铁墙铜壁的，乃是冥蛊魔教用来囚禁重犯
之用，这里不像对面那般杂乱，反而显的额外整齐，只是地
上已铺上一层薄薄的灰尘，看来已有一小段时间无人踏入此
地，仔细一看，墙角处堆放了一个不起眼的箱子。
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"path13",
]));
  set("need_key/south",1);
  create_door("south",HIB"蓝色铁门"NOR,"north",DOOR_LOCKED);
  set("box_get",0);
  setup();
}
void reset()
{
  set("box_get",0);
  :: reset();
}
void init()
{
  add_action("do_search","search");
  add_action("do_push","push");
  add_action("do_look","look");
  add_action("do_look","l");
  add_action("do_get","get");
}
int do_get(string str)
{
  string str1, str2;
  object me, book;
  if(sscanf(str,"%s from %s",str1,str2) != 2)
        return 0;
  if( str1 != "book" || str2 != "box")
        return 0;
  if(query("box_get"))
	{
	  tell_object(me,"你想从空箱中拿出什么呀! \n");
	  return 1;
	}
  set("box_get",1);
  me = this_player();
  book = new(POISON_OBJ"box_book");
  book->move(me);
  message_vision("$N从箱中搜出一本书来。\n",me);
  return 1;
}
int do_search(string str)
{
  object me = this_player();
  object ob;
  if(!str || str != "hole" || !me->query_temp("box_moved"))
        return 0;
  if(me->query("lotch") == 5) {
        tell_object(me,HIC"经过你的搜索之后，你发现了一样东西。\n"NOR);
        tell_object(me,HIC"你取出仔细一看。哇! 竟是传说中的炼妖壶。\n"NOR);
	me->set("lotch",6);
        ob = new("/open/gblade/mob/lotch");
        ob->move(me);
        return 1;
      }
  tell_object(me,"你仔细搜查好几遍，还是找不到任何东西。\n");
  return 1;
}
int do_look(string str)
{
  object me = this_player();
  if(!str)
        return 0;
  if(str == "box" || str == "箱子") {
        if(!query("box_get"))
                tell_object(me,"这是一个沉重的铁箱，箱子内藏有几本书。\n");
        else
                tell_object(me,"这是一个沉重的铁箱，箱内空空如也，什么都没有。\n");
        return 1;
      }

  if(str == "hole" && me->query_temp("box_moved")) {
        tell_object(me,"这是一个不明显的小洞，其内不知藏有何物? \n");
        return 1;
      }
  return 0;
}
int do_push(string str)
{
  object me = this_player();
  if(!str || str != "box")
        return notify_fail("你想要推什么?\n");
  if(me->query_temp("box_moved"))
        return notify_fail("你已经推开箱子了呀。\n");
  tell_object(me,"突然阵阵银光撒出，顿时四面八方尽是光影。\n");
  if(me->query("kar") < 30 && random(me->query_skill("dodge")) < 20) {
        tell_object(me,"一不小心，闪躲不及，你中了几针银针。\n");
	me->apply_condition("dark_poison", 3);
       }
  else
        tell_object(me,"很幸运，你闪躲过所有的银针。\n");
  me->set_temp("box_moved",1);
  tell_object(me,"在推开箱子后，你发现其下有一小洞(hole) 。\n");
  return 1;
}
