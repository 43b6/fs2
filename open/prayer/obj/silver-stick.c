#include <weapon.h>

inherit STICK;

void create()
{
        set_name( "��˫�ڹ�" , ({ "silver club","club"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "һ�����Ƶ�˫�ڹ���\n");
                set("value", 4000);
                set("material", "silver");
        }
        init_stick(10);

        set("wield_msg", "ֻ����$N�����ؽ�$n�Ӳ������ó����������ݡ�\n");
        set("unwield_msg", "$N˧���ؽ�$n�Żز����ڡ�\n");

        setup();
}                   