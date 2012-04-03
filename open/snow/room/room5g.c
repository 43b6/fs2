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
  "north" : __DIR__"room5a.c",
  "south" : __DIR__"room5b.c",
  "west" : __DIR__"room5c",
  "east" : __DIR__"room5c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/snow/npc/ghost" : 1,
]));
  set("no_fight", 1);
  set("valid_startroom", 1);

  setup();
}
