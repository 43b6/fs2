#include <weapon.h>
#include <ansi.h>

inherit STICK;

void create()
{
        seteuid(getuid());
        set_name("[33m�������ڹ�[0m",({"dragon-stick","stick"}));
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","����һ�����Ƶ����ڹ���β�˲������ԻƼ׽����Ĺ�ͷ�Ƴ����Σ�������߹�������\n");

                set("value",30000);
                set("material", "steel");
        set("wield_msg", "$N�Ӳ����г����$n����ʱ�������[36m��ǿ�������������˫��[0m��\n");
        set("unwield_msg", "$N��$n�Ž�����Ĳ��� ��\n");
        }
        init_stick(90);
        setup();
}                            