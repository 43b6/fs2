//  ���Ƶ�����

#include <weapon.h>

#include <ansi.h>

inherit STABBER;
int timer,wait,limit;
object user=this_player();
void create()
{
        object me=this_player();
        set_name(HIC"Ʈ����"NOR, ({"cloudy fan", "fan"}) );
        set_weight(12000);
        set("six_no_delay",1);
        if( clonep() )
         set_default_object(__FILE__);
        else
         {
          set("unit", "��");
          set("long","���ǶμҵĴ���֮��, ���д���, ���ǶμҵĴ���, ��˵�����ڶԵ�ʱ��������Ĺ���ม�\n");
          set("value", 10000);
          set("material", "crimsonsteel");
         }
        init_stabber(100);
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
        if(!user) user=environment();
        if(!user) return 0;
        if(user->query("marks/six_sp")==3 && user->query("family/family_name")=="�μ�"){
message_vision(HIC"$N��$n�������ϣ��о�������������һ�������������\n"NOR,user,this_object());
        set_heart_beat(1);
}
     }
}
int do_drop(string str)
{
   if(str=="cloudy fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N��$n����, ����Ĳ������䡣\n"NOR,user,this_object());
        set_heart_beat(0);
     }
}
 int do_give(string str)
{
   if(str=="cloudy fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N��$n����, ����Ĳ������䡣\n"NOR,user,this_object());
        set_heart_beat(0);
     }
}
int do_unwield(string str)
{
    if(str=="cloudy fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
if(user)
message_vision(HIC"$N��$n����, ����Ĳ������䡣\n"NOR,user,this_object());
        set_heart_beat(0);
     }
}
int do_auc(string str)
{
    if(str=="cloudy fan" || str=="fan" || str=="all")
     if( query("equipped") )
     {
message_vision(HIC"$N��$n����, ����Ĳ������䡣\n"NOR,user,this_object());
        set_heart_beat(0);
     }
}

void heart_beat()
{
  object *enemy,weapon;
  int i,j,force_level,hurt,k,stat,be,fun,power;
  if(!user) user=this_player();
  if(!user) user=previous_object();
  if(!user) return ;
  be = user->query("bellicosity",1);
//���뷢����ʱ����,��swy��Ӧ������̫�߹��Է������10��heart_beat���ӳ���ʱ��by bss
//����ҷ�Ӧɱ���ߵ������Ѿ�������,���Ե���Ϊɱ���ߵĻ����Եȵ���һ��
  if(be<3000 && be>=2000) limit=6;
  if(be<2000 && be>=1000) limit=8;
  if(be<1000) limit=10;
  if(be>3000 || user->query("six_spsp")) limit=4;
  if(user->query("six_spsp") && user->query("env/quick_fan")) limit=2;
  if(wizardp(user) && user->query("env/quick_fan")) limit=2;
//�����Ǹ�wiz����
  if(wizardp(user)) printf("limit=%d\n",limit);
  if(wait)
  {
    timer=timer+1;
    if(timer>=limit)
    {
        timer=0;
        wait=0;
    }
    else
    {
        return;
    }
  }
  if(be > 3000) be=3000;
  be=be/50;
  if(user->query("six_spsp")) be=60;
  if(wizardp(user)) be=80;
  if(user->is_busy())  be=0;
  k = user->query("int",1);
  if(user->query_skill_mapped("force")=="sunforce")
  {
      force_level=user->query_skill("sunforce",1);
         stat=0;
  }
  else
  {
      force_level=user->query_skill("sunforce",1);
         stat=1;
  }
  if(!stat)
  {
         hurt=force_level+((random(6)+k)*20);
  }
  else
  {
         hurt=force_level+((random(6)+k)*20);
         hurt=hurt/2;
  }
  if(user->query("env/quick_fan")) hurt=1000+random(10000)+hurt;
  if ( !objectp(user) )
        {
        set_heart_beat(0);
        return;
        }
if(user->query("env/quick_fan")) be=80;
power=1;
weapon=user->query_temp("secondary_weapon");
if(weapon){
  if(weapon->query("finger-fan",1)){ //�����õ���Ʈ����
    fun=user->query("functions/fan-finger/level");
    if(fun >= 100){
      hurt=hurt*2;
      power=2;
    }
  }
}
if( user->is_fighting() && query("equipped") && user->query("marks/six_sp")==3 && user->query("family/family_name")=="�μ�")
{
   if( be > random(100) && user->query("force") > 500 && !user->is_busy() && !wait)
   {
     wait=1;
     enemy=user->query_enemy();
     j=sizeof(enemy);
     if(j>4) j=4;
message_vision("

          "HIM"$N��Ȼ��$n"HIM"�о���һ����ֵ�������������

         "HIY"ɷ�Ǽ������˴�����ϵľ���"BLINK+HIR"��ԡ  ��  ��  �ˡ�"NOR"

             "HIG"���廯��һֻ�޴��"HIR"����"HIG", �����˹�ȥ
"HIR"
  :                       .
   ::                      :   :
   :::.                    :: ::
   ::"HIY"*"HIR":.
   ::::::.                :::.::: ::
   ::`:`: `.             :::.:::.:::  :
   ::    `  `           ::::::::.:::.::
   :::.              .::::::::::::.:::  :
   ::::.           .::::::::::::::::: :'                           ::
   ::::::.     ..::::::::::::::::::.::  .                         .
   ::::::::::::::::::::::::::::::::::::'                         ::
   :::::::::::::::::::::::::::::::::..                         .::
   ::::::::::::::::::::.::::::.         .::::::.            .::'
   `:::::::::::::::::::::.                      `::::::::::'
    :::::::::::::::.      `         .:::::::::.
    :`::::::::::::::::.     .::::::::.       `::::::.
    :  `:::::::::::::::::::::      `::::::.         `::::.
    ::   `::::::::::::'                  `::::.          ``::.      ::'
    ` :.                                     `::::. .         :: .


\n"NOR,user,this_object());

     for(i=0;i<j;i++)
     {
       if(!enemy[i]) continue;
       if(95 > random(100))  //�����������,���������ʾͶ���by bss
       {
message_vision(HIY"$N�ұ�"HIR"����"HIY"������, ��������ص����ˡ�\n"NOR,enemy[i]);
         enemy[i]->add("kee",-(hurt));
         enemy[i]->start_busy(1*power);
         enemy[i]->apply_condition("burn",random(10)*power);
         COMBAT_D->report_status(enemy[i],0);
       }
       else
       {
message_vision(HIW"$N���˻��徢��,���������ܲ���һ����ǽ,�պõĵ���ס��"HIR"����"HIW"����Ϯ��\n"NOR,enemy[i]);
         COMBAT_D->report_status(enemy[i], 0);
       }
     }
     user->add("force",-300);
  }
}
return;
}
