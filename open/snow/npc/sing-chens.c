#include <ansi.h>

inherit NPC;
void create()
{
	set_name("��ǧ��",({"sing chens","chens"}));
	set("title","����");
	set("nickname",HIY "ָ������" NOR);
	set("long",@LONG
��ǰ���������������ŵ�ʮ������ţ����ܺ��Ѷ��³�֮�ж���ѩ�ԡ�
LONG);
	set("gender","����");
	set("combat_exp",2000000);
	set("attitude","heroism");
	set("age",30);
	set_skill("parry",100);
	set_skill("force",100);
	set_skill("stabber",100);
	set_skill("knowpen",150);
	set_skill("dodge",100);
	set_skill("poetforce",100);
	map_skill("force","poetforce");
	set_skill("winter-steps",100);
	map_skill("stabber","knowpen");
	map_skill("dodge","winter-steps");
	set("kee",10000);
	set("max_kee",10000);
	set("sen",10000);
	set("max_sen",10000);
	set("gen",10000);
	set("max_gen",10000);
	set("force",3500);
	set("max_force",3500);
	set("force_factor",20);
	set_temp("apply/damage",60);
	set_temp("apply/armor",60);
	setup();
	carry_object("/open/start/obj/ten_pen")->wield();
}
