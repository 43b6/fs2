inherit ROOM;

void create()
{
        set("short","ʬ�ǵ�");
        set("long",@LONG
ʬ�ǵĴ�������Ķ��λ���ŵ��²��Ź�ͷǰ�����㲿�����ĸ�
�������ȴҲ��һ��ǰ��δ�е����ʸУ�������ȥ����һ���޴��
ɳ����ְ����͵İ�Χ�ų���ڣ���������������ɳĮ��
LONG);
        set("exits",([
"north":__DIR__"d-14",
"south":__DIR__"d-15",
"east":__DIR__"d-10",
]));
        set("objects",([
__DIR__"npc/die-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}
