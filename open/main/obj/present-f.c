#include <weapon.h>
#include <ansi.h>
inherit STABBER;
void create()
{
        set_name(HIW"������"NOR,({"ancient fan","fan"}) );
        set_weight(40000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�ഫ�ǵ�˧"HIW"������"NOR"��������������,���ϻ��������漣.\n");
        set("unit","��");
        set("value", 30000);
        set("material","blacksteel");
                  set("armor_prop/stabber",10);
        }
        init_stabber(120);
        set("wield_msg", "$N�ӻ��а������ͳ���, ������"HIW"������"NOR"��������.\n");
        set("unwield_msg", "$N�����Ӻ���, С�ĵ��յ�����.\n");
        setup();
}
