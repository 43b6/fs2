#include <ansi.h>
#include <armor.h>
inherit CLOTH;
object user;
int kar;
void create()
{
   set_name("[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37m��[0m",({"wind armor","armor"}));
   set_weight(20000);
   if( clonep() )
        set_default_object(__FILE__);
   else {
   set("no_sell",1);
   set("no_auc",1);
   set("no_drop",1);
   set("unit","��");
   set("value",150000);
   set("material", "cloth");
   set("long","����һ������������ʹ�÷���ʯ�������������ס�\n");
   set("unequip_msg", "$N��$n�ѵ���"HIW"������"NOR"��������֮��ȥ��\n");
   set("armor_prop/armor",22);
   set("armor_prop/stabber",10);
}
        setup();
}
int query_autoload()
{
 return 1;
}
int init()
{
    add_action("do_wear","wear");
}
int do_wear(string str)
{
::wear();
 if( query("equipped") )
 {
   user = this_player();
message_vision("$N��[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37m��[0m���ϣ�"HIW"������"NOR"��������ע��$N���С�\n",user);
   kar=user->query("kar");
   set_heart_beat(1);
 }
}
void heart_beat()
{
  object *enemy,who;
  int i,dodge;
  if( !objectp(user) )
  { set_heart_beat(0);
     return;
  }
  if( user->is_fighting() && query("equipped") )
  {
    if( random(kar+70) > 70)  // ������,���ʸ�
    {
     enemy=user->query_enemy();
     i=random(sizeof(enemy));
     dodge = enemy[i]->query_skill("dodge");
     if( random(180) > dodge)
     {
message_vision(HIW+"��Ȼ���缱���ʱ,��ʱ�����������[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37m��[0m"HIW"�з���,˲�佫$N��ס�޷�����!!!\n"+NOR,enemy[i]);
      enemy[i]->start_busy(1);
     }else{
message_vision(HIW+"��Ȼ���缱���ʱ,��ʱ�����������[1;37m��[0;37mg[1;37m��[0;37m��[1;37m��[0;37m��[1;37m��[0;37m��[0m"HIW",$N˲�俴�������·,���˹�ȥ..\n"+NOR,enemy[i]);
  }
    }
  }
  return;
}
