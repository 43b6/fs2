inherit EQUIP;

void create()
{
	set_name("����ս��",({"gold armor","armor"}));
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�ɾ��ֻ�ϻƽ������� , �����ļ� ,����Ϊ���ء�
");
        set("unit", "��");
	set("value",4000);
        set("material","crimsonsteel");
	set("armor_type", "cloth");
	set("armor_prop/armor",20);
	set("armor_prop/dodge", -2);
	set("armor_prop/move",-2);
        }
        setup();
}
