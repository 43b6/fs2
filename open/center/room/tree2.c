// Room: /u/l/lotus/girl/tree2
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "ǰԺ");
  set ("long", @LONG
Ժ����һ�ô�����, �����ǵĽ��Ӿ�ͣ������. ��ʽ�����Ĵ��
��, ����ͨ�ĵ�������, �����֪�������̾������˶���. Ժ������
�����˲軨, �����൱�ÿ�.
LONG);

  set("light_up", 1);
  set("outdoors", "/u/l/lotus/girl");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tree.c",
  "south" : __DIR__"men.c",
]));

  setup();
}
