// ��������war ��ѩ��

#include <ansi.h>
string magic1();
string magic2();
string magic3();
//string magic4();
inherit NPC;
void create()
{
            set("guild_master",1);
            set_name("��ѩ��",({"fly dancer","fly","dancer"}) );
            set("long","������������ʦ�㣬�ó���������˵���Ѿ������ҹ��������ռ�ɱ\n�У�������Ϊ���������������ʦ�ţ�����������Ϊ�ƺ�����������\n�ߣ�������֮���ư��������������ܵС�\n");
            set("gender","Ů��");
            set("class","dancer");
            set("nickname",HIM"��"HIW"֮"HIG"����"NOR);
            set("combat_exp",7000000);
            set("attitude","heroism");
            set("age",26);
            set("str", 99);
            set("cor", 99);
            set("int", 99);
            set("spi", 99);
            set("cps", 99);
            set("per", 99);
            set("con", 99);
            set("kar", 99);
            set("kee",150000);
            set("gin",40000);
            set("sen",40000);
            set("atman",40000);
            set("mana",40000);
            set("force",150000);
            set("max_kee",150000);
            set("max_gin",40000);
            set("max_sen",40000);
            set("max_mana",40000);
            set("max_atman",70000);
            set("max_force",200000);
            set_skill("parry",120);
            set_skill("unarmed",120);
            set_skill("move",120);
            set_skill("dodge",120);
            set_skill("magic",120);
            set_skill("spells",120);
            set_skill("force",250);
            set_skill("paull-steps",120);
            set_skill("dremagic",120);
            set_skill("dreamdance",120);
            set_skill("necromancy",120);
            set_skill("dreamforce",200);
            map_skill("unarmed","dreamdance");
            map_skill("parry","dreamdance");
            map_skill("dodge","paull-steps");
            map_skill("move","paull-steps");
            map_skill("force","dreamforce");
            map_skill("spells","necromancy");
            map_skill("magic","dremagic");
            set_temp("apply/armor",100);
			set_temp("ref_shield",1);
            set("/spells/reflection/level",100);
            set("/spells/fdragon/level",100);
            set("/spells/fireball/level",100);
            set("/spells/confuse/level",100);
            set("/spells/thunder/level",100);
            set("/spells/firedance/level",100);
            set("/spells/hellfire/level",100);
            set("/spells/dreamwings/level",100);
            set("/spells/dreamcure/level",100);
            set("/spells/meteor/level",100);
            set("get_dan_sp",1);
            set("allow_meteor",1);
            set("adv_dancer",1);
            set("allow_fdragon",1);
			set("random_move",200);
            set("allow_hellfire",1);
            set("force_factor",15);
            set_temp("roared", 1 );
            setup();
			set("chat_chance",100);
            set("chat_msg",({
            (: random_move :),
	        }));
            create_family("ҹ��С��",3,"��˴���");
            carry_object("/open/dancer/obj/linrboots.c")->wear();
            carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
            carry_object("/open/dancer/obj/yuawaist.c")->wear();
            set("chat_chance_combat",60);
            set("chat_msg_combat",({
             (: magic1 :),
             (: magic2 :),
             (: magic3 :),
//             (: magic4 :),
            }));
}

int accept_kill(object who)
{
    who=this_player();
    command("con reflection");
    kill_ob(who);
message_vision(sprintf("\n\n"HIC"    "HIW"����"HIM"��쳾"HIW"��"HIG"ѪȾ����"HIW"��"HIY"����޺۸�һ��\n\n\n                          "HIC"���κ�"HIW"��"HIB"���ŷ�˪"HIW"��"HIR"�¶��˼�����С�"HIW"��\n\n\n        "HIR"�q�T�r  �q�[      "HIG"�d�j�j�j�j�s    "HIC"�T�[�q�T�T�r    "HIM"���q�T�r�q�T�r\n        "HIR"�d�T�g�t�T�a      "HIG"�t�p�p�p�p�s    "HIC"�t�s�U�q�r�U    "HIM"���d���g�d���g\n        "HIR"�t�j�s  �q�[      "HIG"�t�p�m�m�m�s     "HIC"�� �U�U�U�U    "HIM"�[�d�T�a�^�T�g\n       "HIR" �j�m�j�t�T�s        "HIG"�d�T�j�p�s     "HIC"�[ �U�U�U�U    "HIM"�U�U �j�p�j �U\n        "HIR"�t�j�s  �q�[        "HIG"�U��p�p�s     "HIC"�U �U�t�s�U    "HIM"�U�U �t��s �U\n        "HIR"��U��t�T�s        "HIG"�s  �U�U       "HIC"�s �t�T�T�a  "HIM"�t�a�U �q�p�r �U\n\n\n"),this_player());
    who->start_busy(1);
    return 1;
}

