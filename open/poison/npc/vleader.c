
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("�峤",({"village leader","leader"}) );
	set("gender","����");
	set("age",47);
	set("str",25);
	set("con",22);
	set("max_kee",440);
	set("max_gin",400);
	set("max_sen",350);
	set_skill("dodge",30);
	set_skill("unarmed",30);
	set_skill("parry",30);
	set("combat_exp",10000);
	set("long","
����Ĵ峤��һλ���ƺ�ʩ���ˣ�������ϲ�����Ž���ף�������ô����
�����������ڣ������һ���ᾡ����æ(help)�ġ�\n");
	set("chat_chance", 15);
	set("chat_msg", ({
	"�峤������ü˵��:��Щ������ǿ����\n",
	"�峤�ǳ��˵��:��Щ�ڷ�կ��������֪�᲻��������\n",
}) );
	set("inquiry",([
	"help" : "��~~~(���ı��鿴�������㻹��Ҫ������)\n"
	+"        ϣ��������ƽ�����£��������ӵİ�ȫ���б��ϡ�\n",


	"ǿ��" : "Ҫ�����н����ڣ�����ֻ�����ѱ�ϴ��һ���ˡ�",
	"����" : "ֻҪ�н����ڴ˱������ڷ�կ���˾�����������Ұ��",
	"�ڷ�կ" : "������Ⱥǿ��������֮������˵�Ǹ���ɽ�У�����ϸ�ص���Ҳ�������\n",

]) );
	setup();
	add_money("silver", 5);
	carry_object("/obj/cloth.c")->wear();
}
          
