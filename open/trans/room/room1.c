#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","������վ");
    set("long",@LONG
�����Ǿ��ǵ���վ, ��Ϊ������һ�����ҵ�����, ��������Կ���
�кܶ����������ϰ�����ǰ��������վ�����ˡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/capital/room/r69",
]));

    setup();
}
