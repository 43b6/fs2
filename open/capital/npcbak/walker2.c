//������

#include </open/open.h>

inherit NPC;
void create()
{
	set_name("����",({"traveller"}) );
	set("gender","����");
	set("age",40);
	set("long","һ����æ�����ˡ�\n");
	set("combat_exp",120);
	set("chat_chance",20);
	set("chat_msg",({
	(: random_move :),
	}));
	set("inquiry", ([
	"thief" : "��..������㻹��ȥ�ʱ��˰ɡ�",
	]));
	set_skill("dodge",20);				
	set_temp("apply/dodge",10);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",15);
}
