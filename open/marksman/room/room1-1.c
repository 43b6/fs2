// Room: /u/f/fire/room/room1-1.c
#include <ansi.h>
#include <marksman.h>
inherit ROOM;

void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
��ɳ�����������������ĵط������������ܻ��������һ��
���ڳ�ɳ�ǵľ���ס�Ű�����ҵ��ƽƽ�����ĳ��򣬳�����һ�ɰ���
��г�������㿴��һȺȫ����װ���������ڹ����Լ��ĸ�λ���ػ�
���Է����˹�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room2-5",
  "north" : __DIR__"room1-2.c",
]));
set("outdoors","/open/marksman");

  setup();
}
