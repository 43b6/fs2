inherit NPC;
void create()
{
        set_name("���ֹ���ɮ",({"club monk","monk"}));
set("long","һ�����ֵĺ��У�������ü���������µ������� .\n");
        set("gender","����");
        set("combat_exp",25000);
        set("attitude","peaceful");
        set("age",26);
        set_skill("unarmed",35);
        set_skill("stick",55);
        set_skill("dodge",30);
        set_skill("parry",40);
        set("chat_chance",10);
        set("chat_msg",({
        }));
        setup();
        add_money("silver",8);
        carry_object("/open/bonze/obj/club")->wield();
}
