// chard.c

#include <race.h>

void create() { seteuid(getuid()); }

void setup_char( object ob )
{
	string	race;
	mapping	my;

	if( !stringp( race = ob->query("race") ) ) {
		race = "����";
		ob->set( "race", race );
	}

	switch(race) {
		case "Ұ��":
			BEAST_RACE->setup_beast(ob);
			break;
		case "fatima":
			FATIMA_RACE->setup_fatima(ob);
			break;
		case "����":
			HUMAN_RACE->setup_human(ob);
			break;
		case "monster":
			MONSTER_RACE->setup_monster(ob);
			break;
		default:
			error( "Chard: undefined race " + race + ".\n" );
	}

	my = ob->query_entire_dbase();

	if( !userp(ob) ) {
		if( my["max_gin"] < my["combat_exp"]/450 )
			my["max_gin"] = my["combat_exp"]/450 - my["combat_exp"]/450%100 + 100;
		if( my["max_kee"] < my["combat_exp"]/300 )
			my["max_kee"] = my["combat_exp"]/300 - my["combat_exp"]/300%100 + 100;
		if( my["max_sen"] < my["combat_exp"]/450 )
			my["max_sen"] = my["combat_exp"]/450 - my["combat_exp"]/450%100 + 100;
		ob->set( "food",  ob->max_food_capacity()  );
		ob->set( "water", ob->max_water_capacity() );
	}

	if( undefinedp(my["gin"]) ) my["gin"] = my["max_gin"];
	if( undefinedp(my["kee"]) ) my["kee"] = my["max_kee"];
	if( undefinedp(my["sen"]) ) my["sen"] = my["max_sen"];

	if( undefinedp(my["eff_gin"]) ) my["eff_gin"] = my["max_gin"];
	if( undefinedp(my["eff_kee"]) ) my["eff_kee"] = my["max_kee"];
	if( undefinedp(my["eff_sen"]) ) my["eff_sen"] = my["max_sen"];

/* babe
	weight/5 = ��ʵ����������λ[����]
	���������� weight 149975 = 30 kg
	�����С���� weight  42850 = 8.57 kg
*/
	if( !ob->query_max_encumbrance() )
		ob->set_max_encumbrance( my["str"] * 4285 );

	ob->reset_action();
}

varargs object make_corpse(object victim, object killer)
{
	int i;
	object corpse, *inv, *obj=({});

	if( victim->is_ghost() ) return 0;

	corpse = new(CORPSE_OB);
	corpse->set_name( victim->name(1) + "��ʬ��", ({ "corpse" }) );
	corpse->set("long", victim->long()
		+ "Ȼ����" + gender_pronoun(victim->query("gender"))
		+ "�Ѿ����ˣ�ֻʣ��һ��ʬ�徲�����������\n");
	corpse->set("age", victim->query("age"));
	corpse->set("gender", victim->query("gender"));
	corpse->set("victim_id", victim->query("id"));
	corpse->set("victim_name", victim->name(1));
	corpse->set_weight( victim->query_weight() );
	corpse->set_max_encumbrance( victim->query_max_encumbrance() );
	if( !victim->query("corpse_gone") )
		corpse->move(environment(victim));

	// Don't let wizard left illegal items in their corpses.
	if( !wizardp(victim) ) {
		inv = all_inventory(victim);
		i = sizeof(inv);

	// ����Ҵ�ʬ���в�һ���õõ�eq and weapon
	// ����趨ֻҪ��eq and weapon ���趨 get_chance
	// �Ϳ�����...
	//                  modified by Konn
	//
		while( i-- ) {
/*
		    if( inv[i]->query("get_chance") ) {
			if( random(inv[i]->query("get_chance")) ==
			    (inv[i]->query("get_chance")/2)        )
		        obj += ({ inv[i] });

		    } else*/ obj += ({ inv[i] });
		}
		obj->owner_is_killed(killer);
		obj -= ({ 0 });
		i = sizeof(obj);
		while(i--) {
			if( (string)obj[i]->query("equipped")=="worn" ) {
				obj[i]->move(corpse);
				if( !obj[i]->wear() ) obj[i]->move(environment(victim));
			}
			else obj[i]->move(corpse);
		}
	}

	return corpse;
}

//
// ����дauto_size ��mob ֮��
// modified by Konn
//
int auto_size(object mob, object mob_2)
{
        object weapon = mob_2->query_temp("weapon");
        string skill, m_skill;
        int exp, gin, kee, sen, force, mana, atman, f_fac, m_fac, a_fac;
        int lv_1, lv_2, apply;

        if( weapon ) skill = weapon->query("skill_type");
        else skill = "unarmed";

        lv_1 = mob_2->query_skill(skill, 1);
        m_skill = mob_2->query_skill_mapped(skill);
        if( m_skill )
            lv_2 = mob_2->query_skill(m_skill, 1);

        lv_1 = (int) lv_1;
        lv_2 = (int) lv_2;
        mob->set_skill("unarmed", lv_1);
        mob->set_skill("hell-evil", lv_2);

        lv_1 = mob_2->query_skill("dodge", 1);
        lv_1 = (int) lv_1;
        mob->set_skill("dodge", lv_1);

        lv_1 = mob_2->query_skill("parry", 1);
        lv_1 = (int) lv_1;
        mob->set_skill("parry", lv_1);

        apply = mob_2->query_temp("apply/damage");
        mob->set_temp("apply/damage", apply);
        apply = mob_2->query_temp("apply/armor");
        mob->set_temp("apply/armor", apply);

        exp = 3 * mob_2->query("combat_exp") / 2;
        gin = 2 * mob_2->query("max_gin");
        kee = 2 * mob_2->query("max_kee");
        sen = 2 * mob_2->query("max_sen");
        force = 2 * mob_2->query("max_force");
        mana = 2 * mob_2->query("max_mana");
        atman = 2 * mob_2->query("max_atman");
        f_fac = mob_2->query("force_factor");
        m_fac = mob_2->query("mana_factor");
        a_fac = mob_2->query("atman_factor");

        mob->set("combat_exp", exp);
        mob->set("gin", gin);
        mob->set("max_gin", gin);
	mob->set("eff_gin", gin);
        mob->set("kee", kee);
        mob->set("max_kee", kee);
	mob->set("eff_kee", kee);
        mob->set("sen", sen);
        mob->set("max_sen", sen);
	mob->set("eff_sen", sen);
        mob->set("force", force);
        mob->set("max_force", force);
        mob->set("mana", mana);
        mob->set("max_mana", mana);
        mob->set("atman", atman);
        mob->set("max_atman", atman);
        mob->set("force_factor", f_fac);
        mob->set("mana_factor", m_fac);
        mob->set("atman_factor", a_fac);

        mob->delete("auto_size");

/*
        if( mob_2->is_character()     &&
            !wizardp(mob_2)           &&
            !mob_2->query("evil_mob")    ) {
            mob->kill_ob(mob_2);
            mob_2->kill_ob(mob);
        }
*/

        return 1;
}
