#include <ansi.h>
#include <combat.h>

inherit NPC;

int special_att();

void create()
{
        seteuid(getuid());
        ::create();
        set_name("�������", ({ "npc06", "dragon" }) );
        set("long", "����������û�����������רɱ��ħ��֡�\n");

        set("race","Ұ��");
        set("gender","����");
        set("attitude", "friendly");
        set("max_gin", 4000);
        set("max_sen", 4000);
        set("max_kee", 4000);
        set("max_atman", 100);
        set("atman", 100);
        set("max_mana", 100);
        set("mana", 100);
        set("max_force", 6000);
        set("force", 6000);
        set("force_factor",15);
        set("str", 30);
        set("cor", 30);
        set("cps", 25);
        set("limbs",({"ͷ��","�ز�","����","ǰצ","��צ","β��"}));
        set("verbs",({"bite","claw"}));

        set ("chat_chance_combat",30);
        set ("chat_msg_combat", ({(: special_att :)}));

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

int special_att()
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


void unconcious ()
{
 object me=query_temp("last_damage_from");
if(!present("fight_card",me))
{
tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
destruct (this_object ());
}
else
if(!me->query("quest/start_game"))
{
tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
destruct (this_object ());
}
else
if(me->query("quest/start_game")< 7)
       {
        tell_object(users(),HIY"
��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"��������������"HIG"��"HIY"ͨ������

"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"���߲���������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",7);
        destruct (this_object ());
       }
{
        :: unconcious();
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
}
}