#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","���ƴ���վ");
    set("long",@LONG
���������ƴ����վ, ��Ϊ�������Բ�����Ϊ��, �����㾭������
�������ũ����ţ������һ�����ĵ�������, ����վ�ϰ�����ǰѵ���
��������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/start/room/s4",
]));

    setup();
}
