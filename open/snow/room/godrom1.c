// Room: /open/snow/room/godrom1.c
// �����
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[1;35m�����[2;37;0m");
  set ("long", @LONG
������Ǵ�˵�е�����ȣ����г�������಻֪�����������ɢ����
����ζ�����Ŀ������������������ϵ�ƣ�룬�ڻ���֮����һ��С·
��ǰ����ȥ��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"godrom2.c",
]));
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
