#include <weapon.h>

inherit STICK;

void create()
{
        set_name( "������ڹ�" , ({ "emery stick","stick"}) );
        set_weight(13500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "һ�������Ƶ����ڹ������а��ؽ��ɰ���ڹ���ʱ�������Ӿֲ����˺���\n");
                set("value", 10000);
                set("material", "blacksteel");
        }
        init_stick(60);

        set("wield_msg", "$N�����ھ���$n���ܵ�����ھ��������졣\n");
        set("unwield_msg", "$N�ھ�һ�գ�$n�������Ž���ƽϢ��\n");

        setup();
}                   