inherit EQUIP;
void create()
{
        set_name("��Ʒ���޹ٷ�",({"robe"}) );
        set_weight(7000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ����Ʒ���޹ٷ�,�����ý�˿֯��������ͼ��.\n");
        set("unit","��");
        set("value",1000);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 5);
	set("armor_prop/dodge",1);
	set("armor_prop/parry", 1);
	}
        setup();
}
