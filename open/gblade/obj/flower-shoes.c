inherit EQUIP;

void create()
{
        set_name("�廨Ь",({"flower shoes","shoes"}) );
	set_weight(300);
        set("gender_only", "Ů��");
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
�ֹ�ϸ��С�ɵ�һ˫�廨Ь��Ь�����������Ļ��䣬�Ա�׺�Ŵ��̵�Ҷ
�꣬��Լ��ɢ����һ�����㡣
\n");
        set("unit","��");
        set("value",300);
        set("material","cloth");
        set("armor_type","boots");
	set("armor_prop/armor", 1);
        set("armor_prop/dodge", 1);
        }
        setup();
}
