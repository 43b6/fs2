#include <weapon.h>
#include <ansi.h>

inherit SWORD;
object user;
int be,bb,inn,sp,qq;
void create()
{
        seteuid(getuid());
        set_name(HIR"��ħ��"NOR,({"iceger"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","��������֮��,�ܸ�����������˺���\n");

                set("value",10000);
                set("material", "steel");
                set("no_sell",1);
        }
        init_sword(255);
        setup();
}
void init()
{
     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wield","wield");
     add_action("do_give","give");
     add_action("do_unwield","unwield");
}
int do_wield(string str)
{
     ::wield();
     if( query("equipped") )
     { 
        user = this_player();
        message_vision(HIR"$N����ħ���������ϣ�ȫ���ѱ��������֡�\n"NOR,user);
        set_heart_beat(1);
     }
}
int do_drop(string str)
{
   if(str=="iceger" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N���Ȼ������ħ��-�������أ�",user);
        set_heart_beat(0);
     }
}
 int do_give(string str)
{
  if(str=="iceger" || str=="all")
     if( query("equipped") )
     {
        message_vision("[1m[31m$N����������������,����[37m�Ʊ�[31m����ʧ���١�[0m\n",user);
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
   if(str=="iceger" || str=="all")
     if( query("equipped") )
     {
        message_vision(HIY"$N����һ�����������齣�С�"NOR,user);
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
  if(str=="iceger" || str=="all")
     if( query("equipped") )
     {
        message_vision(HIY"$N����һ������,���л�ħ����ʧ���١�"NOR,user);
        set_heart_beat(0);
     }
}

void heart_beat()
{
  object *enemy,who;
  int i;
//  be = user->query("bellicosity",1);
  be = 1000;
  bb = (be/20);
  inn= user->query("int",1);
  sp = user->query("spi",1);
qq=(inn +sp) *2 /30;
 if ( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
 if( user->is_fighting() && query("equipped") )
  {
    if( be > random(300) )
    {
     enemy=user->query_enemy();
     i=random(sizeof(enemy));
     if( environment(user) == environment(enemy[i]) )
      if( random(5000) > enemy[i]->query_skill("dodge") )
     {
      message_vision(HBRED"��ħ��--*��������*���ظ�ԭ��,ֱ�ӳ���$N��˲������һƬ��!!!"NOR,enemy[i]);
      enemy[i]->receive_damage("kee",qq+bb,user);
      COMBAT_D->report_status(enemy[i], 0);
     }else
      message_vision("[1m[33mһ�������ɻ�ħ����������,��ϧ��$N�����������赲..[0m\n",enemy[i]);
     }
  }
  return;
}
