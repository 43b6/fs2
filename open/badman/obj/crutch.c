#include <ansi.h>
#include <weapon.h>

inherit STAFF;

void create()
{
      set_name("����",({"crutch"}) );
      set_weight(1000);
      if( clonep() )
            set_default_object(__FILE__);
      else {
            set("value",30);
            set("unit","֧");
            set("material","wood");
            set("long","һ֧�������۵Ĺ��ȡ�\n");     
            set("wield_msg","$N������ԭ�ȷ������ʱߵ�$n��\n");
            set("unwield_msg","$N�����е�$n������ʼ䡣\n");                        
      }
      init_staff(5);
      setup();
}     
