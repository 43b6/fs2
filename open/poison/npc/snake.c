#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("����",({"poison snake","snake"}) );
	set("gender","����");
	set("age",10);
	set("race","Ұ��");
	set("limbs",({"ͷ��","β��","����"}) );
	set("verbs",({"bite"}) );
	set_skill("dodge",10);
	set("long","һֻ���о綾���ߣ����������㰺�����š�\n");
	set("attitude","aggressive"); 
	set_skill("unarmed",10);
	set("chat_chance_combat",10);
	set("chat_msg_combat", ({
	(: this_object(),"special_att" :),
}) );
	setup();
	carry_object("/open/poison/obj/gall.c")->set_amount(1);
	
}
int special_att()
{
	object me=this_object()->query_enemy();
if(me->query("family/family_name")!="ڤ��ħ��")
{

	tell_room(me,"����ͻȻ����������ݺݵ�ҧ��һ�ڡ�\n");
	me->apply_condition("snake_poison",2+me->query_condition("snake_poison"));
	return 1;
}
}
 
