inherit EQUIP;

void create()
{
        set_name("��˿ս��",({"gold robe","robe"}) );
	set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
����ϸ�Ľ�˿����������˿��֯���ɣ���һ����߷���������ľ���ս
�ۣ���̻Ի͵���ۣ�������Ϊ֮��Ȼ���ߡ�
\n");
        set("unit", "��");
        set("value",10000);
        set("material","crimsonsteel");
        set("armor_type", "cloth");
	set("armor_prop/armor",15);
	set("armor_prop/dodge", 5);
        }
        setup();
}
