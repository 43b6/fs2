inherit ROOM;

void create()
{
 set("short","���᷿");
 set("long",@LONG
  �ء��ó�����һ�߽����һ������ޱȵ�ζ���˱Ƕ�����
  �ۣ������ˣ����������������ؤ������ؤ������һ������
  ���ˣ�����������������ร���Ȼ���е����ܵġ�

LONG);
 set("exits",([
 "south" : __DIR__"room16.c",
 "north" : __DIR__"room01.c"
 ]));
 setup();
}
