// Room: /u/f/fire/room/room1-3.c
#include <marksman.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", GRN"��ɳ��"NOR);
  set ("long", @LONG
��������һ��˫��㳡������������������һЩС̯������һЩ
��ͥ����Ҫ����Ʒ����ɳ�ǵķ羰ʮ��������һ�����Ʈ��Ʈ����һ
����Ļ��㣬������������ն�����
LONG);

  set("objects", ([ /* sizeof() == 2 */
C_NPC"/woman" : 1,
C_NPC"/oldwoman" : 1,
]));
set("outdoors","/open/marksman");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"room1-2.c",
  "north" : __DIR__"room1-8.c",
  "east" : __DIR__"room1-4.c",
"west" : __DIR__"room1-34",
]));

  setup();
}

