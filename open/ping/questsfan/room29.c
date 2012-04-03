// Room: /u/d/dhk/questsfan/room29
inherit ROOM;

void create ()
{
  set ("short", "虹晶桥中段");
  set ("long", @LONG
踏着狭小的桥身，你似乎有着一股虚无缥缈的感觉。
又桥下的超强风速夹带着强劲的吸引力，使得你一路摇摇
晃晃的。望着桥下完全见不到光的黑暗，使你不禁幻想此
崖到底有多身呢？一不留神差点摔了下去，冷汗直流。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "run" : __DIR__"room28",
  "fly" : __DIR__"room30",
]));
  set("outdoors", "/u/d");

  setup();
}
