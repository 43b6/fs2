#include <weapon.h>
#include <ansi.h>
inherit UNARMED;
inherit SSERVER;
object user=this_player();
int be,bb,k,sp,qq;
void create()
{
        seteuid(getuid());
        set_name(HIR"����"NOR,({"fireger"}));
        set_weight(3500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","��������֮��ܸ�����������˺���\n");
                set("value",20000);
                set("material", "steel");
        }
        init_unarmed(70);
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
message_vision(HIR"$N�����ʹ������ϣ�ȫ���ѱ��һ����֡�\n"NOR,user);
        set_heart_beat(1);
     }
}
int do_drop(string str)
{
   if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N���������������������һ�����ʧ���١�\n"NOR,user);
        set_heart_beat(0);
     }
}
 int do_give(string str)
{
  if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N���������������������һ�����ʧ���١�\n"NOR,user);
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
   if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N���������������������һ�����ʧ���١�\n"NOR,user);
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
  if(str=="fireger" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N���������������������һ�����ʧ���١�\n"NOR,user);
        set_heart_beat(0);
     }
}
void heart_beat()
{
  object enemy;
  int i;
  if(!user) user=this_player();
  if(!user) user=previous_object();
  if(!user){
    return ;
  }
    be = user->query_skill("unarmed",1);
  k = user->query("int",1);
  sp = user->query("spi",1);
  qq = (k+sp)^2 / 30;
  if ( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
 if( user->is_fighting() && query("equipped") )
  {
    if( be > random(500) )
    {
     enemy=offensive_target(user);
       if(user && enemy)
     if( environment(user) == environment(enemy) )
       if( random(300) > enemy->query_skill("dodge") )
     {
message_vision(HIY"һ�������ɾ��ͼ��������ֱ������$N���Ŀ���\n"NOR,enemy);
      enemy->receive_damage("kee",qq+be,user);
      COMBAT_D->report_status(enemy, 0);
     }else
message_vision(HIW"һ�������ɾ��ͼ����������ϧ��$N����������ɢ��\n"NOR,enemy);
     }
  }
  return;
}

