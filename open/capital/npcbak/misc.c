#include <ansi.h>

inherit NPC;

string long ();

string	*word = ({
	"��ɮȡ��",
	"���޺�",
	"����Ȧ",
	"�ȸ���",
	"�߿շ���",
	"��ƿ��",
	"���ɵ�",
	"�̳���",
	"�̻���",
	"�����̿��",
});

void create()
{
	set_name("��ˣ��",({"misc"}));
	set("long", (: long :) );
	set("age",30);
	set("gender","����");
	set("no_kill",1);
	setup();
}

string long()
{
  return "����һȺ��ˣ�ţ�Ŀǰ���ݳ�"+word[random(sizeof(word))]+"��\n";
}

int start_marry()
{
  call_out("misc", 5+random(3));
  return 1;
}

int misc()
{
  remove_call_out("misc");
  message_vision(HIY"��ˣ��ͻȻ�任���Σ����ݳ�\t"+word[random(sizeof(word))]+
	"\n", this_object());
  call_out("misc", 10+random(3));
  return 1;
}

int stop_misc()
{
  remove_call_out("misc");
}
