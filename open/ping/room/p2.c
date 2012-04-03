// Room: /open/ping/room/p2
inherit ROOM;

void create ()
{
  set ("short", "长廊");
  set ("long", @LONG
走进这里, 是一条长廊, 往前通往大厅, 而往两旁也各有一条走道
长廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"p1",
  "west" : __DIR__"p3",
  "out" : __DIR__"pingking",
  "east" : __DIR__"p5",
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
         if( dir=="east" && me->query("family/family_name")!="段家" )
         if(!wizardp(me))
      return notify_fail("洋葱小丸子似笑非笑的对你说: [1;36m不给进。[0m\n");
        return ::valid_leave(me, dir);
}

