// /open/center/npc/vendor.c
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
	set_name("��ȭ����",({"lee"}));
	set("gender", "����" );
	set("age", 42);
	set("long", @LONG
����ʱ�͵�������ϳƷ��ֶ��� , ߳ɲ���� , �ò����� 
�и��ڽ���������� , ����ն� , �����ɽ , �ڴ˿���
�ߵ�ά�� .
LONG);
	set("attitude", "friendly");
	set("combat_exp",20000);
	set_skill("dodge",50);
	set_skill("unarmed",50);
	set_skill("parry",50);
	set_skill("snow-martial",30);
	set_skill("black-steps",30);
	map_skill("unarmed","snow-martial");
	map_skill("dodge","black-steps");
	set("vendor_goods", ({
	"/open/port/obj/blademan_cloth",
	"/open/port/obj/blademan_armor",
	"/open/port/obj/blademan_hat",
	"/open/port/obj/blademan_boots",
"/open/port/obj/blademan_shield",
	"/open/port/obj/blademan_surcoat",

	}) );
	set("chat_chance_combat",20);
	set("chat_msg_combat",({
	"��ȭ���ļ�Ц�� : �ٺ� , ���Ӻܾ�û����ȭ�� !\n",
	"��ȭ����Ц�� : ���� , ��������è�Ĺ���Ҳ�����ҳ��� !\n",
	}));
	
	set("greeting_msg", ({
	"��ȭ����˵��: ��� , ����ȫ�Ļ���� !\n",
	    	}) );
	setup();
        add_money("silver",10);
}
