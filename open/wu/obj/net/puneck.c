#include <ansi.h>
#include <armor.h>
inherit EQUIP;
object user;
int kar;
void create()
{
set_name("[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mP[1;33m��[1;37m��[0m",({"purple neck","neck"}));
   set_weight(5000);
   if ( clonep() )
       set_default_object(__FILE__);
   else {
   set("long","����һ������������ɼ�����������������ɵ�������\n");
   set("unequip_msg", "$N��$n�ѵ�,$N���ϵ�$n��ɢ����������֮��ȥ��\n");
   set("armor_prop/armor",7);
   set("armor_prop/dodge",3);
   set("unit", "��");
   set("armor_type", "neck");
   set("value", 30000);
   set("no_sell",1);
   set("no_auc",1);
   set("no_drop",1);
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
message_vision("$N��[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mP[1;33m��[1;37m��[0m���ϣ�[1;33m��[1;31m��[1;33m��[1;31m��[1;33m��[1;31mP[1;33m��[1;31m��[0m��������ע��$N���С�\n",user);
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
     user->receive_curing("kee",30);
     user->receive_heal("kee",30);
message_vision(HIY"[1;33m��[1;37m��[1;33m��[1;37m��[1;33m��[1;37mP[1;33m��[1;37m��[0m"HIY"ɢ������������,$N��������ԡ��,$N���ܵĴ��˻ָ���.\n"NOR,user);
      }
  }
  return;
}
