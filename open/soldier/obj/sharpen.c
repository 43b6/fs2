
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name(HIM"����"NOR,({"sharpen"}));
        set_weight(9000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
    set("long","
    ��������Ǹ�����һ��ӻƹ�ɽ�ٲ�ˮ�״��̳�����
��˵�ڳ���ʱ�����Ѻ���һ���..Ȼ����������Ƥ����ҹ
�и�..�ŷֳ�����ǹ��
    ");
                set("value",70000);
                set("material", "blacksteel");
        set("wield_msg", "$N��һб,˳�Ƴ��$n,$n��������ҫ�۵�����,��ʱ$N����������\n");
        set("unwield_msg", "$N������$n�Żر��ϵĵ����С�\n");
      }
        init_lance(85);
        setup();
}


