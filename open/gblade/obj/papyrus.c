inherit ITEM;

void create()
{
        set_name( "������",({"papyrus"}));
        set_weight(400);
        if( clonep() )
          set_default_object(__FILE__);
        else {
          set("unit", "��");
          set("long","
�������Ƥ�����Ƶ�ֽҳ��һ�۱����������֮��Զ��
��������д�ţ�
������ѡ����....��兀�����Ʀǡ�....�ס�....
�㿴�˰��죬ȴ��һ����Ҳ������....��
�ǵ��Ҹ��˷��벻�� ��\n");
}
        setup();
}
