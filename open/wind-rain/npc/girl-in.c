inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("��Ů",({"girl"}));
	set("long","
����������ϸ��¥�ڲ���
�Ů, �����������ʹ���
ϸ��¥������������.
");
	set("gender","Ů��");
	set("combat_exp",50000);
	set("attitude","peaceful");
	set("age",21);
	set("class","soldier");
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_kee",800);
	set_skill("unarmed",5);
	set_skill("dodge",5);
        set_skill("move",5);
        
        set("chat_chance", 5);
	setup();
	add_money("silver",10);
}

