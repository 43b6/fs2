// 2002/04/10 �����й����жȵĲ���,����������
// ��߷�������,�������жȽ���
#include <ansi.h>
#include <armor.h>
inherit EQUIP;
inherit SSERVER;
object user;
void create()
{
     set_name( "ɱ��ħ��",({"bell_ring"}) );
     set_weight(2000);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","���Ǵ�˵�в�����ɽ�ɽ��ص�ħˮ��������ĥ������ħ��\n");
            set("unit", "��");
            set("value",20000);
            set("material","steal");
            set("no_sell", 1);         //��Ȼ�͵ö��� action sell
            set("armor_type","finger");
            set("armor_prop/armor",5);
           }
        setup();
}

void init()
{
    if( this_player()==environment() )

    {

     add_action("do_drop","drop");
     add_action("do_auc","auc");
     add_action("do_wear","wear");
     add_action("do_give","give");
     add_action("do_remove","remove");
    }
}

int do_wear(string str)
{
     if (str=="bell_ring" || str=="all")    
{
       ::wear();

     if ( query("equipped") )
     {
        user=this_player();
        message_vision(HIG"$N������ɱ��ħ��,���������˵����̹�.\n"NOR,user);
        set_heart_beat(1);
     }
}
}

int do_drop(string str)
{
   if (str=="bell_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N������ɱ��ħ��,ħ�������̹�Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }
}

int do_give(string str)
{
   if (str=="bell_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N������ɱ��ħ��,ħ�������̹�Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }
}

int do_remove(string str)
{

   if (str=="bell_ring" || str=="all")


     if( query("equipped") )
     {
        message_vision("$N������ɱ��ħ��,ħ�������̹�Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }
}

int do_auc(string str)
{
   if (str=="bell_ring" || str=="all")
     if( query("equipped") )
     {
        message_vision("$N������ɱ��ħ��,ħ�������̹�Ҳ��֮����.\n",user);
        set_heart_beat(0);
     }
}

void heart_beat()
{
  object enemy,who;
  int i,dodge,bell,cor,shaki,raint,mag,medodge;
  if(!user) user=this_player();
  if(!user) user=previous_object();
  if(!user) return ;
  bell=user->query("bellicosity");
  cor=user->query("cor");
  shaki=user->query_skill("shadow-kill",1);
  raint=user->query_skill("rain-throwing",1);
  mag=user->query_skill("magic",1);
  enemy=offensive_target(user);
  dodge = enemy->query_skill("dodge",1);
  if (dodge < 30)
	dodge = 30;	//�õ���������30����������
  medodge = user->query_skill("dodge",1);
  medodge=medodge+50;
  if (user->query("class")=="killer")   //ɱ�ֶ����100
	medodge = medodge + 100; //һ������趨dodge < 100
  if(!enemy) return ;

  if( mag < 10 ) mag=10;
  if( !objectp(user) )
  {
     set_heart_beat(0);
     return;
  }
  if( user->is_fighting() && query("equipped") && (bell > 35) )
  {
   if( random(cor*25) > 300) // Ŀǰ�������ppl��cor��Ϊ25-35��*300�����
   {                             // ������̫����������Ϊ����*180  BY SWY  
     if( random(medodge) > dodge)    //������˵�dodge��100�Ļ���Լ��50�������ж�
     { //dodge ���30,medodge ���220?
      message_vision(HIG"ɱ��ħ������$N��ɱ������ɱ������$n����!\n"NOR,user,enemy);
      message_vision(HIG"$Nǿ���ɱ����$n�ƵĴ��������������Ķ��ܵ������˺�!!!\n"NOR,user,enemy);
      enemy->start_busy(2);
      if(user->query("class")=="killer") 
      { //shadow-kill 90+rain-thrwoing 100��190��
       enemy->receive_damage("sen",random(mag*2));
       enemy->receive_damage("gin",random(mag*2));
       enemy->receive_damage("kee",random(shaki+raint+50));  } 
      else 
      {enemy->receive_damage("kee",random(150)); }
      user->add("bellicosity",-(mag/4));  //    magicԽ������ȥ��ɱ��Խ�ߣ�����ҲԽ��
     }
     else{
      message_vision(HIG"ɱ��ħ������$N��ɱ������$n,���������...\n"NOR,user,enemy);
      user->add("bellicosity",-10);
     }
   }
  }
return;
}
