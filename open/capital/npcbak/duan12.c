// �μ� ���� made by onion
#include </open/open.h>
inherit NPC;
void create()
{
        set_name("���ٷ�",({"shiao"}));
	set("long","���ٷ��Ƕ��Ƶĵ�ʮ��������, ��ר�������ǲɰ�һЩ����Ʒ��\n");
	set("gender","����");
	set("class","scholar");
        set("combat_exp", 4000);
        set("attitude","heroism");
	set("age",18);
	set("force",100);
	set("max_force",100);
	set_skill("force",20);
        set_skill("unarmed",30);
	set_skill("sunforce",20);
        set_skill("linpo-steps",20);
        set_skill("six-fingers",20);
        map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
        map_skill("unarmed","six-fingers");
        set("force_factor", 3);
	setup();
        carry_object(CAPITAL_OBJ"cloth0")->wear();
        carry_object(CAPITAL_OBJ"wrists0")->wear();
	add_money("coin",100);
	create_family("�μ�",11,"����");
}

