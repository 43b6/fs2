
# include <ansi.h>
inherit NPC; 

void create()
{
	set_name("��ȸ",({"sparrow"}) );
	set("long","
һֻ�������ŵ��Ϲ�\���С��ȸ��������Ŀ����������ŵ��������ȸ���
����һ������ֵ���ͷ�������Ġ���ʳ�\n");
	set("age",3);
	set("str",7);
	set("con",8);
	set("race","Ұ��");
	set("max_kee",70);
	set("max_gin",70);
	set("max_sen",70);
	set("limbs",({
	"ͷ��","���","����","���","�ҽ�","����"}) );
	set("verbs",({"claw","poke"}) );
	set("chat_chance", 4);
	set("chat_msg",({
	"��ȸ����һ�ڹ�\�\n",
}) );
	set("combat_exp",100);
	setup();
}

