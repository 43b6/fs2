inherit EQUIP;

void create()
{
        set_name("��˿���", ({ "agraffe" }) );
        set_weight(3200);
        set("long", "
��Ȼ���ý���˿�ߴ��Ƴɵģ�����һ��Ҳ����Ӱ������Ļ�����ṩ��
��ı���������

\n");
        set("unit", "��");
	 set("value",10000);
        set("material", "steel");
        set("armor_type", "cloth");
	set("armor_prop/armor", 20);
	set("armor_prop/parry",2);
        setup();
}
