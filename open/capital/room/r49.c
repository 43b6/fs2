// Room: /open/capital/room/r49.c

#include </open/capital/capital.h>
inherit ROOM;

void create()
{
	set("short","�����㳡");
	set("long",@LONG
һ�����͵Ĺ㳡������ȥ��һ���ܿ�ĳ�����������ȥ����һ��
��С�ĺ�ͬ���㳡��С���ۼ������ַǷ�������Ǿ���һ��һ�Ĵ��м�
����Ϊ���ڳǶ�������ϰ�߳������С�ȫ�����ϱ��ӻ���Ҫ�������
���ɸ��ص�����ת��������������������Կ������־����к���ǣ��
�����ģ����˸���һ�����Q�ģ���ô���С�

LONG);


  set("outdoors", "/open/capital" );

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r50",
  "south" : __DIR__"r48",
]) );

  set("gopath", "south" );
  set("objects",([
  "/open/capital/npc/vendor":1,
  ]));

  setup();
}
