inherit NPC;
void create()
{
        set_name("Сɮ",({"monk"}));
        set("gender","����");
        set("class","scholar");
        set("combat_exp", 1000);
        set("attitude","peaceful");
        set("age",15);
        set("chat_chance", 50);
        set("chat_msg", ({
        "Сɮ˵��: ʩ������,�����ǳ�ʥ�¡�\n",
        "Сɮ˵��: ʩ��,���������Ҫ�ҷ���,�����������ʽӴ�ʦ�֡�\n",
        }));
        set("inquiry", ([
        "��ʥ��" : "������ǳ�ʥ��,����һ���˶�������Ϊ������",
"������" : "���������!",
        ]));
        set("force",150);
        set("max_force",150);
        set("max_kee",300);
        set("kee",300);
        set("force_factor", 1);
        set_skill("force",20);
        set_skill("unarmed",30);
        set_temp("apply/dodge",30);
        setup();
      add_money("silver",1);
}
