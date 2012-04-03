inherit ROOM;

void create ()
{
  set ("short", "路口");
  set ("long", @LONG
一条平凡的小路 ,却有一个不平凡的人守在路口 ,哇咧 !真叫人
又好奇又害怕的说 :D~~~~~

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room23.c",
  "north" : __DIR__"room25.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/poison/npc/duan.c" : 1,
]));

  setup();
}
 int valid_leave(object me, string dir)
 {
        if(dir=="north"&&present("duan",environment(me)))
  {
    if(!me->query_temp("allow-north")&&!me->query_temp("playboy"))
    return notify_fail("段正淳拦住你的去路 ,说道 :本王有让你进去吗 ?\n");
   }
  return 1;
}

