#include <room.h>
inherit ROOM;
void create ()
{
   set ("short","���ط���");
   set ("long", @LONG
	���ﵽ��������벻��͸������Ϊ��Ĳ��������ˮ���ܵ���
	���Ȼ������һ��ǰ��δ���ĵط����Ĵ��������Եĳ��ڣ�
	���¸�����Ǻã�����������ǰ�ľ�Ȼ��һλ�������ھ����ţ�
	���˻���˭�أ��������Ÿ��ʿ������������ˣ�����˭���ˣ�

LONG);
  set("no_fight",1);
  set("no_magic", 1);
  set("no_transmit",1);
  set("objects",([
	"/daemon/class/killer/yaco.c":1,
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
	tell_object(who,"_[1m������������ߴ���ȥ,����С��,�����˲�֪���ĵط���_[0m\n");
	who->move("/open/killer/room/firstrm.c");
	 return 1;
  }
   return 0;
}