inherit NPC;

void create()
{
        set_name("����������",({"duan guard","guard"}));
        set("long","
�������Ƶ�Ц����������һ�ɲ����ַ������ϣ���������ŭ����������
ʹ�������ĵ�������ͷ��һɨ���ա�
");
        set("gender","����");
        set("combat_exp",80000);
        set("attitude","heroism");
        set("age",30);
        set_skill("unarmed",60);
        set_skill("dodge", 20);
        set_skill("parry", 20);
        set_skill("force", 20);
        set_skill("sunforce",10);
        set_skill("six-fingers",50);
        set("force",300);
        set("max_force",300);
        set("force_factor",5);
        set_skill("linpo-steps",30);
        map_skill("force", "sunforce");
        map_skill("unarmed", "six-fingers");
        map_skill("dodge", "linpo-steps");
        set("race", "����");
                setup();
        add_money("silver",70);

}

