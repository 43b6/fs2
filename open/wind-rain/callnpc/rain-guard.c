inherit PARTY_NPC;
#include <ansi.h>
void create()
{
        object ob;
	set_name("�껤��",({"rain guard","guard"}));
	set("long","
���ϸ��¥�У������ϸ�ꡱ�ı������е��껤��������Ϊ���з�����
������������������ϧ��
");
	set("gender","����");
	set("combat_exp",350000);
	set("attitude","peaceful");
	set("age",33);
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_force",1500);
        set("force",1500);
        set("max_kee",800);
        set("force_factor",14);
	set_skill("throwing",70);
        set_skill("rainthrowing",75);
	set_skill("parry",80);
        set_skill("wind-rain",65);
	set_skill("dodge",75);
        set_skill("move",65);
        set_skill("lo-steps",75);
        map_skill("throwing", "rainthrowing");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
        ob=carry_object("/open/wind-rain/obj/throw-1");
        ob->set_amount(300);
        ob->wield();
	setup();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say ���Ҷ�����¥���ˣ�");
  return 1;
}
