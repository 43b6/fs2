// trainee.c
// ��ݵ���
inherit NPC;
void create()
{
        set_name("��ݵ���", ({ "trainee" }) );
        set("gender", "����" );
        set("age", 24);
        set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
        set("combat_exp",120000);
        set_skill("unarmed",30);
        set_skill("dodge",40);
        set_skill("parry",20);
        set_skill("force",40);
        set_skill("haoforce",40);
        set_skill("lungshan",50);
        set_skill("henma-steps",40);
        map_skill("dodge","henma-steps");
        map_skill("unarmed","lungshan");
        map_skill("force","haoforce");
        setup();
        carry_object("/open/wu/obj/claw.c")->wield();
        carry_object(__DIR__"obj/linen")->wear();
}
