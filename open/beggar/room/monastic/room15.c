inherit ROOM;

void create()
{
 set("short","�ߵ�");
 set("long",@LONG
  ���Թ���̫����⾰ɫ�Ļ�ͼ��������棬�㾲���Ĺ���
  ��ÿһ��ͼ����������Ҳ���뻭�У�������������������
  ̫���Թ��;�ɫһ����������ã��㲻���������ޣ�ؤ��
  �о�ȻҲ����滭��š�

LONG);
 set("exits",([
 "east" : __DIR__"room16.c",
 "west" : __DIR__"room14.c",
 "north" : __DIR__"room06.c",
 "south" : __DIR__"room24.c",
 ]));
 setup();
}
