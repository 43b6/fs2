inherit ITEM;
 void create()
{
        set_name("��������",({"lizard meat","meat"}) );
        set_weight(9000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","������Ĵ�����, ���ʼ�Ӳ, ζ��ͦ���ĵġ� ");
                set("unit", "��");
                set("value", 900000);
                set("ʳ��", ([
                        "ʣ" : 250,
                        "��Ӧ": 90,
                ]) );
        }
        setup();
}
