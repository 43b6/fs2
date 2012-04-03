// �����Ϸ����������˼� war
#include <ansi.h>
inherit NPC;

string do_special_fight();
string do_special_perform1();

void create()
{
        set_name("��Х��",({"wild blader","wild","blader"}));
        set("long","��Х�죬�Ϸ�����֮һ�����ǽ���������Ԫ��֮ʦ�֣���ʮ��ǰ��\n���ٳ�͢��Ӫ�¼���¶�������ʦ�ţ������Ϸ�����֮�أ���ʮ����\n���Ķ���������������ɣ��𽥳�Ϊ������֮������һ��ֻ�����ػ�\n��ԭ��ɱ�˼䣬�Ա�����������ʮ��֮�ࡣ");
        set("gender","����");
        set("class","blademan");
        set("nickname","���� - ����");
        set("combat_exp",7000000);
        set("attitude","heroism");
        set("env/����","YES");
        set("age",62);
        set("str", 99);
        set("cor", 99);
        set("int", 99);
        set("spi", 99);
        set("cps", 99);
        set("con", 99);
        set("kar", 99);
        set("max_gin", 40000);
        set("gin", 40000);
        set("max_kee", 150000);
        set("kee", 150000);
        set("max_sen", 40000);
        set("sen", 40000);
        set("max_atman", 35000);
        set("atman", 35000);
        set("max_mana", 35000);
        set("mana", 35000);
        set("max_force", 100000);
        set("force", 150000);
        set("functions/gold-dest/level",100);
        set("functions/fast-dest/level",100);
        set_skill("blade",120);
        set_skill("parry",120);
        set_skill("move",120);
        set_skill("dodge",120);
        set_skill("force",250);
        set_skill("magic",120);
        set_skill("spells",120);
        set_skill("riding",100);
        set_skill("gold-blade",100);
        set_skill("fast-blade",100);
        set_skill("sixforce",200);
        map_skill("blade","fast-blade");
        map_skill("parry","gold-blade");
        map_skill("force","sixforce");
        set_temp("roared", 1 );
        set_temp("apply/armor",100);
		set("random_move",200);
        set("force_factor",15);
        set("chat_chance_combat",80);
        set("chat_msg_combat",({
        (: do_special_perform1 :),
        }));
        setup();
		set("chat_chance",100);
            set("chat_msg",({
            (: random_move :),
	        }));
        create_family("����",5,"����");
        carry_object("/daemon/class/blademan/obj/gold-blade2")->wield();
        add_money("cash",100);
}

int accept_fight(object me,object who)
{
    who=this_player();
    kill_ob(who);
command("say "HIC"���������������ʶʲô�ǵ���֮��ɣ�����\n\n\n\n    "HIR"   �q���r            �X                            �x�y�z�{�|�}�~��\n"HIR"       ��  �X�[������U�}�}�}�}�}�}�}�}�}�}�}�}�~����������������\n"HIR"       ��  �^�a������U����������������������������������������\n"HIR"       �t�r              �^\n"HIR"         �G\n"HIR"         ��\n"HIR"         �^�T�T������\n"NOR);
    who->start_busy(1);
    return 1;
}

int accept_kill(object who)
{
    who=this_player();
    kill_ob(who);
command("say "HIC"���������������ʶʲô�ǵ���֮��ɣ�����\n\n\n\n    "HIR"   �q���r            �X                            �x�y�z�{�|�}�~��\n"HIR"       ��  �X�[������U�}�}�}�}�}�}�}�}�}�}�}�}�~����������������\n"HIR"       ��  �^�a������U����������������������������������������\n"HIR"       �t�r              �^\n"HIR"         �G\n"HIR"         ��\n"HIR"         �^�T�T������\n"NOR);
    who->start_busy(1);
    return 1;
}

string do_special_perform1()
{
        if( query_skill_mapped("blade") == "fast-blade" ) {
            command("perform blade.fast-dest");
            map_skill("blade", "gold-blade");
        }
        else if( query_skill_mapped("blade") == "gold-blade" ) { 
            command("perform blade.gold-dest");
            map_skill("blade", "fast-blade");
        }
        command("perform blade.gold-dest");
        return "";
}

