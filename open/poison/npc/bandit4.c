
#include <ansi.h>

inherit NPC;

void create()
{
	set_name("կ��",({"bandit leader","leader"}));
	set("long","
���˳��Ļ������������͸ߴ�����һ����ͷ��ʹ�Ļ������磬Ī����
����կ����ͳ��һȺ���ֺ����۰�һ����\n");
	set("age",35);
	set("gender","����");
	set("title","�ڷ�կ");
	set_skill("blade",40);
	set_skill("dodge",35);
	set_skill("parry",40);
	set("combat_exp" ,400000);
	set("attitude","aggressive");
	set("chat_chance_combat", 5);
	set("chat_msg_combat" ,({
	"կ��˵��:С�ӣ�Ҫ����������կ���������ĺ����ġ�\n",

}) );
	
	setup();
	add_money("silver", 30);
	carry_object("/open/poison/obj/ghblade.c")->wield();
	carry_object("/obj/cloth.c")->wear();
}
