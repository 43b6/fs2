#include </open/open.h>

inherit NPC;
void create()
{
        set_name("�����", ({ "scholar lee","lee","scholar" }) );
	set("race", "����");
	set("class","scholar");
	set("age", 33);
	set("long","����һλ�����������������, ����Ц�����������, "+
	"������ӻ����Ĳ���ɡ�\n");

        set("chat_chance",10);
        set("chat_msg", ({
"���������:        ���������཭ˮƽ�����ɽ��ϳ�������\n                    �����ճ��������꣬�������磬�����磿��\n",
"���������:        �������彭�����죬һ��ɣ��һ���̡�\n                    �����������˻�����������ѩ��������\n",
"���������:	  ����¥��ҹ����ڣ����������б��롣\n                    ˯��Ī����ȥ�����е�һյҰ��ɡ���\n",
	}));                                            	         

        set("chat_chance_combat", 20);
        set("chat_msg_combat", ({
        "����ŵ������⽭���α���˶�����?!\n",
	 }) );
		
	set_skill("dodge",40);
	set_skill("parry",20);
	set_skill("stabber",40);
	set("combat_exp",4000);
	setup();
        add_money("coin",500);
        carry_object(CAPITAL_OBJ"fan0")->wield();
        carry_object(CAPITAL_OBJ"head0")->wear();
        carry_object(CAPITAL_OBJ"stabber_book");
}

void defeated_enemy(object ob)
{
	say("[36m�����΢΢Ҿ��һ���� : ���ó��á�[0m\n");
        remove_killer(ob);
}        
