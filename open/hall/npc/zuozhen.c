inherit NPC;

void create()
{
	set_name("ƽ���󽫾�  ����", ({ "General Zuozhen","general"}));
	set("race", "����");
	set("age", 68);
	set("long",
"һ�����˳߿��������Ĵ󺺣���������һ֧��ǧ�˵Ĳ��ӹ¾�
Զ������ƽ��������ʮ���������˷��������������ڵ�����
�ǣ���Ȼ��������������ɲ�ҪС����������һ�ֶ�һ�޶���
���ϻط罣��Ҳ���Ǻ��ǵ�ร���
\n");
        set("str", 45);
	set("cor", 30);
        set("max_kee",670);
        set("kee",670);
	set("chat_chance", 30);
 	set("chat_msg", ({
		"ƽ���󽫾� ��������һ��������\n",
		"ƽ���󽫾� �����γ�������ϸ���ꡣ\n",
		"ƽ���󽫾� �������˸����顣\n" }) );
	set("inquiry",([
             "������" : "������ô������...���򱾸���ȡ?",
	     "���ϻط罣" : "ֻ�Ǵ��ɽ������������Ľ�����",
	     "�����" : "������Ŀǰ�����Ҳ������, ����ʦү��֪����",
	     "liu"    : "������Ŀǰ�����Ҳ������, ����ʦү��֪����",
	     ]));
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 5);     	
        set_skill("parry", 5);
        set_skill("sword", 5);
        set_skill("unarmed", 60);
        set_skill("dodge", 5);
        set_skill("shasword", 45);
        set_skill("linpo-steps", 5);
        map_skill("dodge","linpo-steps");
        map_skill("sword","shasword");
	set("combat_exp",50000);
        setup();		
        carry_object("/open/gsword/obj/no_tax");
        carry_object("/open/gsword/obj/windsword.c")->wield();
        carry_object("/open/gsword/obj/ring-1")->wear();
        carry_object("/open/gsword/obj/boots")->wear();
        carry_object("/open/gsword/obj/officer_suit.c")->wear();
        add_money("silver",50);

}
int accept_kill(object who)
{
    command("wear all");
    command("fight");
    return 1;
}
int accept_fight(object who)
{
    command("wear all");
    command("kill");
    return 1;
}                
