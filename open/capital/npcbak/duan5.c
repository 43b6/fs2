// �μ� ���� made by onion
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("�����",({"ling"}));
	set("long","������Ƕ��Ƶĵ��������, ����������, һ���������۵�����"+
	", ������һ˫����, ȴ�Եľ���������������\n");
	set("gender","����");
	set("class","scholar");
        set("combat_exp", 30000);
        set("attitude","heroism");
	set("age",40);
	set("inquiry", ([
	"thief" : "���������ǲ�����Ϊ����µ�, ��Ǹ�ˡ�",
	]));
	set("force",300);
	set("max_force",300);
	set("force_factor", 1);
	set_skill("force",40);
        set_skill("unarmed",50);
	set_skill("sunforce",40);
	set_skill("dodge",60);
        set_skill("linpo-steps",60);
        set_skill("six-fingers",66);
        map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
	setup();
	add_money("silver",1);
	create_family("�μ�",11,"����");
}

