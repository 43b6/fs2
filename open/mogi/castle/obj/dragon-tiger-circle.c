// ��а��weapon exp 175��
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
	seteuid(getuid());
        set_name("�����ֻ�",({"dragon tiger circle","circle"}));
        set_weight(3500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "��");
         set("long","��˵��һ���Ҵ���С�����ο���������\n");

                set("value",70000);
		set("material", "steel");
                set("ski_level",70);
                set("ski_type","unarmed");
         set("wield_msg", "װ����$n,$N�Ĺ������������\n");
		set("unwield_msg", "$N����$n,��ɫ���Ͷ��ˡ�\n");
	}
          init_unarmed(75);

	setup();
}
