inherit EQUIP;
void create()
{
        set_name("��Ʒ�ٷ�",({"robe"}) );
        set_weight(7000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ�����ſ�ȸ���޵Ĺٷ�,�Ǳ����еȹ�Ա�ķ�װ.\n");
        set("unit","��");
        set("value",1000);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 5);
	set("armor_prop/dodge",2);
	set("armor_prop/parry", 2);
	}
        setup();
}
