inherit EQUIP;

void create()
{
        set_name("����ս��",({"silver robe","robe"}) );
	set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
��Ŀ��ҫ����ɫ���󣬽����ع�סս�۱��棬�����Ծ���˿��֯Ϊ�ף���
��ˮ������������ɵģ�ϸ�͵ĸ�˿����Ȼ��ˮ����ʹ��ս���ڼ�ʵ֮��
�Ը����顣
\n");
        set("unit", "��");
        set("value",3000);
        set("material","steel");
        set("armor_type", "cloth");
	set("armor_prop/armor",12);
        set("armor_prop/dodge", 2);
        }
        setup();
}
