inherit EQUIP;

void create()
{
        set_name("���Ʊ���",({"dragon armor","armor"}) );
        set_weight(10000);
        set("gender_only", "����");
                if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","һ��������ս�� ,����������ͼ�� ,ȱ�������˵㡣\n");
        set("unit", "��");
        set("value",30000);
        set("material","steel");
        set("armor_type", "cloth");
        set("armor_prop/armor",50 );
        set("armor_prop/force",5 );
        set("wear_msg","$N������$n ,��������׳���� .\n");
        }
        setup();
}

