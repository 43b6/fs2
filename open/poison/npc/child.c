
#include <ansi.h>

inherit NPC;
void create()
{
	set_name("С��",({"child"}) );
	set("long","
һ���ɰ���С���ӣ�ͷ�����������٣��������˵�����ˣ�ţ��ƺ���֪�ǳ�
Ϊ���\n");
	set("gender","����");
	set("unarmed", 2);
	set("dodge", 3);
	set("attitude","friendly");
	set("age",14);
	set("max_kee",100);
	set("max_gin",100);
	set("max_sen",100);
	set("combat_exp",100);
	set("chat_chance",4);
	set("chat_msg" ,({
	"С�����˵�Ц�š�\n",
	(: this_object(), "random_move" :),
}) );
	setup();
	carry_object("/obj/cloth.c")->wear();
	add_money("coin", 5);
}
