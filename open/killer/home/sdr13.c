inherit ROOM;

void create ()
{
set("short","杀手地下训练场 D 区");
  set ("long", @LONG
这里是杀手总坛的地下迷宫，也是由机关手诸冈渡所精心设置。
寻常人并无法轻易的离开此处，或许应该小心一点，
此处都是黑牙联的超级高手，如果你不够强的话最好不要找死。
此处的高手，有些人的实战经验并非你能想像的高，所以你还是小心的好。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
"east" : __DIR__"sdr9.c",
"south" : __DIR__"sdr14.c",
]));
set("objects",([
"/open/killer/npc/sdkilld.c":1,
]));
  setup();
}