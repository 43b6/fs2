// copy from Room: /d/snow/hockshop.c

#include </open/capital/capital.h>

inherit HOCKSHOP;

void create ()
{
  set ("short", "干记当铺");
  set ("long", @LONG
当初干通天的曾祖父在替波罗王打下天下之后，决意不为朝当官，
故波罗王就赏赐许多的银两，并要求他留在京城，所以干通天才会有今
天的财富与地位。这个当铺也是他的资产之一，是由副总管哈常贵负责
管理，在这你可以典当(pawn)，当然也可以赎回(redeem)你还可以是先
询问物品的价值(value)。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/ha" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/capital/room/h16",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	在这里你可以典当(pawn)物品或者赎回(redeem)典当
	在这儿的物品，也可以鉴定(value)物品的价值。
",
]));

  set("save_file","/data/hockshop");

  setup();
}
