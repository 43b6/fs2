//book.c

#include <ansi.h>
inherit ITEM;

void create()
{
   set_name(HIW"�����񽣾�"NOR,({"six book","book"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
"�Ȿ�����Ǽ��ش����ʽ�湦�������񽣡��ı�����\n");
		set("value",800);
		set("material", "paper");
}
        setup();
}
