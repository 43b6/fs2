inherit ROOM;

void create()
{
        set("short","ʬ�ǵ�");
        set("long",@LONG
���´��������ʬ��ζ��������һ����ʬ�����ѻ����ɵĵ�·��
��̤�µ�ÿһ�������Ὣ���µ�ʬ�Ǹ��ȵķ��飬�����������˽��
�㣬�о���ʮ�ֵ����ܣ�����ı��ߣ����������Ŀ���һ�����ְ�
���͵�ɭ�֣�����������Ϸ����ƺ���һ�����������������ߣ���
��ɳĮ�ڡ�
LONG);
        set("exits",([
"north":__DIR__"d-05",
"south":__DIR__"d-06",
"west":__DIR__"d-02",
"east":__DIR__"ea-01",
]));
        set("objects",([
__DIR__"npc/die-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}
