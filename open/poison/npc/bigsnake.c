#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("����",({"poison dragon", "dragon" }) );
	set("age",300);
	set("gender","����");
	set("race","Ұ��");
	set("limbs",({"ͷ��","β��","����"}));
	set("verbs",({"bite"}) );
	set("combat_exp",20000);
	set_skill("dodge",50);
	set("attitude","aggressive");
	set_temp("apply/armor", 50);
	set_skill("unarmed",40);
	set("long","
һ���޴�Ķ�����
\n");
	set("str",40);
	set("chat_chance_combat",20);
	set("chat_msg_combat", ({
	(: "special_att" :),
}) );
	setup();
	carry_object("/obj/source/dark_heart.c");
}
 int special_att()
{
	object me=this_player()->query_enemy();
	tell_room(me,HIG "
�����ݺݵ�ҧ����һ�ڣ���ͻȻ����ͷ���ۻ����ƺ��ж��ˡ�\n" NOR );
	me->apply_condition("snake_poison",me->query_condition("snake_poison")+5);
	return 1;
}
