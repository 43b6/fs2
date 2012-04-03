#include <ansi.h>
#include "/open/open.h"

inherit NPC;

string do_ask ();

void create()
{
	seteuid(getuid());
set_name("������",({"day-sky"}));
	set("nickname","���µ�һ��");
	set("gender", "����" );
	set("age", 32);
	set_weight (500);
	set("long", @LONG
LONG);

	set("chat_chance", 3);
	set("chat_msg", ({
	}) );
	set("inquiry", ([
	    "�޷���":	"���������Ϊ�˸�����ܽ�����ͷ�ġ�",
	    "ˮ�ɹ���":	(: do_ask :),
	    "����":	(: do_ask :),
	]) );
	set("combat_exp",339);
	setup();
	carry_object(MAIN_OBJ"sword")->wield();
}

string do_ask ()
{
  object	me=this_player();
  int		query;

  query = me->query_temp("quests/help_water_god");
  if (query && query == 3) {
    me->set_temp("quests/help_water_god",4);
    call_out("gone", 1, me);
    return "��������Լ����������棬�ѵ�������? " +
	"������...\n������������, ˵��: ����ȥ���������׽������ʿ���";
  }
  else return "���п�����������? ����еĻ��鷳��֪ͨ��һ����";
}

void gone(object me)
{
  tell_object(me, "�����������: ��ȥ�ҽ��ٵ����䆪, bye bye.\n");
  destruct(this_object());
}

int accept_fight(object me)
{
  return notify_fail("������˵��: "+me->name()+
	"����������취���������ܽ��㣬û�ո��ㆪ����\n");
}

int accept_kill(object me)
{
  message_vision(HIR""+me->query("name")+"��������������·���ɱ���ҡ�\n"+
	"ͻȻ��������γ����еĳ���һ�ӣ�������һ˲��.....\n"+
	"$N�о��Լ����������������ǿ�һƬѪ��....\n"+
	"......��......������$N��������?....\n"NOR, me);
  me->die();
  return notify_fail("");
}
