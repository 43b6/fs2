
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("ǿ��СͷĿ",({"bandit chief","chief"}));
	set("long","
һ�������������������µ�СͷĿ�����ս�һ��ආ����Ǹ���һЩ��\n");
	set("age",25);
	set("gender","����");
	set("title","�ڷ�կ");
	set_skill("blade",30);
	set_skill("dodge",25);
	set_skill("parry",30);
	set("combat_exp", 300000);
	set("attitude","aggressive");
	set("chat_chance_combat", 5);
	set("chat_msg_combat",({
	"СͷĿ˵��:�����������������ү�����ȫʬ��\n",
}) );
	
	setup();
	add_money("silver", 20);
	carry_object("/open/poison/obj/blade1.c")->wield();
	carry_object("/obj/cloth.c")->wear();
}
