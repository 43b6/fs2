inherit ROOM;

void create()
{
 set("short","̫��ɽ��");
 set("long",@LONG
  һ�϶��壬ӳ��������ȴ��һ���ƾɵ�����,��Ȼ�е��ƾɣ���
  �����ܵĻ���ȴ�ܸɾ��������·�����һ���Ҷ��ͷ����
 �������޺����ĸ����֣���������Ӧ��ؤ���ܶ�����ڵ�
  �ˡ�

LONG);
 set("exits",([
 "up" : __DIR__"room16.c",
 "westdown" : __DIR__"room09.c",
 "enter" : "/u/l/list/area/monastic/room18.c"
 ]));
 setup();
}
