// Room: /u/f/fire/room/room1-4.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
����ɢɢ�����ˣ�Ҳ����������ʾ����ɳ�ǵ�ƽ������������
��ô���һ���֣��ƺ���������ľ������ڱ�������Կ���һ������
���ϱ�����һ���̵ꡣ
LONG);

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/man" : 1,
]));
set("outdoors","/open/marksman");
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"room1-3.c",
  "south" : __DIR__"room1-6.c",
  "north" : __DIR__"room1-5.c",
  "east" : __DIR__"room1-7.c",
]));

  setup();
}
