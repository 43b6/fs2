#include </open/open.h>
inherit NPC;
void create()
{
        set_name("��Х��",({"manager kou","kou"}));
        set("title","�������ܹ�");
        set("long","�������Ǻ������ϵ�һ�����, ����Ϊ��������, �����ĸ������ ��\n");
        set("gender","����");
        set("combat_exp", 300000);
        set("attitude","heroism");
        set("inquiry", ([
        "thief" : "��!�����ж��ٶ���, ��һ�ɶ�ɱ��!",
        "scar" : "�Ҷ������˺۵��ˣ����Ҳ����Ү��",
        "sad_story" : "��ү����������..��, ��ȥ����������֪����",
        ]));
        set("age",43);
        set("force",3000);
        set("max_force",3000);
        set_skill("force",50);
        set_skill("blade",70);
        set_skill("sixforce",60);
        set_skill("linpo-steps",70);
        set_skill("gold-blade",70);
        map_skill("force","sixforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","gold-blade");
        map_skill("blade","gold-blade");
        set("force_factor",10);
        set("chat_chance_combat", 30);
        set("chat_msg_combat", ({
                (: perform_action("blade.gold-dest") :),
        }));
        setup();
        carry_object(PING_OBJ"gblade")->wield();
        add_money("gold",5);
}
