#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ɭ��");
  set ("long", @LONG
����һ���޼ʵ�ɭ�֣����ߺ�ѹѹ��һƬ���֣�����������ϡ��
�ĵط���������һ���൱�ߴ���������������ƺ�����Ѿ��൱��Զ
�ˣ�Ӧ���ǿ��������������ˣ�����������ƺ��൱������Ӧ��
������(dig)��...
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"f3",
  "south" : __DIR__"f6",
  "north" : __DIR__"f2",
  "east" : __DIR__"F4",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/squirt" : 1,
]));

  setup();
}
void init()
{
    add_action("do_dig","dig");
}
int do_dig(string arg)
{
    object me=this_player();
    object ob=new("/open/doctor/obj/root");

    if(me->query_temp("sos_tor")==1 && !me->query_temp("get_root") && arg == "����")
{
	write("�����������������ڿ�����ժȡ�˼���������...\n"NOR);
	ob->move(me);
	me->set_temp("get_root",1);
	return 1;
}
    else
{
	write("���ڨ��ڵģ��ϰ���Ҳû�ڵ�ɶ������\n"NOR);
	return 1;
  }
}