
#include <weapon.h>

inherit BLADE;

void create()
{
       set_name("̳ľ��",({"blade"}));
         set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "
  һ����̳��ľ����ɵĵ�,�ʺ�ͬ�Ų�����...\n");
                set("value", 500);
                 set("material", "wood");
         set("wield_msg", "һ��̴��ζ���˳���,$N�ó�һ��̴ľ����\n");
               set("unwield_msg", "$N�����е�$n���˻�ȥ�� \n");
        }
     init_blade(10);
        setup();
}

