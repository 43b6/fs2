
#include <weapon.h>
#include <ansi.h>
inherit LANCE;
void create()
{
        seteuid(getuid());
set_name("��ì",({"beast lance","lance"}));
        set_weight(3500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
    set("long","һ��ר��������ȡ�����ǹ,��ǹ�׶˻���һ��׶.\n");
                set("value",5000);
                set("material", "copper");
        set("wield_msg", "$N�ӱ�����$n,ȫ�������������\n");
        set("unwield_msg", "$N������$n�Żر��ϡ�\n");
      }
        init_lance(30);
        setup();
}

