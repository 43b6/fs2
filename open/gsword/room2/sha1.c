#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"�ɽ�Ͽ��"NOR);
   set("long", @LONG
һ���Ӳݴ�����Ͽ��.����ɽ������..�������ƺ��޷��뿪�˴�...
��ǰ����ߵ�..������ֻ����ǰ����.��
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room2/sha2.c",

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}

