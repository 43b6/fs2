#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("ħ���ϴ�",({"master poisoner","poisoner"}));
	set("gender","����");
	set("guild_master",1);
	set("class","poisoner");
          set("combat_exp",1000000);
          set("attitude","heroism");
	set("age",26);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",800);
    set_skill("spells",20);
    set_skill("magic",20);
	set("max_force",800);
	set_skill("cure",60);
	set_skill("move",100);
	set_skill("force",40);
	set_skill("magic",20);
	set_skill("dodge",100);
	set_skill("poison",100);
	set_skill("spells",20);
    set_skill("whip",100);
	set("force_factor",10);
    set_skill("parry",50);
	set("chat_chance_combat",60);
	map_skill("move","nine-steps");
	map_skill("poison","coldpoison");
	setup();
	carry_object(POISON_OBJ"bleed_whip")->wield();
	carry_object("/obj/poison/rose_poison")->set_amount(30);
	carry_object("/obj/poison/five_poison")->set_amount(30);
	carry_object("/obj/poison/dark_poison")->set_amount(30);
}

void init()
{
	add_action("do_join","join");
}
int do_join()
{
	object me=this_player();
	if(this_player()->query("class"))
		return notify_fail("���Ѿ��������������ˡ�\n");
	this_player()->set("class","poisoner");
	message("system",
	HIR "ͻȻ��......����������������.....\n\n�������ֶ�һ��ħ��ͽ"+this_player()->name()+" !!!\n" NOR,users());
	return 1;
}
