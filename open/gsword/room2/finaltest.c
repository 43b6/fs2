#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"�ɽ�����������"NOR);
   set("long", @LONG
��˵���ɽ���������..���д������Ǻ��˵Ľ���.����ǰ��һ��ģ����Ӱ��
�ѵ������Ǵ�˵�е�...!?
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "south":"/open/gsword/room2/shab1",
 "back":"/open/gsword/room/g5-1.c",
      ]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc2/t4" : 1,
]));
        set("light_up",1);
        set("no_transmit", 1);
        set("no_die_room",1);
        set("die_room","open/gsword/room/eqroom");
        setup();
}
