#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("������",({ "dragon king", "king" }) );
	set("age",500);
	set("gender","����");
	set("race","Ұ��");
	set("limbs",({"ͷ��","β��","����"}));
	set("verbs",({"bite"}) );
	set("combat_exp",40000);
	set_skill("dodge",80);
	set("attitude","aggressive");
	set_temp("apply/armor", 50);
	set_skill("unarmed",40);
	set("long","
һ���޴�Ķ�����
\n");
	set("str",40);
	set("chat_chance_combat", 30);
	set("chat_msg_combat", ({
	(: "special_att" :),
}) );
	setup();
	carry_object("/obj/source/dragon_heart.c");
}
 int special_att()
{
	object me=this_player()->query_enemy();
	tell_room(me,HIG "
�����ݺݵ�ҧ����һ�ڣ���ͻȻ����ͷ���ۻ����ƺ��ж��ˡ�\n" NOR );
	me->apply_condition("snake_poison",me->query_condition("snake_poison")+5);
	return 1;
}
