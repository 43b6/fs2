// /open/center/npc/vendor.c
#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("���ָ�����", ({ "guard" }) );
	set("gender", "����" );
	set("age", 25);
	set("long", @LONG
�ɾ���ǧ����ѡ�ľ������� , ����ά���ۿڵ��ΰ�
��������ֵ����� , �����������ݲ� .
LONG);
	set("sttitude","heriosm");
	set("combat_exp",20000);
	set_skill("dodge",50);
	set_skill("blade",60);
	set_skill("parry",50);
	set_skill("unarmed",60);
	set("chat_chance",5);
	set("chat_msg",({
	}));
	set("greeting_msg", ({
	    	}) );
	setup();
        add_money("silver",5);        
	
}
