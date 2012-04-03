// whisk.c by Airke
// QC by Anmy (98/2/25)

#include <weapon.h>
inherit WHIP;

void create()
{
        set_name("三清拂尘",({"whisk"}));
        set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","把");
                set("value",2000);
		set("material","steel");
	}
        init_whip(40);
	setup();
}

int wield()
{
  if(!environment()) return 0;
  if(!living(environment())) return 0;
  if(environment()->query("class")!="taoist")
    return notify_fail("这是道士专用的拂尘。\n");
  else
    return ::wield();
}
