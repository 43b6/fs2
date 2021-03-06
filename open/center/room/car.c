// Room: /open/center/room/car.c

inherit ROOM;

void create ()
{
  set ("short", "车马行");
  set ("long", @LONG
这儿的老板叫张宝，据说是张三丰的第三代堂孙，是雪苍派的弟
子，早年闯荡江湖的时候，被十大恶人追杀，后来幸蒙一个走镳的小
镳师--赵鼎天--相救，两人从此成为莫逆之交。后来为了替金刀门的
把总顶罪，差点死在牢里，靠的还是那位当年的救命恩人。两度救命
之恩，三十年的老交情，可惜一直没有报答的机会。最近听说镳局缺
少车马人手，因此跟张老板也就在此定居了。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"road3",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/ping/questsfan/npc/lee" : 1,
  "/open/center/npc/brownhorse" : 2,
  "/open/center/npc/blackhorse.c" : 1,
]));

  set("light_up", 1);

  setup();
}
