
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "圆环梯");
  set ("long","
    在你旁边就只剩一道木门了..想过去就过去吧～

 ");                                  
   set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r36.c",
  "westup" : __DIR__"r34.c",
]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup();  
}
int valid_leave(object me,string dir)
{
    if ( me==this_player() && dir=="west" )
        {
        tell_object(me,HIG"你轻轻的推开了木门走了过去!!\n"NOR);
        }
    return ::valid_leave(me,dir);
}

