// Room: /open/capital/room/r35.c
#include </open/capital/capital.h>

inherit ROOM;

void create ()
{
  set ("short", "�ϳ�����");
  set ("long", @LONG
�����ͽ����˳��ڣ����������ǽ����ǵıؾ�֮·��������ƥ�ľ�
���������㻹�ǲ�Ҫ�ڴ˶�����������������֮�֡�
    �����н������Ĵ���Ѳ���ţ������㻹�ǲ�Ҫ�ڳ������µĺá�

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/soldier" : 1,
]));

  set("outdoors", "/open/capital");

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r34",
  "south" : __DIR__"D03",
]));

  set("gopath", "north");

  setup();
}
