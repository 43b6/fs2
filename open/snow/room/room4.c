#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "ѩ��ɽɽ��");
  set ("long", @LONG
������ѩ��ɽ��ɽ����ԶԶ������ȥ�����Ʊ�����ڲ�Զ�ĵط�����˵ɽ�ϵ�ѩ���������߹�������ڵأ��ڴ˳������Կ�����������
�����߼����Ϊ���ߵ����ǡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"room5_out",
  "down" : __DIR__"room3",
  "west" : __DIR__"go7",
]));

   set("light_up",1);

  setup();
}
void init()
{
}
int do_search()
{
	if(this_player()->query("family/family_name")!="ѩ����")
		return 0;
	this_player()->set_temp("have_search_8",1);
	tell_object(this_player(),"���ڴ�Ѱ�ң�����һ������(key)��\n");
	return 1;
}
int do_push(string str)
{
	if(str!="key") return notify_fail("������ʲô ?\n");
	if(this_player()->query_temp("have_search_8")!=1)
		return notify_fail("���Ҳ���������İ��š�\n");
	this_player()->delete_temp("have_search_8");
	tell_object(this_player(),"ֻ������������һ��������һ���ܵ�������ܵ�ͨ��������ĳ��ڡ�\n");
	this_player()->move(__DIR__"room5_out");
	return 1;
}
