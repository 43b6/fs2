// /u/j/judd/room/r25.c
inherit ROOM;

void create ()
{
set("short", "��֮ͨ��");
set("long", @LONG
����ǰ���·���㲻������һ������ֻ�����Զ��ǿ������׵Ŀ�
������Ҫͨ�����ֻ��С�����������������������С·ǰ������
���¿�����ѹѹ��һƬ����������е�ͷ�Σ���øϿ�ͨ��������ȥ
��ž��군�ˣ�
LONG
);
set("light_up", 1);
set("exits", ([ /* sizeof() == 2 */
 "southeast" : __DIR__"land.c",
 "northwest" : __DIR__"r21.c",
]));
setup();
}
