#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("ɽկ����", ({ "guard" }) );
	set("gender", "����" );
	set("age", 25);
	set("long", @LONG
ɽկ���������︺�������Ա�ļ��.
�����ɽկ?����������!
LONG);
	set("attitude","heroism");
        set("combat_exp",100000);
         set_skill("dodge",60);
	set_skill("blade",60);
	set_skill("parry",50);
	set_skill("unarmed",60);
	set("chat_chance",10);
	set("chat_msg",({
	}));
	set("greeting_msg", ({
            "ɽկ������� : վס!! ����ʲô��? �������������!!\n",
	    	}) );
	setup();
        carry_object("/open/ping/obj/guard_blade")->wield();
        add_money("gold",1);
	
}
