inherit EQUIP;

void create()
{
	set_name("����", ({ "silk cloth", "cloth" }) );
        set_weight(3500);
	set("long", "һ���幤��ϸ��˿���·�, һ����֪���Ǹ����˼ҲŴ���������� \n");
        set("unit", "��");
	set("value",1000);
        set("material", "˿��");
        set("armor_type", "cloth");
	set("armor_prop/armor", 5);
        setup();
}
