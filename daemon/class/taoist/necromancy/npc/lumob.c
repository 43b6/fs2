#include <ansi.h>
#include <combat.h>

inherit NPC;

#define bell_big 600
#define bell_small 200
#define INVLEVEL 70
#define MANACOST 150
#define INVCOST 30

int special_att();
object room2;

void create()
{
        set_name( "������", ({ "huge god", "god" }) );
        set( "long", @LONG
�������Сͷ�죬�����֪���ٴ���С�̡�����������ʵ�ľ�
�ˣ���һ��¥֮�ߡ��������һ�����̴�Ҳ��֮���¶�����ħ��
�ֵ��Դ������������ͷһӳ��������ӡ�
LONG    );
        set("attitude", "friendly");
        set("max_gin", 1500);
        set("max_sen", 1500);
        set("max_kee",2500);
      set("kee",2500);
        set("max_force", 2000);
        set("force", 2000);
        set_skill("axe",120);
        set_skill("dodge",100);
        set_skill("fly-steps",70);
        map_skill("dodge","fly-steps");
        set_skill("parry",100);
        set("force_factor",15);
        set("str", 50);
        set("cor", 30);
        set("cps", 25);
        set("chat_chance_combat",45);
        set("chat_msg_combat", ({(: special_att :)}));
        setup();
        carry_object(__DIR__"obj/golden_armor")->wear();
        carry_object(__DIR__"obj/hugeaxe")->wield();
}

void besummon(object who, object room)
{
         int i, bell, pp, mkee;
        object *enemy;
        object me = this_object();

        room2 = room;

        message_vision(HIB"һ����紵�����߳�һ�����ʮ�ɵ�$N��\n$N�ȵ���������ǲ��\n"NOR, me);
        set("combat_exp",2500000);
        set("max_kee",2500);
        set("kee",2500);

        switch( who->query("bellicosity") )
        {
                case 0..bell_small :
                        message_vision(HIW"$NЦ��������������Ҳ��ӣ�\n"NOR, me);
                        break;
                case bell_small+1..bell_big : 
                        message_vision("$N��ü�������С�£�Ҳ����ǲ�ң�\n"NOR, me);
                        break;
                default :
                        message_vision(HIB"$Nŭ�ȣ��η���ħ��������ǲ�����\n", me);
                        kill_ob (who);
                        set_leader (who);
                        return;
        }

        enemy = who->query_enemy();
        i = sizeof(enemy);
        while(i--) {
                enemy[i]->fight_ob(this_object());
                fight_ob(enemy[i]);
        }
        set_leader(who);
        who->add_temp ("invocation", INVCOST);
}

void heart_beat()
{
        object who;

        if (!is_fighting() || !who = query_leader() ) {
             call_out( "leave", 0);
             return;
        }

        if(room2!=environment(who)||!who->is_fighting()) {
             call_out( "leave", 0);
             return;
        }

        ::heart_beat();
}

void leave()
{
        object who;

        message_vision(HIB"$N˵����ĩ������ٻ��������Ѿ���ɻ������񣬾ʹ˸�ǣ�\nһ����紵����$N��������֮�����ˡ�\n"NOR, this_object() );

        if( who = query_leader() )
                who->add_temp ( "invocation", -INVCOST);
        destruct(this_object());
}

void unconcious()
{
        object who;

        if( who = query_leader() )
                who->add_temp ("invocation", -INVCOST);
        message_vision (HIB"$N�ҽ�һ��������ʧ����Ӱ���١�\n", this_object ());
        destruct(this_object ());
}

// ��Ҫinvocation �����ȼ�
int needlevel ()
{
        return INVLEVEL;
}

// �ķѵ�mana
int manacost ()
{
        return MANACOST;
}

// �ķѵ��л�����
int invcost ()
{
        return INVCOST;
}

int special_att ()
{
        object me = this_object();
        object victim, *enemy = query_enemy();
        int damage, i;

        if( !i = sizeof(enemy) )       
                return 0;

        victim = enemy[random(i)];
        message_vision (HIR"ֻ��$Nŭ��һ��" + HIW"��������ɽ��" + HIR "����\n" +
                  "���о��鸫����һ������������\n", me);

        switch( random(2) ) {
                
        case 1 :
                damage = 30+(victim->query("max_kee") / 7);
                        
                switch( damage ) {
                case 0..50 :    damage = 100;    break;
                case 51..300 :  damage = 250;   break;
                default :       damage = 400;   break;
                }

                message_vision ("$N���ұ�һ�����У���ʱȫ��Ѫ��Ȫӿ��\n"NOR, victim);
                victim->apply_condition ("bleeding", random (i * i));
                victim->receive_damage ("kee", damage, me);
                COMBAT_D->report_status (victim, 0);
                break;
        default :
                message_vision ("ֻ��ϧ��$N����һ�㣬�������ϡ����һ�����죬��Ƥ��ʱ���˿�����\n"NOR, victim);
        }
        me->start_busy(1);
        return 1;
}
