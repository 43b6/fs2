#include </open/open.h>

inherit NPC;

void create()
{
	set_name("·��",({"traveller"}) );
	set("gender","����");
	set("age",40);
	set("long","һ����æ�����ˡ�\n");
	set("combat_exp",320);
	set("chat_chance",10);
	set("chat_msg",({
	(: random_move :),
	}));
	set("inquiry", ([
	"thief" : "�..��˵�Ǵ����..�Ҹ���˵..��������䣦�����䣥������\n\n"+
		  "��Ȼ��˵��һ���, ��ϧ������û�ж�..",
        ]));
	set_skill("longfist",20);
	set_skill("unarmed",20);					
	setup();
	add_money("coin",10);
}

