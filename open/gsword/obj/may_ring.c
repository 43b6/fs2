// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("��÷ָ��",({"may ring","ring"}) );
        set_weight(1500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","����ɫ�Ľ�ָ���ɽ�������÷Ӱ����\n");
        set("unit","ö");
        set("value", 500);
        set("material","copper");
        set("armor_type","finger");
        set("armor_prop/force", 3);
        set("armor_prop/armor", 3);
	}
        setup();
}
