#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","��ɳ����վ");
    set("long",@LONG
�����ǳ�ɳ�ǵ���վ, �����Ĵ��Ŀ��Կ���, �Ҽ��ſڶ�����һ����
��, ԭ��������������ɵ����ڵء�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/marksman/room/room1-13",
]));

    setup();
}

