inherit EQUIP;

void create()
{
        set_name("��������",({"topknot"}) );
        set_weight(800);
        if( clonep() )
 set_default_object(__FILE__);
 else {
        set("long","
�ý��Ӵ�ɵķ��Σ�һ�˹���һ�����飬����������ɢ�����˵Ĺ�����
�������ҡ��\���ζ��š�
\n");
        set("unit","֦");
        set("gender_only", "Ů��");
	set("value", 4000);
        set("material","gold");
        set("armor_type","head");
	set("armor_prop/armor",6);
	set("armor_prop/dodge",1);
 }
        setup();
}
