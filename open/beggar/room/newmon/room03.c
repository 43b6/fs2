inherit ROOM;

void create()
{
 set("short","ѵ����");
 set("long",@LONG
������ؤ��ѵ���гɵĵ��Ӽ�ǿѵ���ĵط����㿴������
�ĵ��Ӻ���ͷ�Ĳ�ͬ������ĵ������϶����в�������һ
��������������һֱ���˸����������ؤ���д���������
�ĵط���
  
LONG);
 set("exits",([
 "east" : __DIR__"room04.c",
 "west" : __DIR__"room02.c",
 "south" : __DIR__"room08.c"
]));


setup();
}
