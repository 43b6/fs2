
//Я��mob exp180��;kee 5000;dragon-blade 120;��master��ǿ
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name(HIR"������"NOR,({"sun-moon blade","blade","sun-moon"}));
set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","���������չ����¹⾫���ĵ���\n");
                set("value",100000);
                set("material", "crimsonsteel");
                set("wield_msg", HIR"����$n,$N������ͻȻ��������\n"NOR);
                set("unwield_msg", HIB"$N����$n,���ϵ�����Ҳ��ʧ�ˡ�\n"NOR);
        
}
    init_blade(70);
        setup();
}

