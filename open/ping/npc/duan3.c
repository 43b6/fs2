#include </open/open.h>
inherit NPC;
void create()
{
        set_name("��Զ��",({"duan"}));
        set("long","��Զ���Ƕ��Ƶ�������, ���Ÿհ���ʦ������������, ���������΢����Ϣ��\n");
        set("gender","����");
        set("class","scholar");
        set("combat_exp", 240000);
        set("attitude","heroism");
        set("inquiry", ([
        "thief" : "��..���������·������ʱҲ�ж���, ��ϧ��Ҫ������, �޷����ô�����",
        "scar" : "�Ҷ������˺۵��ˣ����ҵ��ǲ����Ү��",
        "sad_story" : "ʦ������������..��, �������Ǵ��հ�ʦ, ʦ��������Ҳ��̫���, �����ȥ���ʴ�ʦ�ֿ�����",
        ]));
        set("age",33);
        set("force",800);
        set("max_force",800);
        set_skill("force",50);
        set_skill("unarmed",30);
        set_skill("sunforce",60);
        set_skill("linpo-steps",70);
        set_skill("six-fingers",70);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("unarmed","six-fingers");
        set("force_factor", 9);
        set("chat_chance_combat", 30);
        set("chat_msg_combat", ({
                (: perform_action("stabber.handwriting") :),
        }));
        setup();
        carry_object(PING_OBJ"neck2")->wear();
        carry_object(PING_OBJ"gloves1")->wear();
        carry_object(PING_OBJ"boots1")->wear();
        carry_object(PING_OBJ"pen1")->wield();
        add_money("gold",3);
        create_family("�μ�",11,"����");
}
