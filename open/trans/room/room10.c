#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","���ָ���վ");
    set("long",@LONG
�����Ƿ��ָ���վ, ��Ϊ�����������Ϊ��, �����㾭�����Կ���
����ǰѸղ���������һ����������, ������վ�ϰ�����ǰ��������
��������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/port/room/r1-3",
]));

    setup();
}
