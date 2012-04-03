inherit ROOM;

void create ()
{
  set ("short", "��ֻ�к�");
  set ("long", @LONG
�����ϼװ���, ֻ���Ĵ�������̦�����õ�����, ���弫Ϊ����, �ƺ���ʱ
�������Ҵ�����ĵĿ���. ���Ҵ���ǳ�ĵط����ڱ�ɽ���������ڵ�, ������С
����ʯ���ϲ��޷�̽�ô˴�.
LONG);

  set("outdoors", "/u/u");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"is14.c",
]));

  setup();
}

void init()
{
        add_action("do_search", "search");
        add_action("do_enter","enter");
}

int do_search()
{
        object who;
        who = this_player();
        tell_object(who,"\n����ϸ����,�ڼװ�󷽷��ִ��յ����.\n");
        who->set_temp("search_enter",1);
        set("exits/enter",__DIR__"b_s");
        return 1;
}
int do_enter()
{
        object who;
        who = this_player();
        if (who->query_temp("search_enter")!=1||who->query_temp("get_note")==1) return 0;
else {
        tell_object(who,"\n���������֮��.\n\n\n");
        who->move(__DIR__"b_s");
        delete("exits/enter");
        who->delete_temp("search_enter");
        return 1;}
}
int valid_leave(object me, string dir)
{
  if (dir != "enter") {
    delete("exits/enter");
    return 1;
  }
}

