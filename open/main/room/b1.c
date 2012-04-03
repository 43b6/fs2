// Room: /open/main/room/b1.c

#define SAN_GUAN "/open/main/npc/gamble_man"
inherit ROOM;

void create()
{
	set("short", "��");
	set("long", @LONG
���ǳ�����ص�ΨһҪ��, Ϊ��ά���ΰ�, ��ʱ�����񰲶�Ա
����, ż��Ҳ����פ��, ֻ���˳�һ��������ʱ, ������ն���
�Ѿ��Ż�������, ����������Ҳʱʱ����֨֨������, �ƺ��᧿�
Σ, �����ǳ����Ĵ�����׽�, һ����ȥ��������û��. ���ǲ�Ҫ
���������Ϊ��.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"r18",
  "west" : __DIR__"b1",
]));

  set("objects", ([
	SAN_GUAN:1,
  ]) );

	setup();
}

void init()
{
  add_action("do_search", "search");
}

int do_search(string arg)
{
  object	me=this_player();
  int		query;

  if (((query=me->query_temp("quests/gamble_book")) < 3) &&
      !me->query("quests/gamble_book")) return 0;
  if (arg)
    if (query > 3) return notify_fail("��������ȥҲû����ʲô����ĵط���\n");
    else return 0;

  me->set_temp("quests/gamble_book", 4);
  message_vision("$N������ȥ���ڷ���һ�����µ�·��\n", me);
  set("exits/down", __DIR__"gamble_book");
  return 1;
}

int valid_leave(object me, string dir)
{
  if (dir != "down") {
    this_object()->delete("exits/down");
    return 1;
  }
  if (!me->query("quests/gamble_book") &&
       me->query_temp("quests/gamble_book") < 4) return 0;
  if (this_object()->query("exits/"+dir)) return 1;
  else return 0;
}
