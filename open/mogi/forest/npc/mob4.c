//by roger
#include <ansi.h>
inherit NPC;

void create() {
        set_name("�Ž�ʬ",({"nine ghost","ghost"}));
        set("long",
            "\n����ħɭ���г������ֵĹ��һ�ŵ�������Ϣ�ͱĳ������ˡ�\n");
        set("age",1937);
        set("str",25);
        set("cor",25);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
        set("max_gin",600);
        set("max_kee",1700);
        set("max_sen",300);
        set("max_force",2000);
        set("force",2000);
        set("force_factor",9);
        set("combat_exp",950000);
        set_skill("unarmed",90);
        set_skill("dodge",80);
        set_skill("nine-steps",90);
        set_skill("move",60);
        set_skill("parry",90);
        set_skill("mogi-strike1", 90);
        map_skill("unarmed", "mogi-strike1");
        map_skill("dodge","nine-steps");
        map_skill("parry","hell-evil");
        map_skill("move","nine-steps");
        set("chat_chance",50);
        set("chat_msg",({
	"����...�þ�û�Ե������ˡ���\n",
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
