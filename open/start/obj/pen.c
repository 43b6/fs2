//pen.c : �ֱ�

#include <weapon.h>

inherit STABBER;

void create()
{
        set_name("�ֱ�",({"steel pen","pen"}));
        set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "֦");
                set("long","�˱���������, ��˵Ϊ���������á�\n");
                set("value",750);
		set("material", "steel");
                set("wield_msg", "$N����ǰ�ڴ����ͳ�һ֦$n, �����������ӡ�\n");
                set("unwield_msg", "$N��һ�������˵���̬��$n�ս���ǰ�ڴ��С�\n");
	}
        init_stabber(30);
	setup();
}
int wield()
{
        if((string)this_player()->query("family/family_name") != "����")
           return notify_fail("�ֱ�ֻ�����ŵ�������\n");
        else{
              ::wield();
            }
        return 1;
}
