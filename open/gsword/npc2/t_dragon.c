// copy from �������
#include <ansi.h>
#include <combat.h>
inherit NPC;
int spatt();
void create()
{
        seteuid(getuid());
        ::create();
        set_name("����ս��", ({ "tesin dragon", "dragon" }) );
        set("long", "��˵��..�������ħ�����������Ļ���ս�������������κ�����ɱ������ʱ������ɱ�С�\n");
        set("race","Ұ��");
        set("gender","����");
        set("attitude", "friendly");
        set("max_gin", 4000);
        set("max_sen", 8000);
        set("max_kee", 4000);
        set("max_atman", 100);
        set("atman", 100);
        set("max_mana", 100);
        set("mana", 100);
        set("max_force", 6000);
        set("force", 6000);
        set("force_factor",22);
        set("str", 30);
        set("cor", 30);
        set("cps", 25);
        set("limbs",({"ͷ��","�ز�","����","ǰצ","��צ","β��"}));
        set("verbs",({"bite","claw"}));
        set ("chat_chance_combat",30);
        set ("chat_msg_combat", ({(: spatt :)}));
        setup();
}
void callset(object who)
{
        int pp;
        object me = this_object();
        pp=who->query("combat_exp");
        set("combat_exp",pp*3+1000);
        set_temp("apply/defend",pp/50);
        set_temp("apply/attack",pp/50);
        set("max_kee",pp/600);
        set("kee",pp/600);
}
int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIB"�ױ���$N����ƽϢ�������ٶȱ�Ϊ����\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void unconcious ()
{
        message_vision (HIB"$N����һ������ʧ����Ӱ���١�\n"NOR, this_object ());
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
