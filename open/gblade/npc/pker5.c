// pker1.c by konn    ħ��ͽ

#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�²���", ({"retainer"}));
        set("title", "���ܹ����¿�֮");
        set("nickname", "����ħ��");
        set("long", "���ǲ��ܹ�������һλ���¿͡�\n");
        set("age", 63);
        set("str", 30);
        set("force", 1500);
        set("max_force", 1500);
        set("force_factor", 20);
        set("combat_exp", 10000000);
        set("race", "����");
        set("gender", "����");
        set("attitude", "peaceful");
        set_skill("dodge", 70);
        set_skill("move", 60);
        set_skill("parry", 65);
        set_skill("force", 50);
        set_skill("whip", 80);
        set_skill("poison", 70);
        set_skill("ming-snake", 70);
        set_skill("coldpoison", 70);
        map_skill("poison", "coldpoison");
        map_skill("whip", "ming-snake");
        map_skill("parry", "ming-snake");

	set_temp("pk_fight", 1);
        set_temp("apply/damage", 80);
        set_temp("apply/armor", 60);
        set_temp("apply/dodge", 85);

        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
            (: perform_action,"poison.firefinger" :),
            (: perform_action,"poison.faint" :),
            (: perform_action,"poison.five" :)
      }));
        setup();
        carry_object("/open/poison/obj/bleed_whip")->wield();
}

void init()
{
        object me = this_player();
        object mob = this_object();
        object weapon = me->query_temp("weapon");
        string skill, m_skill;
        int lv_1, lv_2, exp, gin, kee, sen, force, mana, atman;

        if( mob->query("begin") ) return;
        mob->set("begin", 1);
        if( weapon ) skill = weapon->query("skill_type");
        else skill = "unarmed";
        lv_1 = (int) 1.3 * me->query_skill(skill, 1);
	m_skill = query_skill_mapped(skill);
        lv_2 = (int) 1.3 * me->query_skill(m_skill, 1);
        mob->set_skill("poison", lv_1);
	mob->set_skill("whip", lv_1);
        mob->set_skill("coldpoison", lv_2);
	mob->set_skill("ming-snake", lv_2);
	exp = 3 * me->query("combat_exp");
        gin = 4 * me->query("max_gin");
        kee = 4 * me->query("max_kee");
        sen = 4 * me->query("max_sen");
        force = 2 * me->query("max_force");
        mana = 4 * me->query("max_mana");
        atman = 4 * me->query("max_atman");
	mob->set("combat_exp", exp);
        mob->set("gin", gin);
        mob->set("max_gin", gin);
        mob->set("kee", kee);
        mob->set("max_kee", kee);
        mob->set("sen", sen);
        mob->set("max_sen", sen);
        mob->set("force", force);
        mob->set("max_force", force);
        mob->set("mana", mana);
        mob->set("max_mana", mana);
        mob->set("atman", atman);
        mob->set("max_atman", atman);
        setup();
}

object enemy;

void heart_beat()
{
        mapping exit;
        string *exit_name, *killers;
        object me, env, enemy, mob = this_object();
        int i, gin, kee, sen, force;

        set_heart_beat(1);
        if( mob->is_busy() ) mob->delete_busy();

// Ѱ�����, ʱ���������
        if( !mob->is_fighting() ) mob->add_temp("idle", 1);
        else mob->delete_temp("idle");
        if( mob->query_temp("idle") == 3 ) {
            killers = mob->query_killer();
            if( !mob->query_temp("enemy") && (i = sizeof(killers)) )
                if( find_living(killers[i-1]) )
                    mob->set_temp("enemy", find_living(killers[i-1]));
            if( enemy = mob->query_temp("enemy") ) {
                if( environment(enemy) != environment(mob) &&
                    enemy->query("break_away")                ) {
                    mob->move(environment(enemy));
                    tell_room(environment(enemy), name()+"���˹�����\n");
                    mob->kill_ob(enemy);
                    enemy->kill_ob(mob);
                }
            }
            mob->delete_temp("idle");
        }

// ��ս����Ѱ�ҳ�������, �򶷶�����ܿ�������
        if( mob->is_fighting() ) {
            if( query_temp("fighting") == 3 ) {
                env = environment(mob);
                exit = env->query("exits");
                exit_name = keys(exit);
                i = random(sizeof(exit_name));
                command(exit_name[i]);
                if( environment(mob) == env ) {
                    tell_room(environment(mob), name()+"����һ�ξͲ����ˡ�\n"NOR
);
                    move(exit[exit_name[i]]);
                }
                delete_temp("fighting");
            }
            else add_temp("fighting", 1);
        }

// ����β�������Ļ���, �����ο�������, ����set() ��д
        if( query_temp("run") < 5 ) {
            if( query("kee")*100/query("max_kee") < 50 ) {
                gin = query("max_gin") - query("eff_gin");
                kee = query("max_kee") - query("eff_kee");
                sen = query("max_sen") - query("eff_sen");
                force = query("max_force") - query("force");
                add("eff_gin", gin);
                add("eff_kee", kee);
                add("eff_sen", sen);
                add("force", force);
                gin = query("max_gin") - query("gin");
                kee = query("max_kee") - query("kee");
                sen = query("max_sen") - query("sen");
                add("gin", gin);
                add("kee", kee);
                add("sen", sen);
                add_temp("run", 1);
		tell_room(environment(), HIY+name()+"��Ȼ�����ڹ�, ͷ��ð��˿"+
                     "˿����, ����������ʱ����������ϡ�\n"NOR);
            }
        }
	::heart_beat();
}
