#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"�ɽ���һ������"NOR);
   set("long", @LONG
����˴�.����֮ǰ��������ȫ��ͬ...�˴��ñ�������Դ.�������֮��..
�㷢�������ǰ����һ���𽥳��͵���Ӱ..�����������Ǵ˴�����������.��
(appo ������...������..���з����north ����ͨ���˴��Ľݾ�..Σ��ʱ�м�)
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room2/sun1.c",
 "back":"/open/gsword/room/g5-1.c",
      ]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc2/t1" : 1,
]));
        set("light_up",1);
        set("no_fight",1);
        set("no_transmit", 1);
        setup();
}
