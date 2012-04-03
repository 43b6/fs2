// Room: /open/capital/room/king/kr2-6
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "承德宫");
  set ("long", @LONG
这里便是天子享福用的后宫承德宫，目前里面大概有一百多位嫔
妃住在里面，每天过着等待的日子，看看皇上那天心情好会去掀她们
的牌子，这里是严禁男性进入的，眼前那几位太监就是保护监督众嫔
妃，以防止有发生有损皇室名誉的事情发生。
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/nobird.c" : 1,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"kr2-6",
]));

  setup();
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"皇宫守卫大声的对你说:皇城禁地岂容你大声喧哗，还不快滚!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
