inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
这里是连接西院和北院的回廊,在天龙寺中的回廊都经过精心的设
计,特别拓宽,并在旁边安置一些花草树木,布置成为一个适宜修憩的好
地方。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"aa26",
  "west" : __DIR__"aa30",
]));
}
