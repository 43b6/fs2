#include <ansi.h>
inherit NPC;

void create()
{
	set_name("�ֶ�",({"music"}));
	set("long", "����һȺ��Ķӣ�����Լ����ʮ����"
		    "�����������ô�򣬺ò���������\n");
	set("age",30);
	set("gender","����");
	set("no_kill",1);
	setup();
}

int start_marry()
{
  call_out("music", 6+random(5));
  return 1;
}

int music()
{
  remove_call_out("music");
  message_vision(HIY"�ֶӲ�ʱ���ô�򣬵�����Ϊ���֡�\n", this_object());
  call_out("music", 5+random(3));
  return 1;
}
