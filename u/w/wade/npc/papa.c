#include <ansi.h>

inherit NPC;

void create()
{
  seteuid(getuid());
  set_name( "�ְ�", ({ "papa" }) );
  set("long", @LONG
���������Լ��İְֿ���, �����������µ�����, �����ǳ������,
��֪��Ϊ����һ׮�����ڵ���, �����ӵ����ǲ����ܹ��������?
LONG);
  set("gender", "����" );
  set("race", "����");
  set("age",55);

  setup();
}

string short()
{
  object	me=this_player();

  return sprintf ("%s�İְ�(%s' papa)", me->name(), me->query("id"));
}

int accept_fight(object who)
{
  say ("��....���ⲻФ��, ���ϰ���ѹ�ͷ��Ҳ����Ҷ��ֶ���....\n");
}

int accept_kill(object who)
{
  say ("��....���ⲻФ��, �����ϰ��㶼�뿳....\n");
}
