
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "凤仪殿");
  set ("long", @LONG
这儿就是当今皇后的寝宫，你一进来就被满室的香气所迷倒，眼
前的太后正在绣一方手巾，看她文静的样子，使你对皇后产生了无上
的敬意，不过皇后似乎因为你无缘无故进来而吓了一跳。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/kingwife" : 1,
  "/open/capital/npc/kingirl" : 2,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr2-5",
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









