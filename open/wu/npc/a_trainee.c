// trainee.c
// ��ݵ���
inherit NPC;
void create()
{
        set_name("��ݵ���", ({ "trainee" }) );
        set("gender", "����" );
        set("age", 21);
        set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
        set("combat_exp",2000);
        set_temp("apply/attack",20);
        set_temp("apply/dodge",30);
        setup();
        carry_object(__DIR__"obj/linen")->wear();
          carry_object("/open/wu/obj/woodclaw")->wield();
        add_money("gold", 1);
}
