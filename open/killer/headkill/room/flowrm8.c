#include <room.h>
inherit ROOM;
void create ()
{
   set ("short","���󻨾�");
   set ("long", @LONG
	�ȹ�һ����һ�ε���ͬ��ɫ�����������е㲻һ���ĵط��ˡ�
	������һ����ª����Ư����һ��Сľ���У�
	��������һλ���ˣ������ޱ���Ŀ����㡣
	�ѵ���һλ�������������������

LONG);
  set("no_fight",1);
  set("no_magic", 1);
  set("no_transmit",1);
  set("objects",([
	"/open/killer/headkill/npc/comit.c":1,
        "/open/main/obj/torch" : 1,
        ]));
  setup();
}

void init()
{
   add_action("do_pass",({"pass"}) );
}


int do_pass(string arg)
{
  object who;
  who=this_player();
  if(arg == "way")
  {
	tell_object(who,"����������˵�ķ����Ա���������\n");
	who->move("/open/killer/room/outr3.c");
	 return 1;
  }
  return 0;
}