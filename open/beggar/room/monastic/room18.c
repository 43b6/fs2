inherit ROOM;

void create()
{
 set("short","����");
 set("long",@LONG
  ����������Ȼ���������ƾɾɵģ����������ľ��ȴͦ
  ��ʵ�ģ�˿��û���𻵵ĺۼ����������߸�ͨ�����᷿
  �붫�᷿��ǰ������ؤ������ۼ����ڵġ������á��ˡ�

LONG);
 set("exits",([
 "east" : __DIR__"room19.c",
 "west" : __DIR__"room17.c",
 "north" : __DIR__"room09.c",
 "out" : "/u/l/list/area/room08.c"
 ]));
 setup();
}
