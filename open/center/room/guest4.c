// Room: /u/l/lotus/girl/guest4.c
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "�Ȼ��Ƶĵط�");
  set ("long", @LONG
  ���Ļ�֦��չ�Ĺ����ǺͿ��˻���ȭ, ���к��ſ��˽��ơ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tin2",
  "south" : __DIR__"guest3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"girls.c" : 2,
]));
  set("light_up", 1);

  setup();
}
