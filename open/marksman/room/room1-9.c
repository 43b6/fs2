// Room: /u/f/fire/room/room1-9.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
����һ���൱���ĵ�·���ڵ�·�����������û�ͭ�����ɵ���
����˵�ͭ�������������������ݲ������˸е�������ʥ���ϣ���
���Կ�����ɳ�Ǵ˵������ޱȡ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/sells2.c" : 1,
]));
set("outdoors","/open/marksman");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"room1-13.c",
  "west" : __DIR__"room1-11.c",
  "south" : __DIR__"room1-8",
  "east" : __DIR__"room1-15.c",
]));

  setup();
}
