// trainee.c
// ��ݽ�ͷ
inherit NPC;
void create()
{
        set_name("��ݽ�ͷ", ({ "trainer" }) );
        set("gender", "����" );
        set("age", 24);
        set("long", "�㿴��һλ��Լ��ʮ��ͷ���ڽ̵�����ɽ���ӡ�\n");
        set("combat_exp",200000);
        set_skill("unarmed",60);
        set_skill("dodge",60);
        set_skill("parry",60);
        set_skill("force",60);
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
