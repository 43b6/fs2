inherit ROOM;
void create ()
{
set("short", "����֮��--���");
set("long",@LONG

��ǰ������һ���ߴ��Բ����ש�������ɫ����ۿ�����ʮ�ֵ�
���������ڲ�ʱ�Ĵ����򶷸�������ʮ�ֵĲ������·���и���
ʾ��(sign)��

LONG);
set("exits", ([
"enter" : __DIR__"ticket",
"west":"/open/main/room/gosteeple",
]));
set("item_desc",([
"sign":"������������50¥\n",
]));
set("outdoors", 1);
set("objects",([
__DIR__"leftman": 1,
__DIR__"rightman":1,
]));
setup();
}
