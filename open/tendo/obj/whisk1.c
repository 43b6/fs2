// whisk by Airke 
// QC by Anmy (98/2/25)

#include <weapon.h>
inherit WHIP;

void create()
{
        set_name("����",({"whisk"}));
        set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
          set("unit","��");
          set("value",500);
          set("material","wood");
	  set("long",
        "����һ����ɨ�ҳ��ķ�����\n");
	}
        init_whip(7);
	setup();
}

int query_autoload()
{
	object me;
	if( !me=this_player() ) return 0;
  if(me->query("class")!="taoist")
	return 0;
  return 1;
}

