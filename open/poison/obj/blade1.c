#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        set_name(HIC"��ս����"NOR,({"hundred-fight blade","blade"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","һ�����Ƶĵ��� ,�������������â ,Ϊ�������İ��� .\n");
                set("value", 10000);
                set("material","steel");
                set("weapon_prop/blade", 6);
        }
        init_blade(80);

        set("wield_msg","$N����ս�����ɵ��ʳ�� ,��ʱ��â��ʢ ,������Ŀ .\n");
        set("unwield_msg","$N����ս�����ջص����� ,�������â�����İ������� .\n");

        setup();
}
