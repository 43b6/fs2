// by Onion
#include <command.h>
inherit NPC;

void create()
{
	set_name("�׶����Ȯ", ({ "bad dog","dog" }) );
        set("race", "Ұ��");
	set("age", 15);
	set("long", "�ǳ����й����ԵĹ�, ��ʱ��Ҫ������ҧ��һ�ڵ����ӡ�\n");
	set("str", 100);
        set("max_kee", 800);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp",15000);
        set("attitude","aggressive");
	set_temp("apply/damage", 70);
        set_temp("apply/attack", 30);
	setup(); 
}
void greeting(object who)
{
	if( !is_killing(who) )
		write(name()+"�������˹���, �ƺ�������˺��һ�㡣\n");
}
int follow_me(object who, string dir)
{
	object ob=this_object();
	if ( !living(ob) || who==ob )
		return 0;
        call_out("delay_follow", 1, ob, dir);
        return 1;
}
void delay_follow(object ob,string dir)
{
        GO_CMD->main(ob, dir);
}
