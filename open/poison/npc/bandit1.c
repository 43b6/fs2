
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("ǿ��ආ�",({"bandit"}) );
	set("long","
һ�����İ���СС��ǿ��ආ���\n");
	set("age",19);
	set("gender","����");
	set("title","�ڷ�կ");
	set_skill("blade",20);
	set_skill("dodge",15);
	set_skill("parry",20);
	set("combat_exp", 200000);
	set("attitude","aggressive");
	set("chat_chance_combat", 5);
	set("chat_nsg_combat",({
	"ǿ��ආ�˵��:�ٺ٣�������ϵĽ����䱦���£���ү���㲻����\n"
	
	              }));
	setup();
	add_money("silver", 10);
	carry_object("/open/poison/obj/publade.c")->wield();
	carry_object("/obj/cloth.c")->wear();
}
