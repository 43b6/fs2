//ħ���ϴ�--����ħ�� weapon exp 300��
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
	seteuid(getuid());
        set_name(HIR"����������"NOR,({"fire dragon ","dragon"}));
        set_weight(4500);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);        
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "��");
         set("long","����ħ��֮ר��������������������֮���ڡ�\n");

                set("value",500000);
		set("material", "crimsonsteel");
                set("ski_level",70);
                set("ski_type","unarmed");
				set("need_exp",5000000);
         set("wield_msg", HIY"$Nװ����$n"HIY"�������һ���$N��˫�ֲ�ͣȼ���š�\n"NOR);
		set("unwield_msg", HIY"$N����$n"HIY"��˫�ֵĻ���������ʧ�ˡ�\n"NOR);
	}
          init_unarmed(80);

	setup();
}
int query_autoload()
{
 return 1;
}