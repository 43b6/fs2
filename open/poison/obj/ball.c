#include <weapon.h>
#include <ansi.h>
inherit THROWING;


void create()
{
	set_name("����޼", ({"iron ball", "ball"}) );
	if ( clonep() )
 		set_default_object(__FILE__);
	else{
		set("long", "
һ���Ƶ�СԲ�����沼���˼�̣�Ϊ�������˳���
�İ���֮һ��\n");
		set("unit","Щ");
		set("material","steel");
		set("base_unit","��");
		set("base_weight",50);
		set("base_value",10);
		
            }
        set_amount(10);
	init_throwing(3);
	setup();
}
