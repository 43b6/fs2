#include <room.h>
inherit ROOM;
#include <marksman.h>
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[1;33mǿ��֮��[2;37;0m");
  set ("long", @LONG
��������վ�ڽ��������˵���̬��ǧ��Զ���ߵ���֮�����в�ͬ
����������ƿ�ν�ɶ��칤�����е�̵����޲�ľ������Զ��Զ��
�����Ĵ�ʦŻ����Ѫ֮����վ�ڴ˵أ�����Ҫ��̾���๤��֮ΰ��
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"room1-26.c",
  "north" : __DIR__"room1-24.c",
  "out" : __DIR__"room1-22.c",
  "east" : __DIR__"room1-25.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "out" : (: look_door,     "out" :),
]));
  set("objects", ([ /* sizeof() == 1 */
C_NPC"/marker" : 1,
]));
  set("light_up", 1);

  setup();
}
