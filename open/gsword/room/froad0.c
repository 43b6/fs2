#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "��·��");
  set ("long", @LONG
��������ɽС���Ĳ�·��,������������,������������,��
�ɵ����г�,������ͨ��ɭ��һƬ...
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/visitor" : 1,
  "/open/gsword/mob/sells2" : 1,
]));
  set("outdoors", "/open/gsword");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"lake1.c",
  "west" : __DIR__"towerf.c",
  "north" : __DIR__"su-main",
  "east" : __DIR__"froad1.c",
]));

  setup();
}
