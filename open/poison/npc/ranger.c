#include <ansi.h>
inherit NPC;
void create()
{
	set_name("���˺�",({"ranger"}) );
	set("age",21);
	set("gender","����");
	set("combat_exp",2150);
set("long","һ��Ѱ�������˺����㿴�������������ƺ�����ͼı��\n");
	set("attitude","peaceful");
	set("str",21);
	set("con",20);
	set_skill("dodge",20);
	set_skill("parry",15);
	set_skill("unarmed",20);
	set_temp("apply/armor",20);
	set_temp("apply/dodge",10);
	set("max_gin",320);
	set("max_sen",300);
	set("max_kee",500);
	set("chat_chance",10);
	set("chat_msg",({
 		"���˺����ĵ�˵��:С�߲�֪��ô����?\n",
		"���˺���һ����˵��:С��һ���С�ģ�Ӧ�ò������ô������ǡ�\n",
		"���˺�������:�Һܵ���С�ߡ�\n",
		"���˺����ŵ�˵��:������ħ�̵ĵ��̣�Ҫ�Ǳ����ֵĻ��Ͳ���!\n",
}) );
	set("inquiry", ([
		"С��" : "С�����ҵĺ����ѣ���һ��˵�����б�����˴Ҵҵ������ˡ�\n",
]) );
	setup();
	add_money("coin",500);
	carry_object("/open/poison/obj/boots.c")->wear();
	carry_object("/obj/cloth.c")->wear();
}

