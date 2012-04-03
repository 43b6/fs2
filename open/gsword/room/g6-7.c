// Room: /open/gsword/room/g6-7.c
inherit ROOM;

void create ()
{
  set ("short", "山洞");
  set ("long", @LONG
一个空旷的大山洞，因洞口极小，只有少许阳光照射进来，显的十分
昏暗，北方一片大壁，应该就是思过之所在吧！你隐约看到一个人坐在一
颗大石上，面向着墙壁，呆呆出神，对你的造访毫无反应。不知他犯了什
过，何以被罚在此？

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/g6-6",
]));

   set("objects",([
   "/open/gsword/npc/trainee-3.c":1,

  ]));

  set("light_up", 1);

  setup();
}
