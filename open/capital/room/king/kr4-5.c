// Room: /open/capital/room/king/kr4-5.c
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "����԰");
        set("long", @LONG
0LONG
        );
  set("no_transmit", 1);
        set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kr4-6",
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
 message_vision(HIC"�ʹ����������Ķ���˵:�ʳǽ�������������������������!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
