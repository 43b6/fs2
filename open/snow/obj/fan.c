inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIW "����" NOR,({"feature fan","fan"}));
	set("long","����һ֧����ë���ɵ����ӡ�\n");
	set("no_drop",1);
	set("no_give",1);
	set("no_get",1);
	set("unit","֧");
	set("value",100);
        setup();
}
