inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "山随峰");
  set ("long", @LONG
长白山著名的三峰之一，站在此地，视野所及的，只有美不胜收
能形容，仔细看看，有一另一个山峰依偎在山随峰的旁边，如影随形
的那种感觉，所以才因此而得名，登上峰顶可以看到更美的景色。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"mon45",
  "stand" : __DIR__"mon50",
]));

  setup();
}
