// /open/clan/new_heaven/item/item-1.c
inherit ITEM;

void create()
{
 	set_name("����", ({ "cloud chair", "chair" }) );
	set_weight(1);
if( clonep() )
                set_default_object(__FILE__);
        else {
	set("long","����һ��������������
");
	set("unit","��");
	set("value",1);
	set("clan_name","������");
}
}
