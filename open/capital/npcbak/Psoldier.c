//�ʳǽ�����

#include </open/capital/capital.h>

inherit NPC;

void create()
{
	set_name("��ǰ��ʿ",({"palace soldier","soldier"}) );
	set("gender","����");
	set("class","soldier");
	set("attitude","heroism");
	set("age",25);
	set("class","soldier");
	set("str",30);
	set("cor",25);
	set("int",20);
	set("spi",10);
	set("cps",22);
	set("con",25);
	set("kar",20);
	set("long",
	"��ǰ��ʿ�ǻʳ�����Ӣ�µ�ʿ��, ֻҪ����������,һ���Ḷ���� \n"
	"ʹ�Ĵ���. \n");

	set("combat_exp",150000);
	set_skill("blade",50);
	set_skill("her-blade",50);
	map_skill("blade","her-blade");
	set_skill("parry",50);
	set_skill("dodge",50);
	setup();
	carry_object(CAP_OBJ"tigerblade")->wield();
	carry_object(CAP_OBJ"Ns_boots")->wear();
	carry_object(CAP_OBJ"carmor")->wear();
	carry_object(CAP_OBJ"ironshield")->wear();
	carry_object(CAP_OBJ"ironarmband")->wear();
		
}


int accept_fight(object who)
{
	return notify_fail(query("name")+"˵������!!\n");
}
