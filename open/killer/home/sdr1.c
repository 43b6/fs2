inherit ROOM;

void create ()
{
set("short","杀手地下训练场 A 区");
  set ("long", @LONG
这里是杀手总坛的地下迷宫，也是由机关手诸冈渡所精心设置。
寻常人并无法轻易的离开此处，或许应该小心一点，
因为四周传来的杀气，正诉说着此处所布满的危机。
但是这里也是顶尖杀手自我训练的好地方。
在你眼前的这个人，身上似乎带着某项重要的东西。

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"west" : __DIR__"sdr5.c",
"south" : __DIR__"sdr2.c",
]));
set("objects",([
"/open/killer/npc/sdkill1.c":1,
]));
  setup();
}