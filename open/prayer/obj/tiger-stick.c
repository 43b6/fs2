#include <weapon.h>
#include <weapon.h> 

inherit STICK;

void create()
{
        set_name( "����˫�ڹ�" , ({ "tiger stick","stick"}) );
        set_weight(12000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "һ�����Ƶ�˫�ڹ���β�������а���Ļ�������ǿ��������\n");
                set("value", 6000);
                set("material", "steel");
        }
        init_stick(30);

        set("wield_msg", "[36mֻ����$N���һ����$n��ӱ���Ĳ������Ծ����[0m��\n");
        set("unwield_msg", "$N�����һ�ף�$n���Զ��ɻز����ڡ�\n");

        setup();
}                   