// Room: /open/capital/room/SCH1
inherit ROOM;

void create ()
{
  set ("short", "���������鷿");
  set ("long", @LONG
����鷿�������ĵĲ�������, ������һ������Ѫ����������, ��
������ɲ���һ���˿��Խ�����, ���������ĵ�����, �뿴һ��������
����ڴ�����һ������(paper)��

LONG);
  set("item_desc",([
  "paper"	:"����� <verify> �Եõ��Լ������š�\n",
  ]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"SCH",
]));
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}

void init()
{
	add_action("do_verify","verify");
}
int do_verify(string str)
{
	object me=this_player(),book;
	if( me->query("class") != "scholar" )
	  return notify_fail("��ָ��Է����������Ա��Ч��");
    book=present("secret_book",me);
	me->set_temp("aa",book);
	while( book )
	{
	  destruct(book);
    book=present("secret_book",me);
	}
    book=new("/data/autoload/scholar/secret_book.c");
	book->move(me);
	message_vision("$N������ϳ���Լ����书���š�\n",me);
	return 1;
}
