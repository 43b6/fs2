inherit ROOM;

void create ()
{
  set ("short", "关卡");
  set ("long", @LONG
你走到了这里，已经算是到了世界的尽头，你远远的看见远方好像
有一座华丽的城堡,但是谁都看得出来这是一座杀戮之城,你想要
进城，你最好先秤秤自已的斤两，因为这有四位武艺不凡的勇士
守在这，如果你不想死的话就请赶快离开。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/main/room/d3.c",
  "enter" : __DIR__"room1",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/love/npc/guard" : 4,
]));

  setup();
}
int valid_leave(object me, string dir)
 {
   if(dir=="enter"&&present("guard",environment(me))) 
   {
    if(!me->query_temp("allow-enter"))
    return notify_fail("关卡守卫拦住你，说道:你以为绝情门是随便就进的去吗?
先过我这关吧!!\n");
   }
  return 1;
 }

