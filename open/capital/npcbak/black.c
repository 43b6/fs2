//blackman.c by urd
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("������",({"black suit","suit"}));
	set("long","����ɱ�ָ����߹���ĳ��� ,�����ھ����н����»�Ա .\n");
	set("gender","����");
	set("class","killer");
	set("nickname","�������");
	set("combat_exp",1000000);
	set("guild_master",1);
	set("attitude","heroism");
	set("age",43);
	set("title","��ȫ������");
	set("str", 44);
	set("cor", 24);
	set("cps", 18);
	set("per", 24);
	set("int", 42);
	set("force",1400);
	set_skill("literate",40);
	set("max_force",1400);
	set("max_kee",2000);
	set_skill("magic",50);
	set_skill("array",50);
	set_skill("move",60);
	set_skill("force",60);
	set_skill("dodge",80);
	set_skill("parry",60);
	set_skill("spells",50);
	set_skill("sword",50);
	set_skill("unarmed",50);
	set_skill("blade",50);
	set_skill("staff",50);
	set_skill("throwing",70);
	set_skill("dagger",55);
	set("force_factor",10);
	set_skill("hammer",50);
	setup();
carry_object("/obj/cloth")->wear();
add_money("gold",10);
}

void init()
{
add_action("do_join","join");
}
int do_join()
{
if(this_player()->query("class"))
return notify_fail("���Ѿ��������������ˡ�\n");
  this_player()->set("class","avatar");
message("system",HIW "������������� :\n
��ӭ" +this_player()->name()+"���빤��!!\n\n"NOR,users());
return 1;
}
