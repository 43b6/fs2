#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","������վ");
    set("long",@LONG
�������������վ, ����ش�ƫ��, ����Ĵ�������������ͬ, ����
���۽�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/prayer/room/westarea/road9",
]));

    setup();
}
