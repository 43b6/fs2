inherit NPC;
void create()
{
        set_name("��ҩͯ",({"medicine guard","guard"}));
        set("long","һλ������ҩ���ĵ��ӡ�\n");
        set("class","doctor");
        set("gender","����");
        set("combat_exp",100000);
        set("max_force",500);
        set("force",500);
        set("max_kee",520);
        set("force_factor",10);
        set("age",25);
        set_skill("parry",40);
        set_skill("stabber",25);
        set_skill("dodge",65);
        set_skill("cure",55);
        set_skill("move",50);
        set_skill("force",40);
        set_skill("shinnoforce",40);
        set_skill("yu-needle",55);
set_skill("seven-steps",60);
        map_skill("stabber","yu-needle");
map_skill("dodge","seven-steps");
        map_skill("parry","yu-needle");
map_skill("move","seven-steps");
        map_skill("force","shinnoforce");
        set("chat_chance_combat",30);
        set("chat_msg", ({
        "������??ʦ��˵ҩ�����������˽�����:D\n" 
        }) );
        setup();
        add_money("silver",30);
        carry_object("/open/doctor/obj/needle3.c")->wield();
        carry_object("/open/doctor/obj/curebook.c");
}


