// Room: /u/l/lotus/girl/tree.c
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "ǰԺ");
  set ("long", @LONG
Ժ��������������ɫ�軨, �����൱��. �����Ժ����ͣ�˼���
����, ����������, �൱����. ����Զ�Ϳ�����������һλ�޹�����
�ĸ���, ������˵��������Ŀ��.
LONG);

  set("light_up", 1);
  set("outdoors", "/u/l/lotus/girl");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"tree2.c",
  "west" : __DIR__"guest.c",
  "east" : __DIR__"gstore",
]));

  setup();
}
