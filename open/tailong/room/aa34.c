inherit ROOM;

void create ()
{
  set ("short", "右侧走廊");
  set ("long", @LONG
从这里往北走就是天龙寺的大雄宝殿了,从远方看起来大雄宝殿可
是十分庄严雄伟,然而近看才发现梁柱可是雕刻得非常细腻,真可说是
建筑艺术中的极品。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"aa37",
  "south" : __DIR__"aa32",
]));
}
