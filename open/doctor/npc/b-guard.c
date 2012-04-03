#include <ansi.h>
inherit NPC;

void create()
{
        set_name("��������",({"book guard","guard"}));
        set("long","�����ػ��ؾ�������������۾�ɢ����һ�ɲ����ַ������ϡ�");
        set("gender","����");
        set("attitude","heroism");
        set("con",35);
        set("spi",35);
        set("cps",35);
        set("kar",35);
        set("age",27);
        set("combat_exp",500000);
        set("kee",12000);
        set("max_kee",3000);
        set("force",3000);
        set("max_force",3000);
        set("force_factor",15);
        set_skill("seven-steps",100);
        set_skill("shinnoforce",80);
        set_skill("yu-needle",100);
        set_skill("dodge", 100);
        set_skill("move", 100);
        set_skill("parry", 100);
        set_skill("force", 80);
        map_skill("force", "shinnoforce");
        map_skill("stabber", "yu-needle");
        map_skill("parry", "yu-needle");
        map_skill("move", "seven-steps");
        map_skill("dodge", "seven-steps");
        set("functions/gold-needle/level",100);
        set("functions/break-kee/level",100);
        set("chat_chance_combat",70);
        set("chat_msg_combat",({
        (: perform_action,"yu-needle.gold-needle" :),
        (: perform_action,"yu-needle.break-kee" :),
        }));
        setup();
        carry_object("/open/doctor/obj/gneedle")->wield();
        carry_object("/open/doctor/obj/gneedle")->wield();
        add_money("gold",50);
}
int accept_fight(object me)
{
	command("shake "+me->query("id"));
	command("say ����ҽϣ���˵�û���κε�������ɱ¾��ˡ�ѷ��㣡");
	return 0;
}
