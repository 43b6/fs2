// trainee.c
// ��ݵ���
inherit NPC;
void create()
{
        set_name("��ݵ���", ({ "trainee" }) );
        set("gender", "����" );
        set("age", 24);
        set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
        set("combat_exp",180000);
        set_skill("unarmed",50);
        set_skill("dodge",50);
        set_skill("parry",50);
        set_skill("force",50);
        set_skill("haoforce",60);
        set_skill("lungshan",60);
        set_skill("henma-steps",60);
        map_skill("dodge","henma-steps");
        map_skill("unarmed","lungshan");
        map_skill("force","haoforce");
        setup();
        carry_object("/open/wu/obj/claw.c")->wield();
        carry_object(__DIR__"obj/linen")->wear();
}