void heart_beat()
{
 object env,mob,*enemy;
 int i,j,damage;
 string msg;
 j=random(100);
 mob = this_object();
 if(!mob) return ;
 if(!environment(mob)) return ;
 env = environment(mob);
 if( j < 40 && is_fighting())
 {
    enemy=mob->query_enemy();
	for(i=0;i<sizeof(enemy);i++){
	if(!enemy[i]) continue;
    if(environment(mob) == environment(enemy[i]))
    {
        message_vision(HIY"\n$N��������ɱ�������������ᵶ�ߺ���"HIW"��  "HIM"ħ �� �� ��  "HIW"��  "HIY"�� "HIB"�� �� ��  "HIW"��\n\n        "HIW"��  "HIR"ħ "HIW"�� "HIR"�� "HIW"�� "HIR"�� "HIW"�� "HIR"ɱ "HIW"�� "HIR"֮   "HIY"��   ��   "HIC"��   ն   ��  "HIW"��\n\n"NOR,mob,enemy[i]);

        {
        damage = random(300)+100;
                msg = HIB"$N����ս��ԴԴ������й����"HIW"��"HIY"����"HIC"��ն��"HIW"��"HIB"Ҽʽ"HIW"��"HIY"�쵶"HIC"������"HIW"��"HIB"��$n"HIB"�����޵��⿳�����������\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i],0);
                }
                else {
                        msg +="( "HIW"$n�����������ޣ���Ӱ����������������֮�н�����һһ������ "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;
                msg = HIB"$N����ս��ԴԴ������й����"HIW"��"HIY"����"HIC"��ն��"HIW"��"HIB"��ʽ"HIW"��"HIM"�׵�"HIR"��˪��"HIW"��"HIB"��$n"HIB"�����޵��⿳�����������\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);

                }
                else {
                        msg +="( "HIW"$n�����������ޣ���Ӱ����������������֮�н�����һһ������ "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;

                msg = HIB"$N����ս��ԴԴ������й����"HIW"��"HIY"����"HIC"��ն��"HIW"��"HIB"��ʽ"HIW"��"HIY"�ص�"HIG"��ɽ��"HIW"��"HIB"��$n"HIB"�����޵��⿳�����������\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
}
             else {
                        msg +="( "HIW"$n�����������ޣ���Ӱ����������������֮�н�����һһ������ "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;

                msg = HIB"$N����ս��ԴԴ������й����"HIW"��"HIY"����"HIC"��ն��"HIW"��"HIB"��ʽ"HIW"��"HIR"��"HIY"�ٻ���"HIW"��"HIB"��$n"HIB"�����޵��⿳�����������\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }
                else {
                        msg +="( "HIW"$n�����������ޣ���Ӱ����������������֮�н�����һһ������ "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
      damage = random(300)+100;
                msg = HIB"$N����ս��ԴԴ������й����"HIW"��"HIY"����"HIC"��ն��"HIW"��"HIB"��ʽ"HIW"��"HIG"�絶"HIR"���ǳ�"HIW"��"HIB"��$n"HIB"�����޵��⿳�����������\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }
                else {
                        msg +="( "HIW"$n�����������ޣ���Ӱ����������������֮�н�����һһ������ "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
      damage = random(300)+100;

                msg = HIB"$N����ս��ԴԴ������й����"HIW"��"HIY"����"HIC"��ն��"HIW"��"HIB"½ʽ"HIW"��"HIM"�굶"HIG"�����"HIW"��"HIB"��$n"HIB"�����޵��⿳�����������\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }
                else {
                        msg +="( "HIW"$n�����������ޣ���Ӱ����������������֮�н�����һһ������ "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

        {
        damage = random(300)+100;

                msg = HIB"$N����ս��ԴԴ������й����"HIW"��"HIY"����"HIC"��ն��"HIW"��"HIB"��ʽ"HIW"��"HIC"ѩ��"HIM"��ǧ��"HIW"��"HIB"��$n"HIB"�����޵��⿳�����������\n"NOR;
                if(damage > 200) {
                        message_vision(msg,mob,enemy[i]);
                        enemy[i]->apply_condition("ad-blade",random(5)+5);
                        enemy[i]->receive_damage("kee", damage, mob);
                        COMBAT_D->report_status(enemy[i]);
                }

                else {
                        msg +="( "HIW"$n�����������ޣ���Ӱ����������������֮�н�����һһ������ "NOR+WHT")\n"NOR;
                        message_vision(msg,mob,enemy[i]);
                }
        }

    }
 }
 }

    if( 70 < j && mob -> query("kee") < mob->query("max_kee")*0.6 )
    {
    message_vision( HIY"\n��Х���������˲�䵶�дܳ��������꣬���ϵ��˿�Ҳ�������ϡ�\n"NOR, mob);
    mob->delete_busy();
    mob->clear_condition();
    mob->receive_heal("kee",1000);
    mob->receive_curing("kee",1000);
    mob->receive_heal("gin",800);
    mob->receive_curing("gin",800);
    mob->receive_heal("sen",800);
    mob->receive_curing("sen",800);

    }

    if( 40< j < 70 && is_fighting() ) 
	{
	enemy=mob->query_enemy();
	for(i=0;i<sizeof(enemy);i++){
	if(!enemy[i]) continue;
    if(environment(mob) == environment(enemy[i]))
	{
    message_vision( HIR"\n\n$NĿ¶�׹⣬���һ�� "HIW"��  "HIY"��  ��  ��  "HIW"��\n\n"HIW"˲����������������������������$N\n\n"HIG"$N����ɢ���������̹⣬�����������ѩ��Ľ�������Χס��\n\n"NOR, mob );
    enemy[i]->receive_damage("kee", 500 );
    enemy[i]->receive_damage("gin", 500 );
    enemy[i]->receive_damage("sen", 500 );
    enemy[i]->start_busy(1);
    COMBAT_D->report_status(enemy[i]);

    }
	}
	}

   set_heart_beat(1);
   ::heart_beat();

}

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
    tell_object(users(),HIW"\n\n\n    "HIW"��  "HIC"�� �� �� Ե    "HIY"�� �� �� �� �� Ⱥ �� �� \n\n             "HIG"�� �� �� ��    "HIM"�� � �� �� �� �� �� �� "HIW"��\n\n\n"HIR"����"HIC"����"HIM"����"HIR"�۾�������ʮ�أ�������"+HIC+class1+HIB"����"+HIY+name+HIR+"֮�֡�\n"HIR"��ԭ�������Ի���������ز�¶���ް� ������\n\n\n"NOR);
      message_vision(HIY"\n"+winner->name()+"������Х��õ���ٵ�ս��!!\n"NOR,winner);
      write_file("/log/get_warp",sprintf("%s(%s) �õ���ٵ�ս���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  winner->add("war_score",500);
    ::die();
}
