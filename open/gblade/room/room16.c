// Room: /u/m/moner/tree/room16.c
inherit ROOM;

void create ()
{
  set ("short", "山洞");
  set ("long", @LONG

经过了重重的路径，你来到了树林的出口，就在你松了一口气的时后
，你发现前方有一个山洞，一丝丝的光线从洞中传出，你决定进去看看。
      天空乌云满布，阴暗的光线中勉强能看清方向。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room17.c",
  "north" : __DIR__"room15.c",
]));
  set("outdoors", "wind");
set("no_plan",1);
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="west")
if((me->query("family/family_name")!="魔刀莫测")&&me->query("family/family_name"
)!="魔刀门")
return notify_fail("只有魔刀才可进。\n");
  return ::valid_leave(me,dir);
}
