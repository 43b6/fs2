
//Я��mob exp180��;kee 5000;dragon-blade 120;��master��ǿ
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name(HIR"����ħ��"NOR,({"ghost-blade","blade"}));
        set_weight(50000);
set("no_sell",1);
set("no_give",1);
set("no_get",1);
set("no_auc",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long","��ӡ�������ڴ˵��У��������\n");
                set("value",100000);
                set("material", "steel");
                set("wield_msg", HIG"����$n,$N��а�����Ӳ���\n"NOR);
                set("unwield_msg", "$N����$n,���ϵ�а��Ҳ��ʧ�ˡ�\n");
        }
        init_blade(50);

        setup();
}
