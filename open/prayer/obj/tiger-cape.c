inherit EQUIP;

void create()
{
        set_name("��ͷ��",({"tiger cape","cape"}));
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","��а���Ļ�ͷ��Ϊװ�εĻ���, ����ǿ�����ϵķ����� .\n");
        set("unit","��");
        set("value",6000);
        set("material","leather");
        set("armor_type","cape");
        set("armor_prop/armor", 1);
        }
        setup();
}                        