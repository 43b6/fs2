inherit NPC;

void create()
{
	set_name("������Ժ",({"silver-blade guardian","guardian"}));
        set("long","
�������Ƶ�Ц����������һ�ɲ����ַ������ϣ���������ŭ����������
ʹ�������ĵ�������ͷ��һɨ���ա�
");
        set("gender","����");
        set("combat_exp",5500);
	set("attitude","heroism");
        set("age",35);
        set_skill("unarmed",30);
        set_skill("blade", 30);
        set_skill("dodge", 20);
        set_skill("parry", 20);
        set_skill("force", 20);
        set_skill("gold-blade",25);
        set_skill("sixforce",10);
	set("force",300);
	set("max_force",300);
	set("force_factor",3);
	set_skill("fly-steps",25);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");
        set("race", "����");
        set("limbs", ({ "ͷ��",  "˫��", "˫��", "�ز�" ,"����","����"}) );
                setup();
	carry_object("/open/gblade/obj/silver-blade.c")->wield();
	carry_object("/open/gblade/obj/snake-boots.c")->wear();
	carry_object("/open/gblade/obj/silver-robe")->wear();
	add_money("silver",50);

}
