inherit NPC;
void create()
{
        set_name("������ɮ",({"unarmed monk","monk"}));
        set("long","һ��ȫ����ĺ��У����������൱�̶ȵ�ѵ�� .\n");
        set("gender","����");
        set("combat_exp",20000);
        set("attitude","peaceful");
        set("age",22);
        set("class","soldier");
        set_skill("unarmed",55);
        set_skill("dodge",30);
        set_skill("parry",40);
        set("chat_chance",10);
        set("chat_msg",({
        }));
        setup();
        add_money("silver",5);
}
