inherit PARTY_NPC;
#include <ansi.h>
void create()
{
	set_name("ϸ����",({"thin guard","guard"}));
	set("long","
���ϸ��¥�У������ϸ�ꡱ�ı������е�ϸ����������Ϊ���з�����
������������������ϧ��
");
	set("gender","����");
	set("combat_exp",400000);
	set("attitude","peaceful");
	set("age",33);
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_force",1900);
        set("force",1900);
        set("max_kee",900);
        set("force_factor",16);
	set_skill("dagger",80);
        set_skill("thin-dagger",80);
	set_skill("parry",80);
        set_skill("wind-rain",70);
	set_skill("dodge",75);
        set_skill("move",65);
        set_skill("lo-steps",80);
        map_skill("dagger", "thin-dagger");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
	setup();
        carry_object("/open/wind-rain/obj/dagger-1")->wield();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say ���Ҷ�����¥���ˣ�");
  return 1;
}
