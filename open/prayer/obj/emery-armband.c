inherit EQUIP;

void create()
{
        set_name("��ձۻ�",({"emery armband","armband"}));

        set_weight(1300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","���ɰ�뾫�ջ��ƶ��ɵıۻ�, ��ͷ��Ƕа�޵�����, ������������е�а��, ��Ϊ���� .\n");
        set("unit","ֻ");
        set("value",10000);
        set("material","steel");
        set("armor_type","armbands");
        set("armor_prop/armor", 4);
        }
        setup();
}                        
