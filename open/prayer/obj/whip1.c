// ���ձ�
#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("���ձ�",({"sun-whip","whip"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
        set("value",30000);
        set("no_sell", 1);     
        set("no_drop", 1);
        set("no_auc", 1);    
	set("material","iron");
	set("rigidity",50);
	set("long",
	"����ϼɽ�ɵ��������õı�����\n");
	}
	init_whip(80);
	setup();
}
