//�ʳǽ�����

#include </open/capital/capital.h>

inherit NPC;
								
void create()
{
        set_name("����ƽ",({"manager wu","manager","wu"}) );
	set("title","�����ܱ�");
        set("officer_power",20);
	set("max_officer_power",20);
	set("gender","����");
	set("age",33);
	set("class","officer");
	set("officer_class","�����ܱ�");
	set("str",30);
	set("long","�������������ܱ�������ȫ������ʳ�����������ش�\n");
	set("inquiry", ([
        "thief" : "��..����ɶ��, ֻҪ�첻�������ͺ��ˡ�",
	]));
									
	set("combat_exp",30943);
	set_skill("blade",70);
	set_skill("parry",70);
	set_skill("dodge",70);
	set_skill("her-blade",60);
	map_skill("blade","her-blade");
	setup();
	carry_object(CAP_OBJ"Ns_suit")->wear();
	carry_object(CAP_OBJ"Ns_boots")->wear();
	carry_object(CAP_OBJ"Ns_hat")->wear();
        carry_object(CAP_OBJ"Sblade")->wield();
	add_money("silver",20);
				
}

int accept_fight(object who)
{
	return notify_fail(query("name")+"˵������!!\n");
}
