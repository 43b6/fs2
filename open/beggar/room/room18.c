inherit ROOM;

void create()
{
 set("short","�ͱ�");
 set("long",@LONG
  ��ǰ��һƬ�������ͱڣ��ͱ����б����������ĺۼ���
  �ƺ��ͱڵĶ��˻�����ס��
  
LONG);
 set("exits",([
 "up" : __DIR__"room19.c",
 "down" : __DIR__"room17.c",
]));

setup();
}
