// torch

inherit ITEM;

void create()
{
        set_name("ľ��", ({ "torch" }) );
        set("unit", "��");
        set("long", "һ�����Ե����յ�ľ��.\n");
	set("burned","���չ��");
	// light_up ���� 0 ��ʾ����ȼ�յ�������
        set("light_up", 60);
	set_weight(1000);
        set("value", 3);
        setup();
}
