// /u/a/acelan/eqs/m_weapon.c �������� written by AceLan.............97.11.10
// Modify By AceLan 98.7.13 �����ø��п�ͷ...ccc....

#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
   object me= this_player();
   string c_unit, wield_part, weapon_type= me->query("weapon/e_type"); // new

   set_name( me->query("weapon/name"),({"special "+me->query("weapon/e_type"), me->query("weapon/e_type"), "m_weapon"}) );
   set_weight(1000);
   if( clonep() )
      set_default_object(__FILE__);
   // ��Ϊ��������...
   if( weapon_type == "whip")
   {
      c_unit= "��";
      wield_part= "����";
   }
   else if( weapon_type == "pen")
   {
      c_unit= "ֻ";
      wield_part= "����";
   }
   else if( weapon_type == "ring")
   {
      c_unit= "ֻ";
      wield_part= "ָ��";
   }
   else if( weapon_type == "armband")
   {
      c_unit= "��";
      wield_part= "����";
   }
   else                                      // ʣ�µ�Ϊ �� �� ذ�� ���� ��
   {
      c_unit= "��";
      wield_part= "����";
   }

   set("long","��"+c_unit+me->query("weapon/c_type")+"����[1;37m"+ me->query("weapon/source1")+"[0m���[1;37m"+ me->query("weapon/source2")+"[0m�����ɵ�, ������˸����⡣");
   set("unit", "��");
   set("value",0);                           // �޼�֮��...ccc....
   set("material","steal");

   // ��ǿ��װ��������ж��������ѶϢ...
   // ָ �� �� ָ�� �ۻ�
   if( me->query("weapon/type") == "stabber" || me->query("weapon/type") == "unarmed")
   {
      set("wield_msg", HIW"ֻ��$N���һ��, һ���׹�Ѹ����$N���дܳ�, \n�ڿ����̻���Ȧ��ͣ��$N��"+wield_part+"����һ"+c_unit+"���ص�"+ me->query("weapon/name")+"��\n"NOR);
      set("unwield_msg", HIW"ͻȻ��$N���ظ�֮����������, ��"+wield_part+"��$n����һ��, \nֻ��$n�����Ļ���һ��\����, ��û��$N���ظ�֮�䡣\n"NOR);
   }
   else // if( c_unit == "��" || c_unit == "��")// ָ �� �� ذ�� ����...���Ӳ������
   {
      set("wield_msg", HIW"$N����Ľ�"+ me->query("weapon/name")+"�ɱ�����, ֻ��һ��ҫ�۶�����Ĺ�âע����$N���ϡ�\n"NOR);
      set("unwield_msg", HIW"$N�����е�$n����������һ��, ֻ�������������˱���\n"NOR);
   }

   set("no_drop", 1);
   set("no_give", 1);
   set("no_get", 1);
   set("no_auc", 1);

   init_sword( me->query("weapon/value"));
   set("weapon_prop/damage", me->query("weapon/value"));
   set("skill_type", me->query("weapon/type"));
   setup();
}

// ������ Modify by AceLan....99.3.7
// ���ܲ����޸������������ͻ
void init()
{
   if( environment() == this_player() )
   {
      init_sword( this_player()->query("weapon/value"));
      set("weapon_prop/damage", this_player()->query("weapon/value"));
   }
}

int query_autoload()
{
   return 1;
}
����