// goldwhisk.c by Airke
// QC by Anmy (98/2/25)

#include <weapon.h>
inherit WHIP;

void create()
{
	set_name("�ƽ����",({"Goldwhisk","goldwhisk","whisk"}) );
        set_weight(1500);
        set("value",5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","ֻ����߽׶εĵ�ʿ����ӵ����ѻƽ������\n");	
		set("material","gold");
	set("wield_msg","$N�ӱ���γ�$n�������С�\n");
		set("unwield_msg","$N�����е�$n�һر���\n");
	}
	init_whip(70);
	setup();
}
