#include <weapon.h>
#include <ansi.h>

inherit SWORD;
object user;
object ob;
void create()
{
   
   seteuid(geteuid());
   set_name("������",({"Heaven sword","sword"}));
   set_weight(5000);
   set("value",10000);
   if( clonep() )
        set_default_object(__FILE__);
   else {
        set("unit","��");
   set("long","\nһ������ͨͨ�Ľ�����\n");
   set("material", "blacksteel");
   set("weapon_prop/sword", 10);
   set("wield_msg","$N������ע��$n�У�һ����â�ɽ��������\n");
   set("unwield_msg", "$Nֹͣ����������$n�Ľ��ж�ʱ��ʧ��\n");
   init_sword(95);
      }
   setup();
}   
void init()
{
  add_action("do_wield","wield");
}

void do_wield(string str)
{
  ::wield();
    user=this_player();
    ob=this_object();
    user->add("force",-100);
    write((string)user->query("name")+"������ע��"+(string)ob->query("name")+"�У�һ����â�ɽ��������\n");
}