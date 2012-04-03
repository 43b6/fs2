#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "�����Թ���");
  set ("long", @LONG
���Ѿ���������Թ���ֻ�����ܶ�����ʯ���Լ�һЩ�����ڴ˵��˵ĺ��ǣ��ڴ������޷���������
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"room5h.c",
  "south" : __DIR__"room5b",
  "north" : __DIR__"room5",
  "east" : __DIR__"room5d",
]));
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/snow/npc/ghost" : 1,
]));
  set("valid_startroom", 1);

  setup();
}
