inherit ITEM;

void create()
{
        set_name( "����",({"fan"}));
        set_weight(300);
        if( clonep() )
          set_default_object(__FILE__);
        else {
          set("unit", "��");
          set("long","
һ��Բ�ε�С���ӣ��������һ��ԧ��Ϸˮ��ͼ����\n");
          set("value", 80);
}
        setup();
}
