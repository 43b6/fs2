// Room: /open/capital/room/king/kr5-4
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "皇城禁地");
  set ("long", @LONG
这儿就是大内皇城禁地, 在此地不得大肆喧嚷, 北方的阶梯即通
往朝圣殿, 在早朝时会有许多大臣在此地等待圣上传进, 在附近通常
有禁卫军在巡视, 往东走可以通往明和园, 往西可以通往东厂, 南
边不远处即为皇宫大门.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"kr5-3",
  "south" : __DIR__"kr6-4",
  "east" : __DIR__"kr5-5",
  "north" : __DIR__"kr4-4-1",
]));
  set("no_transmit", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/taigan1" : 2,
]));
  set("outdoors", "/open/capital");

  setup();
}
int valid_leave(object who,string dir)
{
           if(dir && present("soldier",environment(who)))
  {
        if((who->query("class")=="officer" && who->query_temp("can_in")==1) || (who->query("class")=="taigan"))
        {
        return :: valid_leave(who,dir);
        }
        else
        {
  return notify_fail("皇城禁卫军说道:你想跑?!跑得掉吗?\n");
        }
  }
        return :: valid_leave(who,dir);
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
