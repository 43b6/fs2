#include <weapon.h>
#include <command.h>
#include <combat.h>
#include <skill.h>
#include <ansi.h>
inherit STABBER;
object user;
int cor;
void create()
{
        set_name(HIW"�߲�"HIY"��˱�"NOR,({ "seven_bird pen","pen" }) );
        set_weight(1000);
        set("no_sell",1);
        set("no_get",1);
        set("no_put",1);
        set("no_drop",1);
        set("na_auc",1);
        set("no_sac",1);
        set("no_give",1);
        set("no_steal",1);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "��");
        set("long", "�˱�ΪŮ洲���ʱ���߲��������ë�����ıʣ���˵�����ص�������ֻ���������ʹ�õ�һ֧�ʡ�\n");
        set("value", 0);
        set("material", "crimsonsteel");
        set("wield_msg","$N��̬������������ȡ��"HIW"�߲�"HIY"��˱�"NOR"��$Nȫ������ɢ����һ�ɽ��!!!\n");
        set("unwield_msg", "$N������$n�ջ����ʡ�\n");
        }
        set("weapon_prop/damage",120);
        set("weapon_prop/stabber",10);
        set("weapon_prop/dodge",5);
        set("weapon_prop/dodge",5);
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
        if(str=="all" || str=="pen" || str=="seven_bird pen")
        {
        user = this_player(); // ȡ��ʹ����
        user->set_temp("wield_bird_pen",1);
        cor = user->query("cor");
        cor = cor *2;
        message_vision("$N��̬������������ȡ��"HIW"�߲�"HIY"��˱�"NOR"��$Nȫ������ɢ����һ�ɽ��!!!\n",user);
        set_heart_beat(1);
        }
        }
}
int do_unwield(string str)
{
        if(str=="pen" || str=="seven_bird pen")
        {
        user->delete_temp("wield_bird_pen");
        set_heart_beat(0);
        }
}
void heart_beat()
{
        object *enemy,who;
        int i,j,kar;
        if(user->query("family/family_name")=="����"){
        kar=user->query("kar");
        kar=kar+random(10);
        }
  if( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
  if(kar > random(100))
  {
  if( user->is_fighting() && user->query_temp("wield_bird_pen") &&   query("equipped") )
  {
      enemy=user->query_enemy();
      i=sizeof(enemy);
      j=i;
      for(i=0;i<j;i++)
      {
      message_vision("$N"HIW"�����߲ʷ�˱ʻ����߲�����$N"HIY"��������ֱ��$n!!!\n"+NOR,this_object(),enemy[i]);
    if(80 > random(100))
    {
    message_vision(HIY"ֻ��������צץ��$N��ֻ��$N����Ƥ����������ѪȾ����$N��ȫ��Σ�ڵ�Ϧ!!!\n"NOR,enemy[i]);
    enemy[i]->receive_damage("kee",(100*random(5)),user);
    enemy[i]->apply_condition("burn", random(4));
    enemy[i]->apply_condition("hart", random(4));
    enemy[i]->start_busy(1);
    COMBAT_D->report_status(enemy[i]);
    }
    else
    {
    message_vision(HIC"ֻ��$N���ֲ�����һ�¶���������׷����\n"NOR,enemy[i]);
    }
    }
  }
  }
  return;
}



