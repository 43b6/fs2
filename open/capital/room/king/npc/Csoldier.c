//�ʳǽ�����

#include </open/capital/capital.h>

inherit NPC;

void create()
{
        set_name("�ʹ�������",({"castle soldier","soldier"}) );
	set("gender","����");
	set("age",25);
	set("class","soldier");
	set("str",30);
	set("long","�ʳǽ������Ǳ����ʹ����ȷ�, ��Ϊ����ѡһ�ľ�Ӣ��\n");

	set("combat_exp",75000);
	set_skill("blade",50);
	set_skill("parry",50);
	set_skill("dodge",50);
        set_skill("her-blade",40);
        map_skill("blade","her-blade");
	setup();
        carry_object(CAP_OBJ"Hblade")->wield();
	carry_object(CAP_OBJ"Ns_boots")->wear();
	carry_object(CAP_OBJ"carmor")->wear();
	carry_object(CAP_OBJ"ironshield")->wear();
	carry_object(CAP_OBJ"ironarmband")->wear();
		
}


int accept_fight(object who)
{
	return notify_fail(query("name")+"˵������!!\n");
}
