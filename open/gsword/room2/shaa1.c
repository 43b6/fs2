//open/gsword/room2/shaa1
#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"�ɽ��ڶ�����Ͽ��"NOR);
   set("long", @LONG
����˴�.����֮ǰ��������ȫ��ͬ...�˴��ñ�������Դ.�������֮��..
�㷢�������ǰ����һ���𽥳��͵���Ӱ..�����������Ǵ˴�����������.��
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room/su3",
 "back":"/open/gsword/room/g5-1.c",
      ]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc2/t2" : 1,
]));
        set("light_up",1);
        set("no_fight",1);
        set("no_transmit", 1);
        setup();
}
