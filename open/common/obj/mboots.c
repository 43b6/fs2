inherit EQUIP;

void create()
{
        set_name("��ͷ��ƤЬ", ({ "gentleman boots", "boots"  }) );
        set("unit", "˫");
        set("long", "һ˫��ʿƤЬ��ͨ�����ǽ���ʱ��.\n");
	set("armor_type", "boots");
	set("armor_prop/armor", 3 );
	set("material", "Ƥ��");// �൱�� 20, ����������ֵ����
	set_weight(1200);
	set("value",1800);
        setup();
}