void heart_beat()
{
 object env,mob,*enemy;
 int i,j,k;
 j=random(100);
 mob = this_object();
 if(!mob) return ;
 if(!environment(mob)) return ;
 env = environment(mob);
 if( j < 40 && is_fighting())
 {
message_vision( HIW"\n\n----- "HIY"�� "HIW"�� "HIG"Ӱ "HIW"�� "HIR"�� "HIW"�� "HIC"�� "HIW"-----\n"HIM"$N"HIM"��¶�Ĺ⣬����ҹɫ�����������裬�촽���ޣ�������ӯ����������\n"HIM"$N"HIM"�����ǣ��Ի����µ�����֮�������ܵ��������Ի󣬿�����������\n��֪�����𽥱������Ի�ʧ�񣬹���ֵ֮˲��󽵣�\n\n"NOR, mob );
  for( k=0 ; k < i ; k++)
   {
   if( !enemy[k] ) continue;
    if( enemy[k]->is_character() && !enemy[k]->is_corpse() && living(enemy[k]) && enemy[k] != mob && !wizardp(enemy[k]) )
     {
      message_vision(HIR"����֮���������·����������������Ŀ�ɿڴ�����\n"NOR,enemy[k]);
      enemy[k]->receive_wound("kee",200);
      enemy[k]->apply_condition("power-down",enemy[k]->query_condition("power-down")+5);
/*        if(enemy[k]->query("class")=="fighter")
        {
        enemy[k]->set_temp("power-down",20);
        }else{
        enemy[k]->set_temp("power-down",10);
        }
*/      COMBAT_D->report_status(enemy[k]);
     }
   }
 }

    if( 40< j < 70 && is_fighting() )
        {
        enemy=mob->query_enemy();
        for(i=0;i<sizeof(enemy);i++){
        if(!enemy[i]) continue;
    if(environment(mob) == environment(enemy[i]))
        {
    message_vision( HIR"\n\n$N�����������������ඥ����ȫ��������������������������˲������ɱ���\n\n                  "HIC"�� "HBBLU+HIR"�� "HIW"�� "HIR"�� "HIW"�� "HIY"չ "HIW"�� "HIY"��"NOR+HIC" ��\n\n          "HIB"�� "HIR"Ѫ "HIW"�� "HIR"Ⱦ "HIW"�� "HIM"�� "HIW"�� "HIM"�� "HIW"�� "HIG"�� "HIW"�� "HIG"�� "HIW"�� "HIG"�� "HIB"��\n\n\n"HIY"ֻ��$N"HIY"����ɢ�ų�һ��ǿ���������������ʱ���ֳ����ȥ�����ɰ˵���ͬ����⼲��\n"HIY"����ǰ�˴�ҪѨ��ֻ����"HIY"�����������ƣ���ʱȫ������������ʧ�����������������޷�ʹ����\n\n"NOR, mob );
    enemy[i]->apply_condition("no_power_e",random(10)+5);
    enemy[i]->receive_damage("kee", 800 );
    enemy[i]->receive_damage("gin", 300 );
    enemy[i]->receive_damage("sen", 300 );
    COMBAT_D->report_status(enemy[i]);

    }
   }
  }

    if( 70 < j )
    {mob->delete_busy();
	if(mob -> query("kee") < mob->query("max_kee")*0.6)
	{
    message_vision( HIG"\n$N"HIG"ʹ������������������˲�����ϵ��˿ڽ������ϡ�\n"NOR, mob);
    mob->clear_condition();
    mob->receive_heal("kee",700);
    mob->receive_curing("kee",700);
    mob->receive_heal("gin",500);
    mob->receive_curing("gin",500);
    mob->receive_heal("sen",500);
    mob->receive_curing("sen",500);
    }
    }

   set_heart_beat(1);
   ::heart_beat();

}

string magic1()
{
if(random(2)<1)
command("con firedance");
else command("con confuse");
return "\n";
}
string magic2()
{
if(random(2)<1)
command("con hellfire");
else command("con thunder");
return "\n";
}
string magic3()
{
if(random(3)<2)
command("con fdragon");
else command("con fireball");
return "\n";
}
/*string magic4()
{
if(random(2)<1)
command("con meteor");
else command("con fdragon");
return "\n";
}*/

void die()
{
    object winner = query_temp("last_damage_from");
    string name = winner->query("name");
    string class1 = winner->query("family/family_name");
    if(!winner)
    {
    ::die();
    return ;
    }
    tell_object(users(),HIW"\n\n\n    �� "HIR"��  ��  ��  ��    "HIY"һ Ϧ �� ��    "HIC"�� �� �� �� Ӣ �� �� ��\n\n                     "HIG"ҹ �� �� ��    "HIB"�� �� �� ˪    "HIM"�� �� һ �� �� �� �� �� "HIW"��\n\n"HIR"û�뵽��һ����֮���ˣ���Ȼ�����"+HIG+class1+HIW"����"+HIY+name+HIR+"֮�֡�\n�ѵ������������İ������Ҳ����İ�����\n�ҵĴ��˱ػ�Ϊ��Ѫϴ���µģ�����\n\n\n"NOR);
      message_vision(HIY"\n"+winner->name()+"�������Ʒɵõ��İٵ�ս��!!\n"NOR,winner);
      write_file("/log/get_warp",sprintf("%s(%s) �õ��İٵ�ս���� %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          winner->add("war_score",400);
    ::die();
}
