//written by acelan...../u/a/acelan/room/wood26.c
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "岩壁");
        set("long", @LONG
似乎已经走到森林的尽头了, 往前是一大片光秃秃的岩壁(wall)
, 看来已经没有办法再继续前进了。微弱的阳光由后方的森林穿射而
出, 四周的杀意似乎减轻了许多, 但却又多了几分诡异与肃杀。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : "/open/killer/mon/room/wood19.c",
   ]));

        set("no_clean_up", 0);
        set("item_desc", ([ /* sizeof() == 1 */
            "wall" : "这般光滑的岩壁, 若非有极高的轻功, 否则万难攀登。\n",
        ]));
        set("search_desc", ([ /* sizeof() == 1 */
            "wall" : "岩壁上似乎有着些许脚印, 看来已有前辈高人来过此地。\n这不禁另你想要运起轻功(moveup), 上去一探究竟。\n",
        ]));
        setup();
}
void init()
{
   add_action("do_moveup", "moveup");
}
int do_moveup( string arg)
{
   object user;
   user= this_player();
   if( user->query("quest/rain")==1)
   {
      tell_object( user, HIW"你大喝一声, 运起轻功, 飞快的往岩顶升去....\n"NOR);
      user->move("/open/killer/mon/room/wood30.c");
   }
   else
   {
      tell_object( user, HIW"你大喝一声, 运起轻功, 飞快的往岩顶升去....\n"NOR);
      tell_object( user, HIR"突然你运气一个不顺畅, 气一浊, 旋即就沉身往下坠去...\n"NOR);
      tell_object( user, HIB"看来你的轻身功夫并不足以攀登这片岩壁...\n"NOR);
   }
   return 1;
}
