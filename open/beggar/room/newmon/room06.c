inherit ROOM;

void create()
{
 set("short","���᷿");
 set("long",@LONG
�ء��ó�����һ�߽����һ������ޱȵ�ζ���˱Ƕ���
���ۣ������ˣ����������������ؤ������ؤ������һ��
�������ˣ�����������������ร���Ȼ���е����ܵġ�

LONG);
 set("exits",([
 "east" : __DIR__"room07.c",
 "north" : __DIR__"room01.c",
 "south" : __DIR__"room11.c"
 ]));
 setup();
}
