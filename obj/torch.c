// torch

inherit ITEM;

void create()
{
        set_name("ľͷ", ({ "torch", }) );
        set("unit", "��");
        set("long", "һ�����Ե����յ�ľͷ��\n");
	set("burned","���չ��");
	// light_up ���� 0 ��ʾ����ȼ�յ�������
      set("light_up",1000);
       set("value", 100);
	setup();
}
