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
�����Ǹ����������� , �㻹�Ǳ��ڴ�����Ϊ�� ! 
LONG);
	set("attitude", "friendly");
	set("combat_exp",10000);
	set_skill("dodge",50);
	set_skill("blade",50);
	set_skill("parry",50);
	set("chat_chance",10);
	set("chat_msg",({
	"���ָ��������������˵�� : �� ! ����һ�� ,���������ǹԹԵ�ϴ����ɽ !\n",	
	}));
	set("greeting_msg", ({
 	    "���ָ���������ȵ� : �����ڴ���Щ�������� !\n",
	    "���ָ������Ի��ɵ��۹�����㿴 !\n", 
	    	}) );
	set("pursuer",1);
	setup();
	carry_object("/open/gblade/port/obj/guard_blade")->wield();
	carry_object("/open/gblade/port/obj/guard_armor")->wear();
	carry_object("/open/gblade/port/obj/guard_boots")->wear();
        add_money("silver",5);        
	
}