inherit NPC;
void create()
{
        set_name("��ҩͯ",({"tor guard","guard"}));
        set("long","
�������Ƶ�Ц����������һ�ɲ����ַ������ϣ���������ŭ����������
ʹ�������ĵ�������ͷ��һɨ���ա�
");
        set("gender","����");
        set("combat_exp",100000);
        set("attitude","heroism");
        set("age",30);
        set_skill("stabber",50);
        set_skill("cure",40);
        set_skill("dodge", 40);
        set_skill("parry", 40);
        set_skill("move",40);
        set_skill("force", 40);
        set_skill("shinnoforce",40);
        set_skill("yu-needle",70);
        set("force",800);
        set("max_force",800);
        set("force_factor",10);
set_skill("seven-steps",40);
        map_skill("force", "shinnoforce");
        map_skill("stabber", "yu-needle");
map_skill("dodge","seven-steps");
map_skill("move","seven-steps");
        map_skill("parry","yu-needle");
        set("race", "����");
                setup();
        add_money("gold",3);
        carry_object("/open/doctor/obj/needle4.c")->wield();
}


