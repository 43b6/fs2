inherit ITEM;

void create()
{
        set_name("����", ({ "card" }) );
 if( clonep() )
                set_default_object(__FILE__);
 else {
        set("unit", "��");
        set("long", "����һ��ڤ��ħ�̵İ�����\n");
	set("value", 0);
}
        setup();
}
