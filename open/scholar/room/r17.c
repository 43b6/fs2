// Room: /u/j/judd/room/r17.c
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "儒门中堂书房");
  set ("long", @LONG
这里是江湖上有名的奇侠「九指书生”圣贤书所在之地，书房
虽然看起来十分的简陋，却有十分不平凡的气魄，足足显示读书人
的文学之气，在这边的墙上有一幅画，画中写着几行字：
 
          「山不在高，有仙则名
            水不在深，有龙则灵
            居陋室者，圣贤书也” 
 
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"study.c",
  "south" : __DIR__"r20.c",
  "down" : __DIR__"eqroom",
]));
  set("objects", ([ /* sizeof() == 1 */
   "daemon/class/scholar/master_sue" :1,
]));
  set("light_up", 1);
  set("valid_startroom", 1);

  setup();
        call_other("/obj/board/sue_b", "???");
}



void init()
{
  add_action("do_enter","enter");
}

int do_enter(string str){

 object me = this_player();
if(me->query("liyu")==5)
    me->move("/open/gsword/room/appo/liyu1.c");  
 return 1;
}
int valid_leave(object me, string dir)
{
if (dir == "down" || dir == "north")
	if ( !wizardp (me) && me ->query("family/family_name") != "儒门")
     return notify_fail("那个房间只有儒门弟子才能进去。\n");
     return :: valid_leave(me, dir);
}

