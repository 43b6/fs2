#include <room.h>
inherit ROOM;
 void create()
{
  set("short", "������������");
  set("long", @LONG
 ���ں������������Ҫ�����
                       ��ҿ��ڴ�����




LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south"  :  "/open/snow/room/black4" ,
   ]) );
       setup();
        call_other("/obj/board/killerwiz_b","???");
}
void init()
{
  add_action("do_pass","pass");
}
int do_pass()
{
  object me;
  me = this_player();
  me->move("/open/center/room/inn");
  return 1;
}
