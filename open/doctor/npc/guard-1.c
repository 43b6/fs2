inherit NPC;

void create()
{
        set_name("����������",({"guard"}));
        set("long","
�������Ƶ�Ц����������һ�ɲ����ַ������ϣ���������ŭ����������
ʹ�������ĵ�������ͷ��һɨ���ա�
");
        set("gender","����");
        set("combat_exp",100000);
        set("attitude","heroism");
        set("age",30);
        set_skill("unarmed",16);
        set_skill("dodge", 20);
        set_skill("parry", 20);
        set_skill("force", 20);
        set_skill("shinnoforce",10);
        set_skill("yu-needle",50);
        set("force",300);
        set("max_force",300);
        set("force_factor",5);
        set_skill("seven-steps",30);
        map_skill("force", "shinnoforce");
        map_skill("unarmed", "yu-needle");
        map_skill("dodge", "seven-steps");
        set("race", "����");
                setup();
        add_money("silver",70);

}

