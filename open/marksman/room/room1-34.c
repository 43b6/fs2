// Room: /u/f/fire/room/room1-34.c
#include <ansi.h>
#include <marksman.h>
inherit ROOM;

void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
��ů�ķ�������ҵ����մ��𣬳�ɳ����������ƺ���Ŭ��æµ
�Ź������㿴��һȺ������ʿ�ڳ�ɳ�����Ĵ��߶�����ƽ�ĳ�ɳ����
��û���κα������ж����֡�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room1-35.c",
  "east" : __DIR__"room1-3",
]));
set("outdoors","/open/marksman");

  setup();
}
