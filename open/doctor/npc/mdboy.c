inherit NPC;
void create()
{
        set_name("��ҩͯ",({"medicine boy","boy"}));
        set("long","һ��ʮ�����Сͯ ,��æ���ӵ�ҩ��ѧҽ .\n");
        set("gender","����");
        set("combat_exp",2500);
        set("age",15);
        set("class","doctor");
        set("max_kee",220);
        set_skill("move",10);
        set_skill("cure",10);
        set_skill("stabber",5);
        set_skill("dodge",10);
        set_skill("force",10);
        set_skill("yu-needle",13);
set_skill("seven-steps",5);
        set_skill("parry",15);
        map_skill("stabber","yu-needle");
        map_skill("parry","yu-needle");
map_skill("dodge","seven-steps");
map_skill("move","seven-steps");
        setup();
        carry_object("/open/doctor/obj/needle1.c")->wield();
        carry_object("/open/gsword/obj/suit")->wear();
}


