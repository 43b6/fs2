inherit EQUIP;

void create()
{
        set_name("����սѥ",({"gold boots","boots"}) );
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
��һƬƬ�������εĻƽ���Ƭ��ӳɵ�սѥ���ഫ����������ص�������
�Ŀ���Ԫ�أ����������������˼亱���Ĳ��ʡ�
\n");
        set("unit","��");
	set("value",3000);
        set("material","crimsonsteel");
        set("armor_type","boots");
	set("armor_prop/armor", 2);
	set("armor_prop/dodge", 5);
        }
        setup();
}
