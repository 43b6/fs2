#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("����",({"serpent"}) );
	set ("age",1000);
	set("gender","����");
	set("race","Ұ��");
	set("limbs",({"ͷ��","β��","����"}));
	set("verbs",({"bite"}) );
	set("combat_exp",1000);
	set_skill("dodge",30);
	set("attitude","aggressive");
	set_temp("apply/armor", 50);
	set_skill("unarmed",30);
	set("long","
һ��������ʮ�ߵľ������������ţ�˫Ŀ�����Ѫ��������ݺݵ�
�����㣬��֪����Ϊ���ַ��ˠ��ĵ��̣��ֻ��Ǽ�������ʹ��Ҫ��
�������븹��\n");
	set("str",40);
	set("max_gin",200);
	set("max_kee",150);
	set("max_sen",200);
	set("chat_chance_combat", 10);
	set("chat_msg_combat", ({
	(: this_object(), "special_att" :),
}) );
	setup();
	carry_object("/open/poison/obj/tooth.c");
}
 int special_att()
{
	object me=this_player()->query_enemy();
	tell_room(me,HIG "
�����ݺݵ�ҧ����һ�ڣ���ͻȻ����ͷ���ۻ����ƺ��ж��ˡ�\n" NOR );
	me->apply_condition("snake_poison", 1);
	return 1;
}
void die()
{
	object who;
	who = query_temp("last_damage_from");
	who->set_temp("kill_serpent", 1);
 
	::die();
}
