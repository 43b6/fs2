inherit EQUIP;
void create()
{
        set_name("�����ֻ�",({"jade wrists","wrists"}) );
        set_weight(7000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ����������Ƶ��ֻ�.\n");
        set("unit","��");
        set("value",1000);
	set("material","jade");
        set("armor_type","wrists");
	set("armor_prop/armor", 1);
	set("armor_prop/dodge", 5);
	}
        setup();
}
