inherit EQUIP;

void create()
{
        set_name("���С��ѥ",({"sole leather boots","boots"}) );
	set_weight(300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
�����ɰ�ϬţƤ���Ƴɵģ�����������޲�������ģ����õ����������
���ٵ��˶�ʱ���Ų��ܵ������Ƶı�����Ҳ��ΪϬţ�Ѿ����ܵ����ʱ���
��ϡ�ж�����Ը��Ե���˫ѥ�ӵ�ϡ�С�

\n");
        set("unit","˫");
	set("value",2000);
        set("material","cloth");
        set("armor_type","boots");
        set("armor_prop/armor", 2);
	set("armor_prop/dodge", 5);
        }
        setup();
}
