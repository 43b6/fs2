inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "妖幻空间");
  set ("long", @LONG
一股浓烈无以形容的味道袭向你，四周的空间变的诡异，不似是
正常的空间，这里正是千年树妖所制造出来的空间，平时的树妖正是
处在此地，一向不喜欢人类的牠，最痛恨人类无故来打扰他平静的生
活了，如果有人擅闯，将会被千年树妖无情的攻击。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dance.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"mon58",
]));

  setup();
}


