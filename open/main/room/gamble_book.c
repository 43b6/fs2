#define GAMBLE_BOOK "/open/center/obj/gamble_book"
inherit ROOM;

void create()
{
	set("short", "江边");
	set("long", @LONG
这里是澜沧江的江边, 四周水气弥漫, 是个隐密的所在。
LONG );
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"b1",
]));

	setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object	me=this_player();
  int		query, query1;

  if (!query1=me->query("quests/gamble_book")) {
    if (!query=me->query_temp("quests/gamble_book"))
      return 0;
    if (query != 4) return 0;
  }
  if (arg) return notify_fail("你找来找去也没发现什么特殊的地方。\n");

  if (!query1) {
    me->set("quests/gamble_book",1);
    me->delete_temp("quests/gamble_book");
    message_vision("$N找来找去终于发现一本书。\n", me);
    new(GAMBLE_BOOK)->move(this_object());
    me->set_temp("has_gamble_book",1);
    return 1;
  }
  if (!me->query_temp("has_gamble_book")) {
    message_vision("$N找来找去终于发现一本书。\n", me);
    new(GAMBLE_BOOK)->move(this_object());
    me->set_temp("has_gamble_book",1);
    return 1;
  }
  return 0;
}
