#include <ansi.h>

object target,obj;
string owner,insect_kind,msg;
int gold,wood,water,fire,earth,kind;
int adv_level,limit_kind,limit_gold,limit_wood,limit_water,limit_fire,limit_earth;
int do_adv(object ob);

int update_condition(object ob, int duration)
{
        insect_kind = ob->query("insect_kind");

        adv_level = (int)ob->query("adv_level");

        kind = (int)ob->query_temp("feed/"+insect_kind);
        gold = (int)ob->query_temp("feed/gold");
        wood = (int)ob->query_temp("feed/wood");
        water = (int)ob->query_temp("feed/water");
        fire = (int)ob->query_temp("feed/fire");
        earth = (int)ob->query_temp("feed/earth");

        limit_kind = (int)ob->query_temp("limit/"+insect_kind);
        limit_gold = (int)ob->query_temp("limit/gold");
        limit_wood = (int)ob->query_temp("limit/wood");
        limit_water = (int)ob->query_temp("limit/water");
        limit_fire = (int)ob->query_temp("limit/fire");
        limit_earth = (int)ob->query_temp("limit/earth");

        if( duration >= 1)
        {
                if( random(100) < adv_level )
                {
                        if( limit_kind < kind )
                                ob->set_temp("adv_insect",insect_kind);
                        else if( limit_gold < gold )
                                ob->set_temp("adv_insect","gold");
                        else if( limit_wood < wood )
                                ob->set_temp("adv_insect","wood");
                        else if( limit_water < water )
                                ob->set_temp("adv_insect","water");
                        else if( limit_fire < fire )
                                ob->set_temp("adv_insect","fire");
                        else if( limit_earth < earth )
                                ob->set_temp("adv_insect","earth");
                        if( ob->query_temp("adv_insect") )
                        {
                                message_vision(HIY"\n$N�����忪ʼ�����仯��\n\n"NOR,ob);
                                ob->clear_condition("pet_adv");
                                ob->clear_condition("pet_cond");
                                do_adv(ob);
                        }
                }
        return 1;
        }

        if( duration < 1)
                return 0;
return 1;
}

int do_adv(object ob)
{
        owner = ob->query("insect_owner");
        target = find_player(owner);

        message_vision("$N��ӵ������$n������Ϊ"+ob->query_temp("adv_insect")+"��ĹƳ棬����Ϊ"+ob->query("insect_kind")+"��ĹƳ�\n",ob,target);
        destruct(ob);
}
