inherit EQUIP;

void create()
{
        set_name("�����˿խ��", ({ "glow cloth", "cloth" }) );
        set_weight(2800);
        set("long", "
һ�����Ϻ��������ɵ��·�����ͷ�����˿������һֻ���룬�ڿ�������
���ݣ�������˿�����������ξ�������䣬����·�����ᷢ������������
������

\n");
        set("unit", "��");
	set("value", 10000);
        set("material", "cloth");
        set("armor_type", "cloth");
	set("armor_prop/armor", 18);
	set("dodge",3);
        setup();
}
