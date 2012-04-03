
#include <ansi.h>

inherit NPC;
void create()
{
	set_name("ׯ����",({"sin-yi chuang","chuang"}) );
	set("nickname", HIC "ܽ������" NOR);
	set("class","poisoner");
	set("long","
ڤ��ħ�̽������������飬��Ů����ͤͤ��������ν�˼��ɫ��һ��ڤ�߱�
����������Ӱ������˵�Ǿ����洫�������Բ�ϲɱ¾��һ�˶��ؿչ롣\n");
	set("attitude","heroism");
	set("age",18);
	set("max_kee",10000);
	set("max_sen",10000);
	set("max_gin",12000);
	set("max_force",5000);
	set("force",5000);
	set("str",27+random(30));
	set("con",24+random(25));
	set("cps",30);
	set("per",30+random(40));
	set("int",25);
	set("spi",22);
	set("kar",28);
	set_skill("whip", 80);
	set_skill("ming-snake",100+random(20));
	set_skill("literate",60);
	set_skill("dodge",100+random(50));
	set_skill("nine-steps",100+random(70));
	set_skill("unarmed",40);
	set_skill("parry", 100+random(20));
	set_skill("force",70);
	set_skill("poisonforce",90);
	set_skill("poison",100+random(40));
	set_skill("coldpoison",100);
	map_skill("dodge", "nine-steps");
	map_skill("force","poisonforce");
	map_skill("parry","ming-snake");
	map_skill("whip","ming-snake");
	map_skill("poison","coldpoison");
	set("combat_exp", 200000);
	set("force_factor",10+random(10));
	set("chat_chance",10);
	set("chat_chance_combat",50);
	set("chat_msg_combat",({
	(: this_object(), "special_att" :),
}));

	setup();
	create_family("ڤ��ħ��",3,"����Ů��");
	add_money("gold", 5);
	carry_object("/open/poison/obj/circle.c")->wear();
	carry_object("/open/poison/obj/godcloth.c")->wear();
	carry_object("/open/poison/obj/rope1.c")->wield();
	carry_object("/open/poison/obj/cape.c")->wear();
	carry_object("/open/poison/obj/feather.c")->wear();

}
int special_att()

{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision(HIW "
	ׯ���˺���:�������������\n\n"
		HIY "           ��***Ů***��***��\n\n" NOR,one);
	message_vision("ׯ�������ϵ�������������˷���$NϮ��������\n",one);
	one->receive_wound("kee",300+random(200));
	one->apply_condition("bleed",5);
	COMBAT_D->report_status(one);
	return 1;
}
