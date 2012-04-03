#include <ansi.h>
#include <weapon.h>
inherit SWORD;
object user;
int sp,max;
void create()
{
     set_name( HIR"Ѫ��"NOR,({"blood_sword","sword"}) );
     set_weight(7500);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","Ѫħ��ר���佣����ս���п�������Ѫ��ѹ�ƶ���.\n"
                      +"�ͷ�Ѫ��: sword_blood,�������:sword_check\n"
                      +"����ս�����Զ�����,����Խ��,����Խǿ.");
            set("unit", "��");
            set("value",20000);
            set("material","steal");
            set("wield_msg", HIR"$N�ӽ�$n"+HIR"�ɻ�������Ľ����г��.\n");
            set("unwield_msg", "$N��$n��ؽ�����.\n");
           }
        init_sword(99);
        setup();
}

void init()
{
     add_action("do_wield","wield");
     add_action("do_check","sword_check");
     add_action("do_fire","sword_blood");
}

int do_wield(string str)
{
     ::wield();
     if( query("equipped") )
     {
        user = this_player();     // ȡ��ʹ����
        sp = 0;
        max = user->query_skill("blood_sword",1);
        set_heart_beat(1);
     }
}
int do_check()
{

 if( query("equipped") )
   write(HIR"Ѫ�䴢���Ѫ���� "+sp+" .\n"NOR);


 return 1;
}
void heart_beat()
{
  if( user->is_fighting() && query("equipped") && sp < max )
  {
   sp++;
  }
     return;
}

int do_fire()
{
  object *enemy;
  int i,pp;

  if( max < 80)
  {
    write("��Ľ���̫��,�޷�����Ѫ��.\n");
    return 1;
  }

  if( user->is_fighting() && query("equipped") )
  {
    enemy=user->query_enemy();
    i=random(sizeof(enemy));
    if( environment(user) == environment(enemy[i]) )
    {
           if( random(250)+max > enemy[i]->query_skill("dodge") )
      {
        if( sp < 2)
        {
          message_vision("һС��Ѫ����Ѫ�䴮����������Ѫ�����㣬δ��"
                            +"$n���ʱ�Ѿ���ʧ!!!\n",user,enemy[i]);
          sp=0;
          return 1;
        }else if( sp < 10 )
        {
          message_vision(HIR+"һ��Ѫ����Ѫ�����,����$n!!!\n"
                         +NOR,user,enemy[i]);
          pp = sp;
        }else if( sp < 20 )
        {
          message_vision(HIR+"$N����Ѫ����һ��,����Ѫ����Ѫ��ֱ�����죬������"
                         +"$n��ȥ!!!\n"+NOR,user,enemy[i]);
          pp=sp*2;
//          enemy[i]->apply_condition("burn",(int)sp*1.5);
        }else if( sp < 30)
        {
          message_vision(HIR+"$N���г���һ��,ֻ�����ϵ���,����Ѫ��һƬ,"
                      +"$n������Ѫ������!!!\n"+NOR,user,enemy[i]);
          pp=sp*3;
          enemy[i]->apply_condition("hellfire",1);
        }else if( sp < 40)
        {
          message_vision(HIR+"$N����Ѫ��,ֻ�����ܾ��￪ʼ��ȥ,����Ѫ��������"
                            +"��ͻȻ͸��,һ��Ѫ����ֱ��Ϯ��$n!!\n"
                            +NOR,user,enemy[i]);
          pp=sp*4;
          enemy[i]->apply_condition("hellfire",2);
        }else{
          message_vision(HIR+"$N�����񣬽�����Ѫ���̽���һֻ���У�ֻ��Ѫ��"
                            +"������$N����Ѫ��ɢ����ҫ�۹�â�����ͷų�����"
                            +"Ѫ����Χ$n!!!\n"NOR,user,enemy[i]);
          user->receive_damage("kee",300);
          pp=sp*7;
          enemy[i]->start_busy(1);
          enemy[i]->apply_condition("hellfire",3);
        }
        sp=0;
        enemy[i]->receive_wound("kee",pp,user);
        COMBAT_D->report_status(enemy[i], 0);
      }else
      {
        message_vision(HIR+"$N����ʹ��Ѫ��..��Ѫ���ﶼ������..\n"+NOR,user);
        sp=sp*0.7;
      }
     }
   }
  return 1;
}

