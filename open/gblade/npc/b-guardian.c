inherit NPC;

void create()
{
	set_name("ͭ����Ժ",({"bronze-blade guardian","guardian"}));
        set("long","
ר�Ÿ��������Ժ��ȫ����ʿ��������ȣ������ӣ�һ˫�۾�������
���ע�������һ��һ����
");
        set("gender","����");
        set("combat_exp",4000);
	set("attitude","heroism");
        set("age",20);
	set("force",150);
	set("max_force",150);
	set("force_factor",2);
        set_skill("blade", 25);
        set_skill("dodge", 20);
        set_skill("parry", 15);
        set_skill("force", 15);
	set_skill("gold-blade",10);
        set_skill("sixforce",10);
	set_skill("fly-steps",15);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");
        set("race", "����");
        set("limbs", ({ "ͷ��",  "˫��", "˫��", "�ز�" ,"����","����"}) );
                setup();
	carry_object("/open/gblade/obj/bronze-blade.c")->wield();
	carry_object("/open/gblade/obj/bronze-robe")->wear();
	add_money("silver",20);

}
