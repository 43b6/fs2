#include <weapon.h>
 
inherit STICK;
 
void create()
{
        set_name("��ü��", ({ "club" }) );
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
               set("unit", "��");
               set("long", "����һ�ѿ����൱��ͨ����ü��������������ɮ������ר�õġ�\n");
               set("value", 400);
               set("material", "steel");
        }
        init_stick(25);
 
        set("wield_msg", "$N���һ������$n�������С�\n");
        set("unwield_msg", "$N�����е�$n���ڱ���\n");
 
 
        setup();
}
