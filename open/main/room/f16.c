#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
������һƬ����ԭʼɭ�֣��β����ľ���ҵĳ��ţ���
��͸��֦Ҷ���µ���ƣ����������ҵĲ�����Ҷ���Ӳ�.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f15",
  "east" : CAPITAL_ROOM"cap0",
 "north" : __DIR__"p18",

]));

  setup();
}


