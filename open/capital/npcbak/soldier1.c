//������С�ӳ� by Onion

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("������С�ӳ�",({"soldier leader","leader","soldier"}) );
	set("gender","����");
	set("age",33);
	set("class","soldier");
	set("str",30);
	set("long","�������е�С�ӳ�, Ψ�нϳ�ɫ��������ֲ�����Ϊ�ӳ���\n");
	set("combat_exp",20000 );
        set("chat_chance",5);
	set("chat_msg",({
	"������С�ӳ�˵��: ����������ص�, ������˵�������ȥ��\n",
	}));
	set("inquiry", ([
	"thief" : "���? ֻҪ��������͵����, �������������־��ܡ� hehe ",
	]));
	set_skill("unarmed",60);
	set_skill("blade",60);
	set_skill("parry",60);
	set_skill("dodge",60);
        set_skill("her-blade",50);
        map_skill("blade","her-blade");
                
	setup();
	carry_object(CAPITAL_OBJ"Ns_suit")->wear();
	carry_object(CAPITAL_OBJ"Ns_boots")->wear();
	carry_object(CAPITAL_OBJ"Ns_hat")->wear();
        carry_object(CAPITAL_OBJ"Hblade")->wield();
}

int accept_fight(object who)
{
	return notify_fail("������˵���Բ���������ִ�й���\n");
}

