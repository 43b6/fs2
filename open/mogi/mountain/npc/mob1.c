//by roger
#include <ansi.h>
inherit NPC;

int kill_him(object);

void create() {
        set_name("ѩ��",({"snow ghost","ghost"}));
        set("long",
            "\n������а���г������ֵ����֣���˵����˵�Ƥ�����������ϡ�\n");
        set("age",1937);
        set("str",25);
        set("cor",25);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",500);
        set("max_kee",1500);
        set("max_sen",200);
        set("max_force",2000);
        set("force",2000);
        set("force_factor",4);
        set("combat_exp",800000);
        set_skill("unarmed",80);
        set_skill("dodge",70);
        set_skill("nine-steps",80);
        set_skill("move",80);
        set_skill("parry",70);
        set_skill("hell-evil", 90);
        map_skill("unarmed", "hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("chat_chance",50);
        set("chat_msg",({
	"����...�þ�û����Ƥ�ˡ���\n",
	}));
        set("limbs",({"ͷ��","�ز�","�����","��ڽ�","����","����"}));
        set("verbs",({"bite","claw"}));
        setup();
 }

void init()
{
        object obj;
        ::init();
	set_leader(this_player());

}

int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIB"ħʯ���񷢳�һ��ǿ�⣬��$N�ٶ����ص������ˣ�\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
