#include <weapon.h>
inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name("ԧ�쵶" ,({"mandarin duck blade","blade"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
        set("long","�����Ͻ���һ�Խ���˿��ɵ�ԧ��ᣬ������Ҳ����һ��ԧ�죬����
����װ���õĵ���
\n");

	set("value",8000);
        set("material", "steel");
       
        }
	init_blade(50);

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 50);
	set("ski_level2", 40);
        setup();
}
int wield()
{
     if ((string)this_player()->query("gender") !="Ů��")
           return notify_fail("Ů�����õĵ�....�������ò�̫�ðɣ�\n");
     else {
           ::wield();
            set("wield_msg","$N�ѵ��������У��������غ��ʣ������ֵġ�\n");
        set("unwield_msg", "$N����һ���ܿ��ε����ƣ��ѵ��ջص���֮�С�\n");
          }
     return 1;
}
