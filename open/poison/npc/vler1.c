
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("ׯ�ں�",({"man"}) );
	set("age",30);
	set("str",25);
	set("con",20);
	set("max_kee",200);
	set("long","
һ����ͨ��ׯ�ں�������Ϊ��ũ��æµ���ԡ�\n");
	set("unarmed", 5);
	set("gender","����");
	set("dodge", 5);
	set("chat_chance",5);
	set("chat_msg" , ({
	"ׯ�ں�������ɢ��Ⱥ��\n",
	"ׯ�ں�ҡҡͷ˵��:��Щ������������淳��!\n",
	"ׯ�ں�����˵:���ý����Ƿ��꣬����ʳ�ﱻ͵�Թ⡣\n",
}) );
	set_temp("apply/armor",9);
	set_temp("apply/dodge",2);
	set("combat_exp", 400);

	setup();
	add_money("coin",20);
	carry_object("/obj/cloth.c")->wear();
	carry_object("/obj/example/bag.c");
}
