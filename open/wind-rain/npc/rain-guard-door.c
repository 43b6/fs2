inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
        object ob;
	set_name("�껤��",({"rain guard","guard"}));
	set("long","
���ϸ��¥�У������ϸ�ꡱ�ı������е��껤��������վ��
¥ǰͥ԰�����������š�
");
	set("gender","����");
	set("combat_exp",50000);
	set("attitude","peaceful");
	set("age",25);
	set("class","soldier");
	set("str",30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_force",800);
        set("force",800);
        set("max_kee",550);
        set("force_factor",10);
	set_skill("throwing",20);
        set_skill("rainthrowing",35);
	set_skill("parry",20);
        set_skill("wind-rain",35);
	set_skill("dodge",20);
        set_skill("move",40);
        set_skill("lo-steps",35);
        map_skill("throwing", "rainthrowing");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
        ob=carry_object(C_OBJ"/throw-1");
        ob->set_amount(15);
        ob->wield();
	setup();
	add_money("silver",10);
}
int accept_kill(object who)
{
  command("say ��С�ӣ�������Ӳ������¥����");
  return 1;
}

int accept_fight(object who)
{
    return notify_fail("�绤��ҡҡͷ˵˵ : ��������ֵ�ڣ�û���д����ա�");
}
