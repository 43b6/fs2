#include <ansi.h>
inherit TRANS_ROOM;
void create()
{
    set("short","ƽ�ϳ���վ");
    set("long",@LONG
������ƽ�ϳǵ���վ, ��Ϊ�����ж�����, ��ɽ�����������ڴ�,
���Դ˵�������ʿ�ڶ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : "/open/ping/room/road5",
]));

    setup();
}
