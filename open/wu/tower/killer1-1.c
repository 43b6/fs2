//killer1-1.c make by wugi

inherit NPC;

void create()
{
	set_name("��������",({"tower guard","guard"}));
	set("gender","����");
        set("attitude", "aggressive");
	set("age",35);
	set("class","fighter");
	set("str",20);
set("long","������ɱ��һ¥������������Է����Ӵ����������Ψһ���ŵ㡣\n");
	set("combat_exp",40000);
	set_skill("dodge",40);
        set_skill("force",50);
        set_skill("unarmed",70);
        set_skill("lungshan",50);
        set_skill("haoforce",30);
        map_skill("unarmed","lungshan");
        map_skill("force","haoforce");

	setup();
}
