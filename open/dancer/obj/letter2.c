inherit ITEM;

void create()
{
        set_name( "�°����ױ���",({"yua's letter"}));
        set_weight(300);
        if( clonep() )
          set_default_object(__FILE__);
        else {
          set("unit", "��");
          set("long","
һ���°�����ױ��š�\n");
          set("value", 80);
}
        setup();
}
