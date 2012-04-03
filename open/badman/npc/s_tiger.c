// s_tiger.c

#include </open/open.h>
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("С�ϻ�", ({ "small tiger", "tiger" }) );
        set("race", "Ұ��");
	set("age", 1);
	set("long", "һֻ�ɰ���С���ϻ�����������û����ʳ��������\n");
	set("str", 30);
	set("cor", 30);
	set("max_kee", 100);
 	set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
	set("verbs", ({ "bite"}));
	set("combat_exp",620);
	set_temp("apply/armor", 20);
	set_temp("apply/attack", 20);
	setup();
}

void init()
{
	add_action("do_fight", "fight");
}

int do_fight(string arg)
{
	object who;
	who = this_player();

	if( !arg || (arg!="tiger" && arg!="small tiger") )
		return notify_fail("���빥��˭��\n");
	else {
		kill_ob(who);
		accept_kill(who);
	}

        return 1;
}

int accept_kill(object who)
{
	object ob, tiger;
	ob = this_object();
   if(!ob->query_temp("my_mother")) {

	if( !present("big tiger", environment(ob)) ) {
	tell_room(environment(ob),HIW"\nͻȻ��һֻ�޴��ĸ�ϻ�������˹�����\n\n"NOR);
	tiger = new(BAD_NPC"tiger");
	tiger->move(environment(ob));
	tiger->kill_ob(who);
	}
    ob->set_temp("my_mother",1);
  } else
  {
   tell_room(environment(ob),HIR"\nֻ��С�ϻ�ȫ����,���ڵ���!!!!\n\n"NOR);
  }
	return 1;
}
