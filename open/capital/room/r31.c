// Room: /open/capital/room/r31.c

inherit ROOM;

void create ()
{
  set ("short", "永安胡同");
  set ("long", @LONG
人多的地方就有乞丐，路边就有几个蹲在那儿讨钱，偶尔会有几个
官兵过来驱散，但过不了多久他们又会回来了，所以官兵们也懒得理，
只要不妨碍人们通行，大伙各自相安无事。北面有家小茶馆，叫做紫藤
芦。路边有个牌坊写着‘南市’。
    这里有禁卫军四处的巡逻着，所以你还是不要在城内惹事的好。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/beggar" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"tea",
  "west" : __DIR__"r30",
  "east" : __DIR__"r33",
]));
  set("gopath", "west");
  set("gopath2", "west");

  setup();
}
