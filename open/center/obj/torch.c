// torch
#include <weapon.h>

inherit STABBER;

void create()
{
        set_name("ľͷ", ({ "torch", }) );
	set_weight(1000);
          set("unit", "��");
          set("long", "һ�����Ե����յ�ľͷ��Ҳ�����������������"+
		      "ƽʱҲ�����������ˡ�\n");
	  // light_up ���� 0 ��ʾ����ȼ�յ�������
          set("light_up", 200);
	  set("burned", "���չ��");
	  set("value", 10);
	  set("material", "wood");
	  set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	  set("unwield_msg", "$N�����е�$n����һ�š�\n");
	init_stabber(5);
	setup();
}
