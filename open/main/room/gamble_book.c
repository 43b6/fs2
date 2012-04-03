#define GAMBLE_BOOK "/open/center/obj/gamble_book"
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������׽��Ľ���, ����ˮ������, �Ǹ����ܵ����ڡ�
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
  if (arg) return notify_fail("��������ȥҲû����ʲô����ĵط���\n");

  if (!query1) {
    me->set("quests/gamble_book",1);
    me->delete_temp("quests/gamble_book");
    message_vision("$N������ȥ���ڷ���һ���顣\n", me);
    new(GAMBLE_BOOK)->move(this_object());
    me->set_temp("has_gamble_book",1);
    return 1;
  }
  if (!me->query_temp("has_gamble_book")) {
    message_vision("$N������ȥ���ڷ���һ���顣\n", me);
    new(GAMBLE_BOOK)->move(this_object());
    me->set_temp("has_gamble_book",1);
    return 1;
  }
  return 0;
}
