#include <weapon.h>
#include <command.h>
#include <combat.h>
#include <skill.h>
#include <ansi.h>
inherit BLADE;
object user;
int cor;
void create()
{
        set_name( HIR "����"HIY"��" NOR, ({ "sun_moon blade",  "blade" }) );
        set_weight(1000);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("na_auc",1);
        set("no_sac",1);
        set("no_give",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ���������񵶣���˵���ɹŴ��Ĵ��������������ô˵��߽����Ե�������������ˡ�\n");
                set("value", 0);
                set("material", "crimsonsteel");
                set("wield_msg", "$N����������ɲ�Ǽ�"HIR"����"HIY"��"NOR"�ĵ��ʷ���ҫ�۽�⣬$N����һ�Σ�"HIR"����"HIY"��"NOR"������!!!\n");
                set("unwield_msg", "$N������$n������һ�ף�$n��ƫ���е�������ڡ�\n");
        }

         set("weapon_prop/damage",120);
        set("weapon_prop/blade", 20);
        setup();
}
void init()
{
        add_action("do_wield","wield");
        add_action("do_unwield","unwield");
}
int do_wield(string str)
{
        ::wield();
        if( query("equipped") )
        {
        if(str=="all" || str=="blade" || str=="sun_moon blade")
        {
        user = this_player(); // ȡ��ʹ����
        user->set_temp("wield_sun_moon_blade",1);
        cor = user->query("cor");
        cor = cor *2;
        message_vision("$N����������ɲ�Ǽ�"HIR"����"HIY"��"NOR"�ĵ��ʷ���ҫ�۽�⣬$N����һ�Σ�"HIR"����"HIY"��"NOR"������!!!\n",user);
        set_heart_beat(1);
        }
        }
}
int do_unwield(string str)
{
        if(str=="blade" || str=="sun_moon blade")
        {
        user->delete_temp("wield_sun_moon_blade");
        set_heart_beat(0);
        }
}
void heart_beat()
{
        object *enemy,who;
          int i,j,kar;
        if(!user) user=environment();
        if(!living(user)) return ;
        kar=user->query("kar");
        kar=kar+kar; 
         if(user->query("family/family_name")=="����"){
     kar=user->query("kar");
       kar=kar+kar+kar;
       }
  if( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
         if(kar > random(100))
  {
  if( user->is_fighting() && user->query_temp("wield_sun_moon_blade") && query("equipped") )
  {
    enemy=user->query_enemy();
      i=sizeof(enemy);
     j=i;
        for(i=0;i<j;i++)
    {
    message_vision("$N"HIY"��Ȼ���Ž�⣬һ���޴�ĵ�����$N"HIY"��������$n!!!\n"+NOR,this_object(),enemy[i]);
    if(50 > random(100))
    {
    message_vision(HIR"ֻ����$N�ҽ�һ���������������ض�������Ѫ���ϵ���$N���ؿ���������Ʒǳ�����!!!\n"NOR,enemy[i]);
    enemy[i]->receive_damage("kee",(100*random(2)),user);
//    enemy[i]->apply_condition("bleeding", random(4));
//    enemy[i]->start_busy(1);
    COMBAT_D->report_status(enemy[i]);
    }
    else
    {
    message_vision(HIC"���ڵ�����Ҫ����$N��˲�䣬$Nչ�����������ܹ�����������һ����\n"NOR,enemy[i]);
    }
    }
  }
  }
  return;
}


