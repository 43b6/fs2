#include <ansi.h>

inherit NPC;

string	*word=({ "��", "����ú�", "����ͬ��", "�»�����", "��ԡ����",
		 "��ɪ����", "��������", "˫ϲ����", "��ͷ����", "����˫��",
	      });
void create()
{
	set_name("�ڶ�",({"firework"}));
	set("long", "�����ڶӣ����ڻ��ο����ǰͷ�ű��ڣ�"
		    "һ����аһ�����ϲ����\n");
	set("age",24);
	set("gender","����");
	set("no_kill",1);
	setup();
}

int start_marry()
{
  call_out("firework", 6+random(5));
  return 1;
}

int firework()
{
  remove_call_out("firework");
  message_vision(HIY"�ڶӲ�ʱ�ø����ȼ���еı��ڡ�\n"NOR, this_object());
  CHANNEL_D->do_channel(this_object(), "mud",
	HIR"��...��������ֳ�����\n\n\t"+word[random(sizeof(word))]+"\n\n"NOR,
	users());

  call_out("firework", 8+random(10));
  return 1;
}

int stop_firework()
{
  remove_call_out("firework");
  return 1;
}
