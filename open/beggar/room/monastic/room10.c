inherit ROOM;

void create()
{
 set("short","���");
 set("long",@LONG
  �˷����ǵ绤����Ϣ�ĵط��������ڷ���������Ϊ�ľ���
  Ҫ���������İ�Σ����Ҳ�������ķ����ڰ����ĸ�����
LONG);
 set("exits",([
 "west" : __DIR__"room09.c"
 ]));

 
setup();
}
