// copy from �������
#include <ansi.h>
#include <combat.h>
inherit NPC;
int spatt();
void create()
{
        seteuid(getuid());
        ::create();
        set_name("��������", ({ "man", "man" }) );
        set("long", "�ɽ������ȵĻ������ߡ�\n");
	set("class","swordsman");
        set("family/family_name","�ɽ���");
        set("combat_exp",1500000);
        set("attitude","heroism");
        set("bellicosity", 1000);
        set("max_gin", 5000);
        set("max_sen", 5000);
        set("max_kee", 8500);
        set("max_atman", 100);
        set("atman", 100);
        set("max_mana", 100);
        set("mana", 100);
        set("max_force", 2000);
        set("force", 1000);
        set("force_factor",10);
        set("str", 30);
        set("cor", 30);
        set("cps", 25);
        set_skill("shasword",90);
        set_skill("shaforce",80);
        set_skill("sha-steps",100);
        set_skill("force",70);
	set_skill("dodge",80);
	set_skill("parry",120);
	set_skill("sword",120);
        map_skill("dodge","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set ("chat_msg_combat", ({(: spatt :)}));
        setup();
	carry_object("/open/gsword/obj/sword-3.c")->wield();

}
int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIC"�ױ���$N����ƽϢ�������ٶȱ�Ϊ����\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
   object winner = query_temp("last_damage_from");
    if(!winner) :: unconcious();
    {
        winner->add("quests/test",1);
        message_vision (HIC"$N�ݵ�һ������ʧ����Ӱ���١�\n"NOR, this_object ());

    }
  destruct (this_object ());
 }

int spatt()
{
        object me = this_object(), victim, *enemy = query_enemy();
        int i;
        if( !i = sizeof(enemy) )
                return 0;
        victim = enemy[random(i)];
        message_vision (HIB"$Nһ��ŭ��һ��������$nֱ��������\n"NOR,me,victim);
        victim->receive_damage("kee",100);
        COMBAT_D->report_status(victim);
        return 1;
}
