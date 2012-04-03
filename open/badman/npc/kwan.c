// kwan.c by oda
#include <ansi.h>

#include </open/open.h>

inherit NPC;

string do_ask();


void create()
{
	set_name("��ԯ����", ({ "hsanwen san kwan", "hsanwen", "kwan" }) );
	set("nickname", "��Ĺ�");
	set("gender", "����");
	set("class", "bandit");
	set("attitude", "badman");
	set("age", 45);
	set("long", "�����������������ӣ�һ˫üë����������ˢ���۾�ȴ���Ǹ�ͭ��㡣\n�����۾�ֻʣ��һֻ�����������Ÿ��ڲ����ӣ�����������Ҳֻʣ��ķ\nָ��ʳָ������ȴ�����������đG������֮����\n�����ǽ�������ĵ��ˣ��˳ơ���Ĺ�����˵������Ҳ�Ҷģ�����\n�������ڣ�����㱻�������Ļ����ɵ�С��С��������\n");

	set("str", 36);
	set("cor", 37);
	set("int", 26);
	set("spi", 20);
	set("cps", 29);
	set("con", 30);
	set("per", 15);
	set("combat_exp", 850000);
	set("max_force", 1300);
	set("force", 1300);
	set("force_factor", 10);
	set("max_gin", 1300);
	set("max_kee", 2300);
	set("max_sen", 1300);

	set_skill("badforce", 70);
	set_skill("badstrike", 90);
	set_skill("dodge", 60);
	set_skill("force", 60);
	set_skill("ghost-steps", 80);
	set_skill("move", 70);
	set_skill("parry", 50);
	set_skill("unarmed", 80);
	map_skill("force", "badforce");
	map_skill("unarmed", "badstrike");
	map_skill("parry", "badstrike");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");
	set("functions/evil-blade/level", 30);

	set("chat_chance_combat", 25);
	set("chat_msg_combat", ({
	(: perform_action, "unarmed.evil-blade" :),
	}));
  set("inquiry",([
    "����ɭ��" : (: do_ask :),
  ]));

	setup();
	add_money("gold", 10);
}
string do_ask()
{
   object me;
  object who = this_player();
   if(who->query("class")!="bandit")
  {
  kill_ob(this_player());
    return(HIW"���Ƕ��˹ȵ��� ?����ô֪���������!?��������...!!?"NOR);
  }
  if(who->query_temp("marks/allow")!=1)
  {
    command("shake "+who->query("id"));
     command("say ȥ���ʶ��ϴ����˼�� !û������ͬ�� ,�ҿɲ����������ɭ�� .");
   return "����ȥ��һ�º���...";
  }
  else
  {
   command("say ��ȥ����ɭ��...?�ð� ,����ͬ�Ƕ��˹ȵ�һ���� ,�������ȥ�� .");
   tell_object(who,HIY"���Ȼ���ý���һ��....���..����ñ�ƭ��...\n"HIG"�ٶ�����֪��ʱ ,ֻ������ǰ��ããһƬ ,����������Ƕ���ɭ��!!\n"NOR,me);
   who->move("/open/badman/room/forest01.c");
   return "�������� !";
  }
}
