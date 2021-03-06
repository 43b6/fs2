inherit ROOM;
void create ()
{
  set ("short", "黑牙联门口");
  set ("long", @LONG

门楣上高高的悬着一块水晶翠玉匾，龙飞凤地写着‘黑牙联’三个字刹是好看。
光线透过水晶翠玉折射出神秘的色彩，令人舍不得将眼睛移开。
银白色的大门打开着，似乎叙述着‘有种你就进来’的气势。
门上刻画着两对雄伟的飞龙，象征着飞龙在天，所向无敌的感觉。
门旁的两根龙柱，更是器与非凡，令人不禁多看两眼。
如果你想对这些名器下手的话，你最好三思而行，因为门旁的侍卫可不是好惹的。

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/killer/npc/guard_s.c" : 1,
]));
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"outr0.c",
  "enter" : __DIR__"r17.c",
]));

  setup();
}

 int valid_leave(object me, string dir)
 {
  if(dir=="enter"&&present("guard",environment(me)))
  {
    if(me->query("class")=="dancer")
      return notify_fail("心婷笑着说：想进去跳舞吗？这里可不是舞厅哦\n");
    if(me->query("class")=="blademan")
      return notify_fail("心婷生气地说:不准进去，上次去金刀门居然要杀我\n");
   }
  return 1;
  }